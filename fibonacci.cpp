#include <iostream>
using namespace std;
int main(){

    int N,a=0,b=1;

    //pedir al usuario un numero,siempre basandonos en la serie de fibonacci/

    cout<<"puedes ingresar un numero por favor"<<endl;
    cin>>N;
    for (int i = 0; i < N; i++) {
        cout << a << " "; 

        
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << endl;

    return 0;
}