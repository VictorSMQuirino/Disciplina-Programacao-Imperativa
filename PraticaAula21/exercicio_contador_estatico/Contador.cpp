class Contador{
    private:
        static int contador;
    public:
        Contador(){
            contador++;
        }

        static int getContador(){
            return contador;
        }
};