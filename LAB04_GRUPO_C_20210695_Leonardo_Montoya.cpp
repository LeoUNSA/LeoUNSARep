#include <iostream>
#include <string>
using namespace std;
//Ejercicio 1:
/*
int main()
{
    struct Datos
    {
        string Nombre;
		string Apellido;
        string  DNI;
        int   Edad;
    };
    Datos*p = new Datos[15];
    for (int i=1; i<=3; i++)
    {
        cout<<"Ingrese el nombre de la persona "<<i<<endl;cin>>p[i].Nombre;
		cout<<"Ingrese el apellido de la persona "<<i<<endl;cin>>p[i].Apellido;
		cout<<"Ingrese la edad de la persona "<<i<<endl;cin>>p[i].Edad;
		cout<<"Ingrese el DNI de la persona "<<i<<endl;cin>>p[i].DNI;
    }
    cout<<"La persona 1 se llama: "<<p[1].Nombre<<" "<<p[1].Apellido<<", su edad es "<<p[1].Edad<<" y su DNI es el "<<p[1].DNI<<endl;
	cout<<"La persona 2 se llama: "<<p[2].Nombre<<" "<<p[2].Apellido<<", su edad es "<<p[2].Edad<<" y su DNI es el "<<p[2].DNI<<endl;
	cout<<"La persona 3 se llama: "<<p[3].Nombre<<" "<<p[3].Apellido<<", su edad es "<<p[3].Edad<<" y su DNI es el "<<p[3].DNI<<endl;
    return 0;
}
*/
//Ejercicio 2:
/*
int n=8;
bool Buscar(int v[],int val){
 for(int i=0;i<n;i++){
 if(val==v[i]){return true;}
 }
 return false;
}
int main(){
 int vector[n],x,TF;
 cout<<"Ingresar 8 numeros enteros: "<<endl;
 for(int i=0;i<n;i++){
  cin>>vector[i];}
 cout<<"Ingrese un numero a buscar en el vector: "<<endl;cin>>x;
 TF=Buscar(vector,x);
 if(TF){cout<<"El numero se encuentra en el array."; }
 else{cout<<"El numero no se encuentra en el array."; }
 return 0;
}
/*
//Ejercicio 3:
/*
void Crear();
int Sumar(int M[][3]);
int M[5][3],f,c; 
int main(){
 Crear();
 cout<<"La sumatoria de las filas pares es: "<<Sumar(M);
 return 0;
}
void Crear(){
 cout<<"Ingrese 15 enteros: ";
 for(f=1;f<=5;f++){
  for(c=0;c<3;c++){cin>>M[f][c];}
 }
}
int Sumar(int M[][3]){
 int S=0;
 for(f=0;f<=5;f+=2){
  for(c=0;c<3;c++){S+=M[f][c];}
 }
 return S;
}
*/
//Ejercicio 4:
/*
int main(){
int a,k,b,i,Array[100];i=0;
for (a=1;a<=100;a++){
k=0;for (b=1;b<=a;b++){
if (a%b==0){
k++;}}
if(k==2||b==1||b==0){
Array[i]=a;i++;}}
for (a=0;a<i;a++){
cout<<Array[a]<<endl;}       
return 0;
}
*/