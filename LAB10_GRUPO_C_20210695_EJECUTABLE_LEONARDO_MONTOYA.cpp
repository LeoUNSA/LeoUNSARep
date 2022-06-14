#include <iostream>
#include <ctime>
using namespace std;
template <class T>
class Nodo{
public:
	Nodo();
	Nodo(T);
	~Nodo();
	Nodo *sig;
	T dato;
	void EAll();
	void Mostrar();
};
template<typename T>
Nodo<T>::Nodo(){
	dato = NULL;
	sig = NULL;
}
template<typename T>
Nodo<T>::Nodo(T dato_){
	dato = dato_;
	sig = NULL;
}
template<typename T>
void Nodo<T>::EAll(){
	if (sig)
		sig->EAll();
	delete this;
}
template<typename T>
void Nodo<T>::Mostrar(){
	cout << dato << "-> ";
}
template<typename T>
Nodo<T>::~Nodo() {}
template <class T>
class Lista{
public:
	Lista();
	~Lista();
	void AInicio(T);
	void AFinal(T);
	void Insertar(T);
	void OAscen();
	void ODescen();
	void Mostrar();
	void Eall(int);
	void ElemR(int);
private:
	Nodo<T> *m_h;
	int m_nodes;
};
template<typename T>
Lista<T>::Lista(){
	m_nodes = 0;
	m_h = NULL;
}
template<typename T>
void Lista<T>::AInicio(T dato_){
	Nodo<T> *n_node = new Nodo<T> (dato_);
	Nodo<T> *temp = m_h;
	if (!m_h) {
		m_h = n_node;
	} else {
		n_node->sig = m_h;
		m_h = n_node;
		while (temp) {
			temp = temp->sig;
		}
	}
	m_nodes++;
}
template<typename T>
void Lista<T>::AFinal(T dato_){
	Nodo<T> *new_nodo = new Nodo<T> (dato_);
	Nodo<T> *temp = m_h;
	if (!m_h) {
		m_h = new_nodo;
	} else {
		while (temp->sig != NULL) {
			temp = temp->sig;
		}
		temp->sig = new_nodo;
	}
	m_nodes++;
}
template<typename T>
void Lista<T>::Insertar(T dato_){
	Nodo<T> *n_node = new Nodo<T> (dato_);
	Nodo<T> *temp = m_h;
	if (!m_h) {
		m_h = n_node;
	} else {
		if (m_h->dato > dato_) {
			n_node->sig = m_h;
			m_h = n_node;
		} else {
			while ((temp->sig != NULL) && (temp->sig->dato < dato_)) {
				temp = temp->sig;
			}
			n_node->sig = temp->sig;
			temp->sig = n_node;
		}
	}
	m_nodes++;
}
template<typename T>
void Lista<T>::OAscen(){
	T temp_data;
	Nodo<T> *aux_n = m_h;
	Nodo<T> *temp = aux_n;
	while (aux_n) {
		temp = aux_n;
		while (temp->sig) {
			temp = temp->sig;
			if (aux_n->dato > temp->dato) {
				temp_data = aux_n->dato;
				aux_n->dato = temp->dato;
				temp->dato = temp_data;
			}
		}
		aux_n = aux_n->sig;
	}
}
template<typename T>
void Lista<T>::ODescen(){
	T temp_data;
	Nodo<T> *aux_n = m_h;
	Nodo<T> *temp = aux_n;
	while (aux_n) {
		temp = aux_n;
		while (temp->sig) {
			temp = temp->sig;
			if (aux_n->dato < temp->dato) {
				temp_data = aux_n->dato;
				aux_n->dato = temp->dato;
				temp->dato = temp_data;
			}
		}
		aux_n = aux_n->sig;
	}
}
template<typename T>
void Lista<T>::ElemR(int d){
	srand(time(NULL));
	for (int i = 0; i < d; i++) {
		Insertar(rand() % 100);
	}
}
template<typename T>
void Lista<T>::Eall(int pos){
	Nodo<T> *temp = m_h;
	Nodo<T> *temp1 = temp->sig;
	if (pos < 1 || pos > m_nodes) {
		cout << "Fuera de rango " << endl;
	} else if (pos == 1) {
		m_h = temp->sig;
	} else {
		for (int i = 2; i <= pos; i++) {
			if (i == pos) {
				Nodo<T> *aux_n = temp1;
				temp->sig = temp1->sig;
				delete aux_n;
				m_nodes--;
			}
			temp = temp->sig;
			temp1 = temp1->sig;
		}
	}
}
template<typename T>
	void Lista<T>::Mostrar(){
	Nodo<T> *temp = m_h;
	if (!m_h) {
		cout << "Lista vacia " << endl;
	} else {
		while (temp) {
			temp->Mostrar();
			if (!temp->sig) cout << "null";
			temp = temp->sig;
		}
	}
	cout << endl << endl;
}
template<typename T>
	Lista<T>::~Lista() {}
