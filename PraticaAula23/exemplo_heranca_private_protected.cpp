#include <iostream>
using namespace std;

class Gen{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
};

class Esp : private Gen{

};

class Esp2 : Esp{
    void func(){
        z = 1;
        y = 2;
        //Erro de compilação: z e y estão inacessíveis pois a herança de Gen está privada
    }
};