#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
//Ejercicios del 1 al 3:
/*
class Pila{
private:
	class Nodo{
	public:
		int info;
		Nodo *sig;
	};
	Nodo *raiz;
public:
	Pila();
	~Pila();
	void Insertar(int x);
	void Buscar(int elem);
	int Quitar();
	void Mostrar();
};
Pila::Pila(){
	raiz = NULL;
}
Pila::~Pila(){
	Nodo *rec = raiz;
	Nodo *bor;
	while (rec != NULL){
		bor = rec;
		rec = rec->sig;
		delete bor;
	}
}
void Pila::Insertar(int x){
	Nodo *nue;
	nue = new Nodo();
	nue->info = x;
	if (raiz == NULL){
		raiz = nue;
		nue->sig = NULL;
	}
	else{
		nue->sig = raiz;
		raiz = nue;
	}
}
void Pila::Mostrar(){
	Nodo *rec = raiz;
	while (rec != NULL){
		cout << rec->info << "-";
		rec = rec->sig;
	}
	cout << "\n";
}
int Pila::Quitar(){
	if (raiz != NULL){
		int informacion = raiz->info;
		Nodo *bor = raiz;
		raiz = raiz->sig;
		delete bor;
		return informacion;
	}
	else{
		return -1;
	}
}
void Pila::Buscar(int elem){
	Nodo *rec = raiz;
	int cont = 1;
	int cont2 = 0;
	while (rec){
		if (rec->info == elem){
			cout << "El dato se encuentra en la posicion: " << cont << endl;
			cont2++;
		}
		rec = rec->sig;
		cont++;
	}
	
	if (cont2 == 0){
		cout << "No existe el dato. " << endl;
	}
	cout << endl << endl;
}
int main(){
	Pila *pila1;
	pila1= new Pila();
	string opcion;
	int ele;
	while(true){
		cout<<" 1. Insertar elemento en la pila."<<endl;
		cout<<" 2. Extraer elemento de la pila. "<<endl;
		cout<<" 3. Buscar elemento en la pila."<<endl;
		cout<<" 4. Mostrar pila. "<<endl;
		cout<<" 5. Salir. "<<endl;
		cin>>opcion;
		if(opcion=="1"){
			cout<<"\nElemento a insertar:: ";
			cin>>ele;
			pila1->Insertar(ele);
		}
		else if(opcion=="2"){
			cout<<"\nPila: "<<endl;
			pila1->Mostrar();
			cout<<"\nElemento extraido: "<< pila1->Quitar()<<endl;
			pila1->Mostrar();
		}
		else if(opcion=="3"){
			cout<<"\nElemento a buscar: ";
			cin>>ele;
			pila1->Buscar(ele);
			cout<<"Pila: "<<endl;
			pila1->Mostrar();
		}
		else if(opcion=="4"){
			cout<<"\nPila: "<<endl;
			pila1->Mostrar();
		}
		else if(opcion=="5"){
			break;
		}
		else{
			cout<<"\nElija una opción valida."<<endl;
		}
		cout<<endl;
	}
	delete pila1;
	return 0;
}
*/
//Ejericio 4:
/*
struct node1{
	int pilA;
	node1 *nxt1;
}*t1 = NULL, *p1 = NULL, *np1 = NULL;
struct node2{
	int pilB;
	node2 *nxt2;
}*t2 = NULL, *p2 = NULL, *np2 = NULL;
struct node3{
	int pilC;
	node3 *nxt3;
}*t3 = NULL, *p3 = NULL, *np3 = NULL;
void push1(int data){
	np1 = new node1;
	np1->pilA = data;
	np1->nxt1 = NULL;
	if (t1 == NULL){
		t1 = np1;
	}
	else{
		np1->nxt1 = t1;
		t1 = np1;
	}
}
int pop1(){
	int b = 999;
	if (t1 == NULL){
		return b;
	}
	else{
		p1 = t1;
		t1 = t1->nxt1;
		return(p1->pilA);
		delete(p1);
	}
}
void push2(int data){
	np2 = new node2;
	np2->pilB = data;
	np2->nxt2 = NULL;
	if (t2 == NULL){
		t2 = np2;
	}
	else{
		np2->nxt2 = t2;
		t2 = np2;
	}
}
int pop2(){
	int b = 999;
	if (t2 == NULL){
		return b;
	}
	else{
		p2 = t2;
		t2 = t2->nxt2;
		return(p2->pilB);
		delete(p2);
	}
}
void push3(int data){
	np3 = new node3;
	np3->pilC = data;
	np3->nxt3 = NULL;
	if (t3 == NULL){
		t3 = np3;
	}
	else{
		np3->nxt3 = t3;
		t3 = np3;
	}
}
int pop3(){
	int b = 999;
	if (t3 == NULL){
		return b;
	}
	else{
		p3 = t3;
		t3 = t3->nxt3;
		return(p3->pilC);
		delete(p3);
	}
}
int topstack(){
	if (t1 != NULL && t1->pilA == 1 ){
		return 1;
	}
	else if (t2 != NULL && t2->pilB == 1){
		return 2;
	}
	else if (t3 != NULL && t3->pilC == 1){
		return 3;
	}
}
void display1(){
	cout<<endl;
	node1 *p1;
	p1 = t1;
	cout<<"A -> "<<" ";
	while (p1 != NULL){
		cout<<p1->pilA<<" ";
		p1 = p1->nxt1;
	}
	cout<<endl;
}
void display2(){
	node2 *p2;
	p2 = t2;
	cout<<"B -> "<<" ";
	while (p2 != NULL){
		cout<<p2->pilB<<" ";
		p2 = p2->nxt2;
	}
	cout<<endl;
}
void display3(){
	node3 *p3;
	p3 = t3;
	cout<<"C -> "<<" ";
	while (p3 != NULL){
		cout<<p3->pilC<<" ";
		p3 = p3->nxt3;
	}
	cout<<endl;
}
void toh(int n){
	int i, x, a, b;
	for (i = 0; i < (pow(2,n)); i++){
		display1();
		display2();
		display3();
		x = topstack();
		if (i % 2 == 0){
			if (x == 1){
				push3(pop1());
			}
			else if (x == 2){
				push1(pop2());
			}
			else if (x == 3){
				push2(pop3());
			}
		}
		else{
			if (x == 1){
				a = pop2();
				b = pop3();
				if (a < b && b != 999){
					push3(b);
					push3(a);
				}
				else if (a > b && a != 999){
					push2(a);
					push2(b);
				}
				else if (b == 999){
					push3(a);
				}
				else if (a == 999){
					push2(b);
				}
			}
			else if (x == 2){
				a = pop1();
				b = pop3();
				if (a < b && b != 999){
					push3(b);
					push3(a);
				}
				else if (a > b && a != 999){
					push1(a);
					push1(b);
				}
				else if (b == 999){
					push3(a);
				}
				else if (a == 999){
					push1(b);
				}
			}
			else if (x == 3){
				a = pop1();
				b = pop2();
				if (a < b && b != 999){
					push2(b);
					push2(a);
				}
				else if (a > b && a != 999){
					push1(a);
					push1(b);
				}
				else if (b == 999){
					push2(a);
				}
				else if (a == 999){
					push1(b);
				}
			}
		}
	}
}
int main(){
	int n, i;
	cout<<"Indicar el numero de discos iniciales: "<<endl;cin>>n;
	for (i = n; i >= 1; i--){
		push1(i);
	}
	toh(n);
	return 0;
}
*/
