#include <iostream>
#include <vector>
#include <cstring>
#include "BancoDeDados.cpp"
#include <limits>
using namespace std;

void limparBuffers();
void limpaTela();
void pause();
int Menu();

int main(){

    vector<Aluno> alunos;
    int quantidade;
    string nomeArquivo;
    vector<string> conteudo;
    int opcao;

    do{
        limpaTela();

        opcao = Menu();

        switch(opcao){
            case 1:
                limpaTela();
                cout<<"Digite a quantidade de alunos: ";
                cin>>quantidade;

                for(int i = 0; i < quantidade; i++){
                    string nome, email;
                    float nota1, nota2;

                    limparBuffers();

                    cout<<"\nAluno "<<i+1<<": "<<endl;
                    cout<<"Nome: ";
                    getline(cin, nome);
                    cout<<"Email: ";
                    cin>>email;
                    cout<<"Nota 1: ";
                    cin>>nota1;
                    cout<<"Nota 2: ";
                    cin>>nota2;

                    Aluno aluno(nome, email, nota1, nota2);
                    alunos.push_back(aluno);
                }

                cout<<"Nome do arquivo: ";
                cin>>nomeArquivo;

                if(BancoDeDados::salvarDados(alunos, nomeArquivo)) cout<<"Arquivo criado com sucesso!"<<endl;
                else cout<<"Erro ao criar arquivo!"<<endl;

                alunos.clear();
                
                break;

            case 2:
                limpaTela();

                break;

            case 3:
                limpaTela();
                cout<<"Digite o nome do arquivo: "<<endl;
                cin>>nomeArquivo;
                cout<<endl;
                break;

            case 4:
                limpaTela();
                cout<<"Digite o nome do arquivo: "<<endl;
                cin>>nomeArquivo;
                cout<<endl;

                conteudo = BancoDeDados::recuperarDados(nomeArquivo);
                for(string linha : conteudo) cout<<linha<<endl;

                pause();
                conteudo.clear();
                break;

            case 0:
                break;

            default:
                cout<<"Opcao invalida!"<<endl;
                break;
        }
    } while(opcao != 0);
    return 0;
}

void limparBuffers()
{
    // Limpa o buffer de entrada do cin
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Limpa o buffer de saída do cout
    cout.flush();
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

void pause()
{
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.clear(); // Limpa quaisquer flags de erro no cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int Menu(){
    cout<<"############ MENU ############"<<endl;
    cout<<"1 - Inserir dados"<<endl;
    cout<<"2 - Excluir dados"<<endl;
    cout<<"3 - Alterar dados"<<endl;
    cout<<"4 - Exibir conteudo do arquivo"<<endl;
    cout<<"0 - Encerrar programa"<<endl;

    int opcao;
    cout<<"\nDigite uma opção: ";
    cin>>opcao;

    return opcao;
}