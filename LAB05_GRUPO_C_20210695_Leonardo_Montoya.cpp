#include<iostream>
using namespace std;
//Ejercicio 1:
void cambiar(int *a, int *b){
    int c=*a;*a=*b;*b=c;
}
int main(){
    int a, b;
    cout<<"Valor del primer número: "; cin>>a;
    cout<<"Valor del segundo número: "; cin>>b;
    cambiar(&a,&b);
    cout<<"El nuevo valor del primer numero es :"<<a<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<b<<endl;
    return 0;
}   
    