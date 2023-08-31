#include<iostream>
#include<float.h>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){

    float pif = M_PIl;
    long double pid = M_PIl;

    //letra a
    cout<<"O menor valor que uma variavel float pode armazenar eh: "<<FLT_MIN<<endl;
    cout<<"O maior valor que uma variavel float pode armazenar eh: "<<FLT_MAX<<endl;
    cout<<endl;

    //letra b
    cout<<"O valor de pi com o maximo de casas decimais eh: "<<setprecision(23)<<pif<<endl;
    cout<<endl;

    //letra c
    cout<<"O valor de pi com 2 casas decimais eh: "<<fixed<<setprecision(2)<<pif<<endl;
    cout<<"O valor de pi com 4 casas decimais eh: "<<fixed<<setprecision(4)<<pif<<endl;
    cout<<"O valor de pi com 8 casas decimais eh: "<<fixed<<setprecision(8)<<pif<<endl;
    cout<<"O valor de pi com 16 casas decimais eh: "<<fixed<<setprecision(16)<<pif<<endl;
    cout<<endl;

    //letra d
    //cout<<"DBL_MAX: "<<DBL_MAX<<endl;
    cout<<"O valor de pi do tipo double com o maximo de casas decimais eh: "<<setprecision(62)<<pid<<endl;
    cout<<endl;

    //letra e
    cout<<"O valor de pi do tipo double com 2 casas decimais eh: "<<fixed<<setprecision(2)<<pid<<endl;
    cout<<"O valor de pi do tipo double com 4 casas decimais eh: "<<fixed<<setprecision(4)<<pid<<endl;
    cout<<"O valor de pi do tipo double com 4 casas decimais eh: "<<fixed<<setprecision(8)<<pid<<endl;
    cout<<"O valor de pi do tipo double com 4 casas decimais eh: "<<fixed<<setprecision(16)<<pid<<endl;

    //3.141592653589793238462643383279502884197169
    //3.141592653589793115997963468544185161590576171875
    
    return 0;
}