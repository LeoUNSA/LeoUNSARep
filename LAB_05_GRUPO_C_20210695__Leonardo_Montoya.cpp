#include <iostream>
#include <random>
#include <vector>
#include <stdlib.h>
#include <chrono>
using namespace std;
//Ejercicio 1
/*
void cambiar(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a,b;
    cout<<"Primer numero: "<<endl;cin>>a;
    cout<<"Segundo numero: "<<endl;cin>>b;
    cout<<"Primer valor del primer numero :"<<a<<endl;
    cout<<"Primer valor del segundo numero : "<<b<<endl;cambiar(&a,&b);
    cout<<"Nuevo valor del primer numero: "<<a<<"\nNuevo valor del segundo numero: "<<b<<endl;
}
*/
//Ejercicio 2
/*
void salida(float* v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";}
}
int main(){
    srand(time(NULL));
    int n;
    cout<<"Tamaño de los vectores: "<<endl;cin>>n;
    for(int i=0;i<1000000;i++){
        float* v=new float[n];
        float* v2= new float[n];
        float* v3=new float [n];
        for(int i=0;i<n;i++){
            v[i]=1+rand()%(21-1);
            v2[i]=1+rand()%(21-1);
            v3[i]=(v[i]*v2[i]);
        }
        cout<<"Primera lista: "<<endl;salida(v,n);
        cout<<"Segunda lista: "<<endl;salida(v2,n);
        cout<<"Lista producto punto:"<<endl;salida(v3,n);
        cout<<endl;delete[]v,v2,v3;
    }  
}
*/
//Ejercicio 4
/*
int main(){
    bool y;
    int l=5;
    void** v=new void*[l];
    int* v1=new int[l];
    string* v2=new string[l];
    float* v3=new float[l];
    char* v4=new char[l];
    bool* v5=new bool[l];
    for(int i=0;i<l;i++){
        int n;
        cout<<"Numeros enteros: "<<endl;cin>>n;
        v1[i]=n;
    }
    for(int i=0;i<l;i++){
        string n;
        cout<<"Palabras: "<<endl;cin>>n;
        v2[i]=n;
    }
    for(int i=0;i<l;i++){
        float n;
        cout<<"Numeros decimales: "<<endl;cin>>n;
        v3[i]=n;
    }
    for(int i=0;i<l;i++){
        char n;
        cout<<"ICaracteres: "<<endl; cin>>n;
        v4[i]=n;
    }
    for(int i=0;i<l;i++){
        bool n;
        cout<<"Valor bool 0-1): "<<endl; cin>>n;
        v5[i]=n;
    }
    cout<<"Matriz: "<<endl;
    for(int i=0;i<l;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<v5[i]<<" ";
    }
    cout<<endl;
    v[0]=v1;v[1]=v2;v[2]=v3;v[3]=v4;v[4]=v5;
    string w;
    cout<<"Dato a buscar: "<<endl;cin>>w;
    if(w=="int"){
        int a;
        cout<<"Ingrese el numero a buscar:"<<endl;cin>>a;
        for(int i=0;i<l;i++){
            if(a==v1[i]){
                cout<<"El numero "<<a<<" está en la matriz."<<endl;
            }}}
    else if(w=="string"){
        string a;
        cout<<"Ingrese la palabra a buscar:"<<endl;cin>>a;
        for(int i=0;i<l;i++){
            if(a==v2[i]){
                cout<<"La palabra "<<a<<" está en la. "<<endl;
            }}}
    else if(w=="float"){
        float a;
        cout<<"Ingrese el decimal a buscar:"<<endl;cin>>a;
        for(int i=0;i<l;i++){
            if(a==v3[i]){
                cout<<"El decimal "<<a<<" está en la matriz. "<<endl;
            }}}
    else if(w=="char"){
        char a;
        cout<<"Ingrese el caracter a buscar:"<<endl;cin>>a;
        for(int i=0;i<l;i++){
            if(a==v4[i]){
                cout<<"El caracter "<<a<<" está en la matriz. "<<endl;
            }}}
    else if(w=="bool"){
        bool a;
        cout<<"Ingrese la expresion a buscar(0,1):"<<endl;cin>>a;
        for(int i=0;i<l;i++){
            if(a==v5[i]){
                cout<<"El bool "<<a<<" sestá en la matriz. "<<endl;
            }}}
    
    for(int i=0;i<l;i++){
        delete[] v[i];
    }
    delete[] v1,v2,v3,v4,v5,v;
}
*/
//Ejercicio 5
/*
void fill(string*v,int l){
    cout<<"Ingrese las cadenas de texto: "<<endl;
    for(int i=0;i<l;i++){
        cin>>v[i];
    }
}
void salida(string*v,int l){
    cout<<endl;
    cout<<"Texto concatenado: "<<endl;
    for(int i=0;i<l;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void conc(string*v,string*v1,string*concs,int l,int l2){
    int lt=0;
    int i=0;
    for(;i<l2;i++){
        concs[i]=v1[i];
    }
    int j=0;
    for(;j<l;j++){
        concs[i]=v[j];
        i++;
    }
}
int main(){
    int l,l2;
    cout<<"Tamaño 1 - Cadenas: "<<endl;cin>>l;
    cout<<"Tamaño 2 - Cadenas: "<<endl;cin>>l2;
    string* v1=new string[l];
    string* v2=new string[l2];
    string* concs=new string[l+l2];
    cout<<"Vector 1: "<<endl;fill(v1,l);
    cout<<"Vector 2: "<<endl;fill(v2,l2);
    conc(v1,v2,concs,l,l2);
    salida(concs,(l+l2));
    delete[] v1,v2,concs;
}
*/
//Ejercicio 6
/*
int suma(int a,int b){
    int s=(a+b);
    cout<<"La suma de "<<a<<" y "<<b<<" es: "<<s<<endl;
    return 0;
}
int resta(int a,int b){
    if(a>b){
        int r=(a-b);
        cout<<"La resta de "<<a<<" y "<<b<<" es: "<<r<<endl;;
    }
    else{
        int r=(b-a);
        cout<<"La resta de "<<b<<" y "<<a<<" es: "<<r<<endl;;
    }
    return 0;   
}
int multiplicacion(int a,int b){
    int m=(a*b);
    cout<<"La multiplicacion de "<<a<<" y "<<b<<" es: "<<m<<endl;
    return 0;
}
int division(int a,int b){
    if(a>b){
        float d=(a/b);
        cout<<"La division de "<<a<<" y "<<b<<" es: "<<d<<endl;
    }
    else{
        float d=(b/a);
        cout<<"La division de "<<b<<" y "<<a<<" es: "<<d<<endl;;
    }
    return 0;
}
int main(){
    int n;
    int(*fp[])(int,int)={suma,resta,multiplicacion,division};
    while(true){
        int a,b;
        cout<<"Ingrese los numeros: "<<endl;cin>>a;cin>>b;
        cout<<"Ingrese la opcion que desea realizar: "<<endl;
        cout<<"1. Suma."<<endl;
        cout<<"2. Resta."<<endl;
        cout<<"3. Multiplicación."<<endl;
        cout<<"4. División."<<endl;
        cout<<"5. Salir."<<endl;
        cin>>n;
        if(n==1){
            cout<<(fp[0])(a,b);
        }
        else if(n==2){
            cout<<(fp[1])(a,b);
        }
        else if(n==3){
            cout<<(fp[2])(a,b);
        }
        else if(n==4){
            cout<<(fp[3])(a,b);
        }
        else if(n==5){
            break;
        }}}
*/
