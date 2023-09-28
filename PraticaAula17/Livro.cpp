#include <string>
using namespace std;

class Livro{
    private:
        string titulo;
        string genero;
        string nomeAutor;
        int numeroPaginas;
        string tipoCapa;

    public:
        Livro(string titulo, string genero = "Indefinido", string nomeAutor, int numeroPaginas, string tipoCapa = "Indefinido"){
            this->titulo = titulo;
            this->genero = genero;
            this->nomeAutor = nomeAutor;
            this->numeroPaginas = numeroPaginas;
            this->tipoCapa = tipoCapa;
        }

        //GETTERS
        string getTitulo() {return titulo;}
        string getGenero() {return genero;}
        string getNomeAutor() {return nomeAutor;}
        int getNumeroPaginas() {return numeroPaginas;}
        string getTipoCapa() {return tipoCapa;}

        //SETTERS
        void setTitulo(string titulo){
            this->titulo = titulo;
        }
        void setGenero(string genero){
            this->genero = genero;
        }
        void setNomeAutor(string nomeAutor){
            this->nomeAutor = nomeAutor;
        }
        void setNumeroPaginas(int numeroPaginas){
            this->numeroPaginas = numeroPaginas;
        }
        void setTipoCapa(string tipoCapa){
            this->tipoCapa;
        }
};