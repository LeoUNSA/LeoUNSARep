#include <iostream>
#include <math.h>
using namespace std;
 //Ejercicio 1:
 //Suma los digitos de un número de forma recursiva utilizando metaprogramación:
 /*
template<int N>
struct SumaDigitos{
enum{
value=N%10+SumaDigitos<N/10>::value
};
};
template <>
struct SumaDigitos <0>{
enum{value=0};
};
int main(){
int r=SumaDigitos<89>::value;
cout<<"La suma de los digitos del numero 89 es de: "<<r<<"\n";
return 0;
}
*/
//Ejercicio 2:
//Calcular el valor de la posición fibonacci usando recursividad utilizando metaprogramación:
/*
template<int N>
struct SFibonacci{
	enum{
		value=SFibonacci<N-1>::value+SFibonacci<N-2>::value
	};
};
template <>
struct SFibonacci<1>
{
	enum{value=1};
};
template <>
struct SFibonacci<0>
{
	enum{ value = 0 };
};
int main(){
	int r=SFibonacci<7>::value;
	cout<<"El numero en la posicion 7 de la sucesion de Fibonacci es: "<<r<<"\n";
	return 0;
}
*/	
//Ejercicio 3:
//Calcula la potencia de un numero de forma recursiva utilizando metaprogramación:
/*
template<int N, int M>
struct Potencia{
	enum{
		value=N*Potencia<N,M-1>::value
	};
};
template <int N>
struct Potencia <N,0>{
	enum{value=1};
};
int main(){
	int r=Potencia<2,8>::value;
	cout<<"El resultado de 2 elevado a 8 es: "<<r<<"\n";
	return 0;
}
*/
//Ejercicio 4:
//Construya una función recursiva que convierta un número decimal en una cadena que represente el valor de un número hexadecimal (base 16) utilizando metaprogramación:
/*
template<int N>
struct HexaD{
    enum {VAscii=(N%16<=9)?(48+N%16):(55+N%16),
    value=VAscii+HexaD<N/16>::value*100};    
};
template<>
struct HexaD<0>{
    enum{value=0};
};
string Convertidor(int numero){
    if(numero==0){
        return"0";
    }
    string r;
    int aux=numero;
    int len=0;
    while(numero>0){
        numero/=10;
        len++;
    }
    len/=2;
    for(int i=pow(100,len)/10;i>=1;i/=100){
        int x=aux/(i/10)%10+(aux/i)*10;
        aux-=x*(i/10);
        r+=char(x);
    }
    return r;
}
int main(){
    cout<<"Al convertir el numero decimal "<<27<<" a hexadecimal se obtiene: "<<Convertidor(HexaD<27>::value)<<"\n";
}
*/
//Ejercicio 5:
//Ingresar un número y mostrar su equivalente en binario usando una función recursiva utilizando metaprogramación:
/*
template<int N>
struct Binario{
	enum{
		value=N%2+Binario<N/2>::value*10,
	};
};
template <>
struct Binario<1>{
	enum{value=1};
};
template <>
struct Binario<0>{
	enum{value=0};
};
int main(){
	int r=Binario<17>::value;
	cout<<"Al convertir el numero decimal 17 a binario se obtiene: "<<r<<"\n";
	return 0;
}
*/