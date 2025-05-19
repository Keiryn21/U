#include <iostream>
using namespace std;
int main (){

    int numero,suma=0;

    //primero pedir al usuario que ingrese un numero//
    cout<<"por favor ingresa un numero"<<endl;
    cin>>numero;

    //luego realizar la suma utilizando for//
    for (int i = 2; i <numero; i++)
    {
        suma+=i;
    }
    cout<<"la suma de los numeros  :"<< numero << " es :"<< suma << endl;
    return 0;
}