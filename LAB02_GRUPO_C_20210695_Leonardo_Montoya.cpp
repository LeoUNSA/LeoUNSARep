#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
//Ejercicio 1:
/*
int main(){
    int a = 0;
    for(int i=2;i<=100;i++){
        if(i%2==0) a+=i;
		}
 	cout<<"\nLa suma de los números pares entre 2 y 100 es: "<<a<<endl;
    return 0;
}
*/
//Ejercicio 2
/*
int main(){
int k=1,aux,i=2,j;
cout<<"Los primeros 50 números primos son: "<<endl;
while(k<=50)
	{
	aux=0;
	for(j=2;j<=i/2;j++){
		if(i%j==0){
		aux=1; break;}}
		if(aux==0){
		cout<<i<<endl;k++;
		}
		i++;
	 }
	 return(0);
}
*/
//Ejercicio 3
/*
int main(){
	for(int i=1;i<=100;i++){
		if(i%5==0){
			cout<<i<<endl;}}
	return 0;
}
*/

//Ejercicio 6
/*
int main(){
	int n,a=0,b=1,c=1;
	cout<<"Ingrese el número de elementos de la secuencia de Fibonnacci que quiere ver: "; cin>>n;
	cout<<"1 ";
	for(int i=1; i<n; i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	return 0;
}
*/
//Ejercicio 8
/*
int main(){
    int i, numero;
		cout<<"Introduzca el numero: "<<endl;cin>>numero;
		cout<<"La tabla de multiplicar de dicho numero es: "<<endl;
        for (i= 1;i<=10;i++)
			cout<<i <<" por "<<numero<<" = "<<i*numero<<endl;
    return 0;
}
*/
//Ejercicio 9
/*
int main(){
	int n;
	cout<<"Introduzca la altura del triángulo: "<<endl;cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/