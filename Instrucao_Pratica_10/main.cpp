#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

void inserir_aluno(vector<string> &, vector<float> &, vector<float> &);
void excluir_aluno(vector<string> &, vector<float> &, vector<float> &);
void alterar_aluno(vector<string> &, vector<float> &, vector<float> &);
void listar_alunos(vector<string> &, vector<float> &, vector<float> &);

void bubble_sort(vector<string> &, vector<float> &, vector<float> &);
int Menu();

void pause();
void limpaTela();
void limparBuffers();

int main(){

    vector<string> alunos;
    vector<float> notas1, notas2;
    int n;

    string nome;
    float nota1, nota2;

    cout<<"Digite a quantidade de alunos: ";
    cin>>n;
    cout<<"Limite de alunos definido para "<<n<<endl;
    pause();

    int opcao;

    do{
        limpaTela();
        opcao = Menu();

        switch(opcao){
            case 1:
                inserir_aluno(alunos, notas1, notas2, n);
                pause();

                break;

            case 2:
                if(alunos.empty()){
                    cout<<"Não há alunos cadastrados!"<<endl;
                    pause();
                } else {
                    limpaTela();
                    limparBuffers();
                    excluir_aluno(alunos, notas1, notas2);
                    pause();
                }
                break;
            
            case 3:
                if(alunos.empty()){
                    cout<<"Não há alunos cadastrados!"<<endl;
                    pause();
                } else {
                    limpaTela();
                    limparBuffers();
                    alterar_aluno(alunos, notas1, notas2);
                    pause();
                }
                break;

            case 4:
                if(alunos.empty()){
                    cout<<"Não há alunos cadastrados!"<<endl;
                    pause();
                } else {
                    limpaTela();
                    limparBuffers();
                    listar_alunos(alunos, notas1, notas2);
                    pause();
                }
                break;

            default:
                cout<<"Opcao invalida!";
                pause();
                break;
        }

    } while(opcao != 0);


    return 0;
}

void bubble_sort(vector<string> &alunos, vector<float> &notas1, vector<float> &notas2){
   auto n = alunos.end() - 1;
   bool trocou;
   auto k = notas1.begin();
   auto l = notas2.begin();

   do{
    trocou = false;
    for(auto j = alunos.begin(); j < n; j++, k++, l++){
        if(*j > *(j+1)){
            swap(*j, *(j+1));
            swap(*k, *(k+1));
            swap(*l, *(l+1));
            trocou = true;
        }
    }
    n--;
   } while(trocou);
}

void pause()
{
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void limpaTela()
{
    cin.clear();

    // Verifica se a variável de ambiente WINDIR está definida (ambiente Windows)
    const char *windir = getenv("WINDIR");

    if (windir != nullptr && strlen(windir) > 0)
    {
        // Se estiver definida, estamos no Windows, então use "cls"
        system("cls");
    }
    else
    {
        // Caso contrário, estamos em um ambiente Unix/Linux, use "clear"
        system("clear");
    }
}

void limparBuffers()
{
    // Limpa o buffer de entrada do cin
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Limpa o buffer de saída do cout
    cout.flush();
}

int Menu(){
    int opcao;
    cout<<"######### MENU #########"<<endl;
    cout<<"1 - Inserir aluno"<<endl;
    cout<<"2 - Excluir aluno"<<endl;
    cout<<"3 - Alterar aluno"<<endl;
    cout<<"4 - Listar alunos"<<endl;
    cout<<"0 - Encerrar programa"<<endl;

    cout<<"Digite uma opcao: ";
    cin>>opcao;

    return opcao;
}

void inserir_aluno(vector<string> &alunos, vector<float> &notas1, vector<float> &notas2, int n){
    string nome;
    float nota1, nota2;
    if(alunos.size() < n){
        char resposta;
        do{
            limpaTela();
            limparBuffers();
            cout<<"Nome do aluno: ";
            getline(cin, nome);
            cout<<"Nota 1: ";
            cin>>nota1;
            cout<<"Nota 2: ";
            cin>>nota2;

            alunos.push_back(nome);
            notas1.push_back(nota1);
            notas2.push_back(nota2);

            bubble_sort(alunos, notas1, notas2);
            
            cout<<"\nDeseja inserir mais alunos(s/ n)";
            cin>>resposta;
            if(alunos.size() >= n && resposta == 's'){
                cout<<"Numero limite de alunos atingido!"<<endl;
                resposta = 'n';
                pause();
            }
        } while(resposta == 's');

    } else {
        cout<<"Numero limite de alunos atingido!"<<endl;
    }
}

void excluir_aluno(vector<string> &alunos, vector<float> &notas1, vector<float> &notas2){
    bool excluiu = false;
    string nome;
    cout<<"Nome do aluno a ser excluido: ";
    getline(cin, nome);

    for(int i = 0; i < alunos.size(); i++){
        if(alunos[i] == nome){
            alunos.erase(alunos.begin() + i);
            notas1.erase(notas1.begin() + i);
            notas2.erase(notas2.begin() + i);

            excluiu = true;
        }
    }

    if(!excluiu) cout<<"Aluno não encontrado!"<<endl;
    else cout<<"Aluno excluido com sucesso!"<<endl;
}

void alterar_aluno(vector<string> &alunos, vector<float> &notas1, vector<float> &notas2){
    string nome;
    float nota;
    bool alterou = false, encontrou = false;

    cout<<"Nome do aluno a ser alterado: ";
    getline(cin, nome);

    for(int i = 0; i < alunos.size(); i++){
        if(alunos[i] == nome){
            encontrou = true;
            char resposta;
            cout<<"Deseja alterar o nome do aluno? (s/ n) ";
            cin>>resposta;
            if(resposta =='s'){
                limparBuffers();
                cout<<"Novo nome do aluno: ";
                getline(cin, nome);
                alunos[i] = nome;
                alterou = true;
            }

            cout<<"Deseja alterar a nota 1 de "<<alunos[i]<<"? (s/ n)";
            cin>>resposta;
            if(resposta == 's'){
                cout<<"Nota nota 1: ";
                cin>>nota;
                notas1[i] = nota;
                alterou = true;
            }
            
            cout<<"Deseja alterar a nota 2 de "<<alunos[i]<<"? (s/ n)";
            cin>>resposta;
            if(resposta == 's'){
                cout<<"Nota nota 2: ";
                cin>>nota;
                notas2[i] = nota;
                alterou = true;
            }

            bubble_sort(alunos, notas1, notas2);
        }
    }

    if(!encontrou) cout<<"Aluno não encontrado!"<<endl;
    if(alterou) cout<<"Aluno atualizado com sucesso!"<<endl;
}

void listar_alunos(vector<string> &alunos, vector<float> &notas1, vector<float> &notas2){
    for(int i = 0; i < alunos.size(); i++){
        float media = (notas1[i] + notas2[i]) / 2;
        cout<<"Nome: "<<alunos[i]<<endl;
        cout<<"Nota 1: "<<fixed<<setprecision(2)<<notas1[i]<<endl;
        cout<<"Nota 2: "<<fixed<<setprecision(2)<<notas2[i]<<endl;
        cout<<"Media = "<<fixed<<setprecision(2)<<media<<endl;
    }
}