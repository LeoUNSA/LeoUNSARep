#include <iostream>
#include <time.h>
using namespace std;
//Ejercicio 1:
/*
template <typename T>
class OAritmeticas{
private:
	T arg1,arg2;
public:
	OAritmeticas(T a, T b);
    T Suma(),Resta(),Multiplicacion(),Division();
};
template <typename T>
OAritmeticas<T>::OAritmeticas(T a, T b){
	arg1=a,arg2=b;
}
template <typename T>
T OAritmeticas<T>::Suma(){ return arg1+arg2;}
template <typename T>
T OAritmeticas<T>::Resta(){ return arg1-arg2;}
template <typename T>
T OAritmeticas<T>::Multiplicacion(){ return arg1*arg2;}
template <typename T>
T OAritmeticas<T>::Division(){ return arg1/arg2;}
int main(){
	int n1, n2;
	float m1, m2;
	cout<<"Ingrese 2 numeros enteros: ";cin>>n1>>n2;
	OAritmeticas <int> pruebaint(n1,n2);
	cout<<"Suma de enteros: "<<pruebaint.Suma()<<endl;
	cout<<"Ingrese 2 numeros no enteros: ";cin>>m1>>m2;
	OAritmeticas <float> pruebafloat(m1,m2);
	cout<<"Producto de flotantes: "<<pruebafloat.Multiplicacion()<<endl;
	return 0;
}
*/
//Ejercicio 2:
/*
template <class T>
class Arreglo{
	T* elem;
	int tam;
	int pos;
public:
	Arreglo(int t){
		tam = t;
		elem = new T[tam];
		pos = 0;
	}
	void add(T arg){
		elem[pos] = arg;
		pos++;
	}
		T get(int i){
			return elem[i];
		}
			int len(){
				return pos;
			}
};
int main(){
	Arreglo<int> Lint(100);
	Arreglo<char> Lchar(100);
	srand(time(NULL));
	for(int i = 0; i < 100; i++){
		Lint.add(rand()%10);
		Lchar.add(rand()%26+'a');
	}
	for(int i = 0; i < Lint.len(); i++){
		cout <<Lint.get(i)<<" ";
	}
	for(int i = 0; i < Lchar.len(); i++){
		cout<< Lchar.get(i) <<" ";
	}
	return 0;
}
*/