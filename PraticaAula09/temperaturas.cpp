#include<iostream>
#include<iomanip>
using namespace std;

int main(){

     srand(time(NULL));
     float temperaturas[250], soma = 0.0;

     for(int i = 0; i < 250; i++){
        temperaturas[i] = 10.0 + 30.0*(rand() % 100) / 3000.0;
        cout<<temperaturas[i]<<endl;
        soma += temperaturas[i];
     }
     float minima = temperaturas[249], maxima = temperaturas[249];
     
     for(int i = 0; i < 250; i++){
        if(temperaturas[i] < minima)
            minima = temperaturas[i];
        else if(temperaturas[i] > maxima)
            maxima = temperaturas[i];
     }

     cout<<"Temperatura minima: "<<minima<<endl;
     cout<<"Temperatura maxima: "<<maxima<<endl;
     cout<<"Temperatura media: "<<fixed<<setprecision(2)<<soma / 250<<endl;

    return 0;
}