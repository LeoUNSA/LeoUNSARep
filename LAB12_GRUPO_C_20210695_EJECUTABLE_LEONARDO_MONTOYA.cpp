#include <iostream>
using namespace std;
class Cola{
public:
	int n;
	Cola *next=NULL;
public:
	Cola(int n){
		this->n=n;
	}
	~Cola(){
	}
};

Cola* NCola(int _n){
	Cola* nue=new Cola(_n);
	nue->next=NULL;
	return nue;
}
void Insertar(Cola* &Lista,Cola*&Colaux,int n){//0
	if(Lista==NULL){
		Lista=NCola(n);
		Colaux=Lista;
	}
	else{
		if((Colaux->next)==NULL){
			int aux;
			Colaux=NCola(n);
			aux=Lista->n;
			Lista->n=Colaux->n;
			Colaux->n=aux;
			Insertar(Lista->next,Colaux,aux);
		}
		else{
			Insertar(Lista->next,Colaux,n);
		}
	}
}
void Buscar(Cola*& Lista,int n,int& i){
	if(Lista!=NULL){
		if((Lista->n)==n){
			i++;
			Buscar(Lista->next,n,i);
		}
		else{
			Buscar(Lista->next,n,i);
		}
	}
}
void Quitar(Cola*& Lista,int n,int i,int& j){
	if(Lista!=NULL){
		if((Lista->n)==n){
			j++;
			if(j==i){
				Lista=Lista->next;
			}
			else{
				Quitar(Lista->next,n,i,j);
			}
		}
		else{
			Quitar(Lista->next,n,i,j);
		}
	}
}
void Mostrar(Cola* &Lista){
	if(Lista!=NULL){
		cout<<"Elemento: "<<Lista->n<<endl;
		Mostrar(Lista->next);
	}
}
int main(){
	int opcion,numnodos;
	cout<<"Ingrese la cantidad de elemntos: "<<endl;cin>>numnodos;
	int contador=0;
	int contadorlista2=0;
	Cola* Nodo=NULL;
	Cola* Nodoaux1=NULL;
	Cola* Nodo2=NULL;
	Cola* Nodoaux2=NULL;
	while(true){
		cout<<"Opciones: "<<endl;
		cout<<"1. Agregar elementos."<<endl;
		cout<<"2. Eliminar un elemento."<<endl;
		cout<<"3. Buscar un elemento."<<endl;
		cout<<"4. Mostrar cola."<<endl;
		cout<<"5. Comparar datos de colas."<<endl;
		cout<<"6. Salir."<<endl;
		cin>>opcion;
		if(opcion==1){
			srand(time(NULL));
			if(contador!=1){
				int opcion;
				cout<<"Ingrese la opcion:"<<endl;
				cout<<"1. Ingresar datos."<<endl;
				cout<<"2. Generar datos aleatorios."<<endl;
				cin>>opcion;
				if(opcion==1){
					for(int i=0;i<numnodos;i++){
						int n;
						cout<<"Ingrese el elemento:"<<endl;
						cin>>n;
						Insertar(Nodo,Nodoaux1,n);
						contador=1;
					}
					
				}
				else{
					for(int i=0;i<numnodos;i++){
						int n;
						n=1+rand()%(11-1);
						Insertar(Nodo,Nodoaux1,n);
						contador=1;
					}
				}
			}
			else{
				cout<<"Elementos agregados"<<endl;
			}
		}
		else if(opcion==2){
			int contador=0;
			int contador2=0;
			int n;
			cout<<"Indicar elemento:"<<endl;
			cin>>n;
			Buscar(Nodo,n,contador);
			if(contador!=0){
				cout<<"Se encontro el elemento "<<n<<" en la cola."<<endl;
				Quitar(Nodo,n,contador,contador2);
			}
			else{
				cout<<"El elemento indicado no se encuentra en la cola."<<endl;
			}
		}
		else if(opcion==3){
			int contador=0;
			int n;
			cout<<"Indique el elemento: "<<endl;
			cin>>n;
			Buscar(Nodo,n,contador);
			if(contador!=0){
				cout<<"Hay "<<contador<<" elementos con el valor de "<<n<<" en la cola."<<endl;
			}
			else{
				cout<<"El elemento indicado no se encuentra en la cola."<<endl;
			}
		}
		else if(opcion==4){
			cout<<"			Elementos de la cola:			"<<endl;
			Mostrar(Nodo);
		}
		else if(opcion==5){
			int numnodos2;
			int opcion2;
			cout<<"Ingrese la cantidad de elementos para la segunda cola:"<<endl;
			cin>>numnodos2;
			cout<<"Opciones: "<<endl;
			cout<<"1. Agregar elementos."<<endl;
			cout<<"2. Eliminar un elemento."<<endl;
			cout<<"3. Buscar un elemento."<<endl;
			cout<<"4. Mostrar cola."<<endl;
			cout<<"5. Volver."<<endl;
			if(contadorlista2!=1){
				for(int i=0;i<numnodos;i++){
					int n;
					cout<<"Ingrese el elemento:"<<endl;
					cin>>n;
					Insertar(Nodo2,Nodoaux2,n);
				}
			}
			else{
				cout<<"Los elementos de la segunda cola ya han sido ingresados."<<endl;
			}
			if(opcion==1){
				srand(time(NULL));
				if(contador!=1){
					int opcion;
					cout<<"Ingrese la opcion:"<<endl;
					cout<<"1. Ingresar datos."<<endl;
					cout<<"2. Generar elementos aleatoriamente."<<endl;
					cin>>opcion;
					if(opcion==1){
						for(int i=0;i<numnodos2;i++){
							int n;
							cout<<"Ingrese el elemento:"<<endl;
							cin>>n;
							Insertar(Nodo,Nodoaux1,n);
							contador=1;
						}
						
					}
					else{
						for(int i=0;i<numnodos;i++){
							int n;
							n=1+rand()%(11-1);
							Insertar(Nodo,Nodoaux1,n);
							contador=1;
						}
					}
				}
				else{
					cout<<"Los elementos ya han sido ingresados."<<endl;
				}
			}
			else if(opcion==2){
				int contador=0;
				int contador2=0;
				int n;
				cout<<"Indique el elemento:"<<endl;
				cin>>n;
				Buscar(Nodo,n,contador);
				if(contador!=0){
					cout<<"Se encontro el elemento "<<n<<" en la cola."<<endl;
					Quitar(Nodo,n,contador,contador2);
				}
				else{
					cout<<"El elemento indicado no se encuentra en la cola."<<endl;
				}
			}
			else if(opcion==3){
				int contador=0;
				int n;
				cout<<"Indique el elemento a encontrar:"<<endl;
				cin>>n;
				Buscar(Nodo,n,contador);
				if(contador!=0){
					cout<<"Hay "<<contador<<" elementos con el valor de "<<n<<" en la cola."<<endl;
				}
				else{
					cout<<"El elemento indicado no se encuentra en la cola."<<endl;
				}
			}
			else if(opcion==4){
				cout<<"			Elementos de la cola:			"<<endl;
				Mostrar(Nodo);
			}
		}
		else if(opcion==6){
			Nodo->~Cola();
			break;
		}
		else{
			cout<<"Vuelva a intentarlo."<<endl;
		}
	}
}
