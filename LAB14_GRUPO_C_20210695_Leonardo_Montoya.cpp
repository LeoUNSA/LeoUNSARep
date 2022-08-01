#include <iostream>
#include <conio.h>
using namespace std;
class Items{
private:
	int id,k;
	string name;
	float price;
	Items *next;
public:
	Items(){}
	void Show_(Items &item){
		Items *aux = &item;
		Items *aux2 = aux->next;
		while(aux2 != NULL){
			cout<<"\ncodigo: " << aux2->id << endl;
			cout<<"name: " << aux2->name << endl;
			cout<<"price: " << aux2->price << endl;
			cout<<"k: " << aux2->k << endl;
			aux2 = aux2->next;
		}
	}
		void Modificar_(string name_, int id_, float price_, int k_, Items &item){
			Items *aux = &item;
			Items **aux2 = &aux;
			while(*aux2 != NULL){
				if((*aux2)->id == id_){
					(*aux2)->name = name_;
					(*aux2)->price = price_;
					(*aux2)->k = k_;
					break;
				}
				aux2 = &((*aux2)->next);
			}
			
		}
			void New_(string name, int id, float price, int k, Items &item){
				Items *aux = new Items;
				Items *aux2 = new Items;
				aux->name = name;
				aux->id = id;
				aux->price = price;
				aux->k = k;
				aux->next = NULL;
				if(item.next == NULL){
					item.next = aux;
				}else{
					aux2 = item.next;
					while(aux2->next != NULL){
						aux2 = aux2->next;
					}
					aux2->next = aux;
				}
			}
				void DarDeBaja(int delID, Items &item){
					Items *aux = &item;
					Items **aux2 = &aux;
					while(aux != NULL){
						if(aux->id == delID){
							aux->id = delID;
							aux->price = 0;
							aux->k = 0;
						}
						aux = aux->next;
					}
				}
					void BuscarID(int saerchID, Items &item){
						Items *aux = &item;
						while(aux != NULL){
							if(aux->id == saerchID){
								cout<<"el producto " << aux->name << " fue encontrado." << endl;
								break;
							}
							aux = aux->next;
						}
					}
						void BuscarNombre(string searchname, Items &item){
							Items *aux = &item;
							while(aux != NULL){
								if(aux->name == searchname){
									cout<<"el producto " << aux->name << " fue encontrado." << endl;
									break;
								}
								aux = aux->next;
							}
						}
};
int main(){
	int opc=0, id_, k_, _Name;
	string name_;
	float price_;
	Items *item = new Items();
	do{
		cout<<"\n\tMenu"<<endl;
		cout<<"1. Dar de alta a un producto nuevo."<<endl;
		cout<<"2. Dar de baja a un producto. (No hay stock)."<<endl;
		cout<<"3. Buscar un producto por su nombre o ID."<<endl;
		cout<<"4. Imprimir datos"<<endl;
		cout<<"5. Modificar el nombre, precio o cantidad de un producto:"<<endl;
		cout<<"6. Salir\n"<<endl;
		cout<<"ingrese la opcion: ", cin>>opc;
		if(opc==1){
			cout<<"\ningrese el ID del producto: "; cin>>id_;
			cout<<"ingrese el stock del producto: "; cin>>k_;
			cout<<"ingrese el nombre del producto: "; cin>>name_;
			cout<<"ingrese el precio del producto: "; cin>>price_;
			item->New_(name_, id_, price_, k_, *item);
		}else if(opc==2){
			cout<<"Ingrese el id del producto a darlo de baja: ";
			cin>>id_;
			item->DarDeBaja(id_, *item);
		}else if(opc==3){
			cout << "Opciones de búsqueda: " << endl;
			cout << "1. ID" << endl;
			cout << "2. Nombre" << endl; cin >> _Name;
			if(_Name == 1){
				cout << "ID del producto: ";
				cin >> id_;
				item->BuscarID(id_, *item);
			}else{
				cout << "Nombre del producto: ";
				cin >> name_;
				item->BuscarNombre(name_, *item);
			}
		}else if(opc==4){
			cout << "los item son: " << endl;
			item->Show_(*item);
		}else if(opc==5){
			cout<<"Ingrese el ID del producto: ";cin>>id_;
			cout<<"Ingrese el nuevo nombre del producto: "; cin>>name_;
			cout<<"ingrese el precio nuevo del producto: ";cin>>price_;
			cout<<"ingrese el stock nuevas del producto: ";cin>>k_;
			item->Modificar_(name_, id_, price_, k_, *item);
		}else if(opc==6){
			cout<<"\nGracias!";
			break;
		}else{
			cout<<"Opcion no valida." << endl;
		}
	}while(true);
	getch();
	return 0;
}
