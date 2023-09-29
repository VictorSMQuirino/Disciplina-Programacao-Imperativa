class MeuInt{
    private:
        int numero;

    public:
        MeuInt(){}

        int getNumero(){
            return numero;
        }

        void operator=(int x){
            this->numero = x;
        }

        void operator=(MeuInt x){
            this->numero = x.getNumero();
        }

        int operator+(MeuInt x){
            return this->numero + x.getNumero() + 1;
        }

        int operator+(int x){
            return this->numero + x + 1;
        }
   
};
