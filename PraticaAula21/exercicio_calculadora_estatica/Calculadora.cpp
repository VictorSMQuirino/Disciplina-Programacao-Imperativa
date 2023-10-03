#include <iostream>
#include <string>
using namespace std;

class Calculadora{
    public:
        //static double calcula(double, double, char);
        static double soma(double, double);
        static double subtracao(double, double);
        static double multiplicacao(double, double);
        static double divisao(double, double);
};

double Calculadora::soma(double numero1, double numero2){
    return numero1 + numero2;
}

double Calculadora::subtracao(double numero1, double numero2){
    return numero1 - numero2;
}

double Calculadora::multiplicacao(double numero1, double numero2){
    return numero1 * numero2;
}

double Calculadora::divisao(double numero1, double numero2){
    return numero1 / numero2;
}

// double Calculadora::calcula(double numero1, double numero2, char operador){
//     switch (operador){
//         case '+':
//             return numero1 + numero2;
//             break;

//         case '-':
//             return numero1 - numero2;
//             break;
        
//         case '*':
//             return numero1 * numero2;
//             break;

//         case '/':
//             if(numero2 != 0){
//                 return numero1 / numero2;
//             } else{
//                 cout<<"Impossivel dividir por 0";
//                 return 0.0;
//             }
//             break;
            
//         default:
//              cout<<"Operacao invalida!"<<endl;
//             break;
//     }
// }