//Ejercicio 1:
/*
int main(){
	Lista<int> lista_1;
	Lista<int> lista_2;
	int elemento,d,posicion;
	cout << "Tamaño de la lista: " << endl;
	cin >> d;
	lista_1.ElemR(d);
	cout << "Lista actual: " << endl;
	lista_1.Mostrar();
	cout << "Agregar elemento al final: " << endl;
	cin >> elemento;
	lista_1.AFinal(elemento);
	lista_1.Mostrar();
	return 0;
}
*/
//Ejercicio 2:
/*
int main(){
	Lista<int> lista_1;
	Lista<int> lista_2;
	int elemento;
	int d;
	int posicion;
	cout << "Tamaño de la lista: " << endl;
	cin >> d;
	lista_1.ElemR(d);
	cout << "Lista actual: " << endl;
	lista_1.Mostrar();
	cout << "Agregar elemento inicial: " << endl;
	cin >> elemento;
	lista_1.AInicio(elemento);
	lista_1.Mostrar();
	return 0;
}
*/
//Ejercicio 3:
/*
int main(){
	Lista<int> lista_1;
	Lista<int> lista_2;
	int elemento;
	int posicion;
	int op;
	int d;
	cout << "Tamaño de la lista: " << endl;
	cin >> d;
	lista_1.ElemR(d);
	cout << "Lista actual: " << endl;
	lista_1.Mostrar();
	while(true){
		cout<<"Menu: \n 1.-Agregar elemento \n 2.-Salir"<<endl;
		cin>>op;
		if(op==1){
			cout << "Colocar elemento para insertarse ordenadamente: " << endl;
			cin >> elemento;
			cout<<"Colocar la posición deseada: " <<endl;
			cin >> posicion;
			lista_1.Insertar(elemento);
			lista_1.Mostrar();
		}
		else{
			break;
		}
	}
	return 0;
}
*/
//Ejercicios 4, 5 y 6:
/*
int main(){
	Lista<int> lista_1;
	Lista<int> lista_2;
	int elemento;
	int pos;
	int op;
	int d;
	cout << "Tamaño de la lista: " << endl;
	cin >> d;
	lista_1.ElemR(d);
	cout<<"Lista: "<<endl;
	lista_1.Mostrar();
	cout << "Indicar la posición del elemento a eliminarse: " << endl;
	cin>>op;
	lista_1.Eall(op);
	lista_1.Mostrar();
	return 0;
}
*/
//Ejercicio 7:

int main(){
	Lista<int> lista_1;
	Lista<int> lista_2;
	int elemento;
	int pos;
	int op;
	int d;
	cout << "Tamaño de la lista: " << endl;
	cin >> d;
	lista_1.ElemR(d);
	cout<<"Lista: "<<endl;
	lista_1.Mostrar();
	cout << "Orden ascendente: " << endl;
	lista_1.OAscen();
	lista_1.Mostrar();
	return 0;
}

