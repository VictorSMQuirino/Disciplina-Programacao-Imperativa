#include <iostream>
#include <cstring>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;

struct Produto{
    string codigo;
    string nome;
    double preco;
};

void inserir_produto(vector<Produto> &);
void excluir_produto(vector<Produto> &);
void listar_produtos(vector<Produto> &);
void consultar_produto(vector<Produto> &);

string gera_codigo(vector<Produto> &);
bool ja_existe_produto_com_nome(vector<Produto> &, string);

void pause();
void limpaTela();
void limparBuffers();
int menu();

int main(){

    int opcao;
    vector<Produto> produtos;

    do{
        limpaTela();
        opcao = menu();

        switch(opcao){
            case 1:
                limpaTela();
                inserir_produto(produtos);
                if(produtos.size() < 300) limparBuffers();
                else cout<<"O numero limite de produtos cadastrados eh 300. Exclua algum para cadastrar outro"<<endl;
                pause();
                break;
            case 2:
                limparBuffers();
                limpaTela();
                if(produtos.empty()){
                    cout<<"Nao ha produtos cadastrados!"<<endl;
                    pause();
                } else {
                    excluir_produto(produtos);
                    pause();
                }
                break;
            case 3:
                limparBuffers();
                limpaTela();
                if(produtos.empty()){
                    cout<<"Nao ha produtos cadastrados!"<<endl;
                    pause();
                } else {
                    listar_produtos(produtos);
                    pause();
                } 
                break;
            case 4:
                limparBuffers();
                limpaTela();
                if(produtos.empty()){
                    cout<<"Nao ha produtos cadastrados!"<<endl;
                    pause();
                } else {
                    consultar_produto(produtos);
                    pause();
                }
                break;
            case 0:
                break;
            default:
                limparBuffers();
                limpaTela();
                cout<<"Opcao invalida. Tente novamente"<<endl;
                pause();
                break;
        }
    } while(opcao != 0);

    return 0;
}

string gera_codigo(vector<Produto> &produtos){
    string baseString = "ABCDEFGHIJKLMN";
    string codigo = baseString + to_string(produtos.size());

    return codigo;
}

bool ja_existe_produto_com_nome(vector<Produto> &produtos, string nome){
    for(Produto produto : produtos)
        if(produto.nome == nome) return true;

    return false;
}

void inserir_produto(vector<Produto> &produtos){
    Produto produto;
    produto.codigo = gera_codigo(produtos);
    do{
        limparBuffers();
        limpaTela();
        cout<<"Nome do produto: ";
        getline(cin, produto.nome);

        if(produto.nome.length() > 20){
            cout<<"Nome do produto nao pode ter mais que 20 caracteres! Tente novamente"<<endl;
            pause();
        } else if(ja_existe_produto_com_nome(produtos, produto.nome)){
            cout<<"Ja existe um produto cadastrado com esse nome, tente outro."<<endl;
            pause();
        }
    } while(produto.nome.length() > 20 || ja_existe_produto_com_nome(produtos, produto.nome));

    cout<<"Preco do produto: ";
    cin>>produto.preco;

    produtos.push_back(produto);
    cout<<"\nProduto cadastrado com sucesso!"<<endl;
}

void excluir_produto(vector<Produto> &produtos){
    string codigo;
    cout<<"Digite o codigo do produto: ";
    getline(cin, codigo);

    bool encontrou = false;

    for(int i = 0; i < produtos.size(); i++){
        if(produtos[i].codigo == codigo){
            produtos.erase(produtos.begin() + i);
            cout<<"\nProduto excluido com sucesso!"<<endl;
            encontrou = true;
            break;
        }
    }

    if(!encontrou) cout<<"\nProduto nao encontrado!"<<endl;
}

void listar_produtos(vector<Produto> &produtos){
    cout<<"#### LISTA DE PRODUTOS ####"<<endl;

    for(Produto produto : produtos){
        cout<<"---------------------------------"<<endl;
        cout<<"Codigo: "<<produto.codigo<<endl;
        cout<<produto.nome<<endl;
        cout<<"Preco: "<<fixed<<setprecision(2)<<produto.preco<<endl;
    }
    cout<<"---------------------------------"<<endl;
}

void consultar_produto(vector<Produto> &produtos){
    string codigo;
    cout<<"Digite o codigo do produto: ";
    getline(cin, codigo);

    bool encontrou = false;

    for(Produto produto : produtos){
        if(produto.codigo == codigo){
            cout<<"--------------------------------"<<endl;
            cout<<"Codigo: "<<produto.codigo<<endl;
            cout<<produto.nome<<endl;
            cout<<"Preco: "<<produto.preco<<endl;
            cout<<"--------------------------------"<<endl;
            encontrou = true;
            break;
        }
    }

    if(!encontrou) cout<<"\nProduto nao encontrado!"<<endl;
}

int menu(){
    int opcao;
    cout<<"######### MENU #########"<<endl;
    cout<<"1 - Inserir produto"<<endl;
    cout<<"2 - Excluir produto"<<endl;
    cout<<"3 - Listar produtos"<<endl;
    cout<<"4 - Consultar produto"<<endl;
    cout<<"0 - Encerrar programa"<<endl;

    cout<<"\nDigite uma opcao: ";
    cin>>opcao;

    return opcao;
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