#include <iostream>
#include <vector>

using namespace std;

template <class T> 
class Lista{
    private:
        vector<T> elementos;
    public:
        void adicionarElemeto(T e);
        void removerElemento(T e);
        void listarElementos();

};

template <class T> void Lista<T>::adicionarElemeto(T e){
    elementos.push_back(e);
}

template <class T> void Lista<T>::removerElemento(T e){
    for(int i = 0; i < elementos.size(); i++){
        if(elementos[i] == e){
            elementos.erase(elementos.begin() + i);
            return;
        }
    }

    cout<<"o elemento "<<e<<" nao existe no conjunto de dados!"<<endl;
}

template <class T> void Lista<T>::listarElementos(){
    for( T ele : elementos){
        cout<<ele<<' ';
    }
    cout<<endl;
}

int main(){

    Lista<int> inteiros;

    inteiros.adicionarElemeto(1);
    inteiros.adicionarElemeto(2);
    inteiros.adicionarElemeto(3);
    inteiros.adicionarElemeto(4);
    inteiros.adicionarElemeto(5);

    inteiros.listarElementos();

    inteiros.removerElemento(2);
    inteiros.removerElemento(4);

    inteiros.listarElementos();

    inteiros.removerElemento(4);

    cout<<endl;
    return 0;
}