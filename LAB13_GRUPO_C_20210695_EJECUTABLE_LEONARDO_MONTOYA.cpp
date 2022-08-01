#include <ctime>
#include<iostream>
#include <list>
#include <string>
#include <sstream>
#include<cmath>
using namespace std;
//Ejercicio 1:
/*
struct Persona{
	string nomb;
	int fecha[3];
};
int mact(){
	int Fecha;
	time_t t =time(0);
	tm* now = localtime(&t);
	Fecha=now->tm_mon +1;
	return Fecha;
}
int main(int argc,char **argv){
	int n;
	int fact;
	cout<<"\nNumero de personas: "<<endl;
	cin>>n;
	Persona usuario[n];
	for (int i=0;i<n;i++){
		cout<<"Nombre:\n ";
		cin>>usuario[i].nomb;
		cout<<"Nacimiento:"<<endl;
		cout<<"\nDia: ";
		cin>>usuario[i].fecha[0];
		cout<<"Mes: ";
		cin>>usuario[i].fecha[1];
		cout<<"Año: ";
		cin>>usuario[i].fecha[2];
		cout<<endl<<endl;
	}
	fact=mact();
	cout<<"\nAlumnos que cumplen año este mes: "<<endl;
	for (int j=0;j<n;j++){
		if (usuario[j].fecha[1]==fact){
			cout<<"\nNombre: "<<usuario[j].nomb<<endl;
			cout<<"Cumpleaños: "<<usuario[j].fecha[0];
			cout<<"/"<<usuario[j].fecha[1];
			cout<<"/"<<usuario[j].fecha[2]<<endl;
		}
	}
	return 0;
}
*/
//Ejercicio 2: 
/*
struct Alumno{
	string nombre;
    string gr;
	float nf[3]; // cumpleanio
    float proyect;
    float media; 
};
float nfinal(float n1,float n2,float n3,float n4){
	float media;
    media=((n1*15)/100)+((n2*20)/100)+((n3*25)/100)+((n4*40)/100);
    return media;
}
int main(int argc,char **argv){
	int n;
	cout<<"\nCantidad de personas: "<<endl;
	cin>>n;
	Alumno estudiante[n];
	for (int i=0;i<n;i++){
		cout<<"\nNombre: ";
		cin>>estudiante[i].nombre;
        cout<<"Grupo (a,b,c): \n";
		cin>>estudiante[i].gr;
        for(int a=1;a<4;a++){
            cout<<"Nota de la fase "<<a<<endl;
            cin>>estudiante[i].nf[a-1];
        }
		cout<<"Nota del Proyecto"<<endl;
        cin>>estudiante[i].proyect;
        estudiante[i].media=nfinal(estudiante[i].nf[0],estudiante[i].nf[1],estudiante[i].nf[2],estudiante[i].proyect);
		cout<<endl<<endl;
	}
    cout<<"Notas finales: ";
    for (int i=0;i<n;i++){
        cout<<"\nEstudiante: "<<estudiante[i].nombre;
        cout<<"\nGrupo: "<<estudiante[i].gr;
        cout<<"\nNota:" <<estudiante[i].media;
    }
	return 0;
}
*/
//Ejercicio 3:
/*
struct Jugador{
	string nombre;
    int edad;
    float estatura; 
};
int main(int argc,char **argv){
	int n=10;
	Jugador player[n];
	for (int i=0;i<n;i++){
		cout<<"\nIndicar nombre: ";
		cin>>player[i].nombre;
        cout<<"Indicar edad: ";
		cin>>player[i].edad;
		cout<<"Indicar estatura: ";
        cin>>player[i].estatura;
	}
    cout<<"Jugadores con menos de 20 años y estatura superior a 1.7 m:";
    for (int i=0;i<n;i++){
        if(player[i].edad<20 && player[i].estatura>1.70 ){
            cout<<"\nEstudiante: "<<player[i].nombre;
            cout<<"\nEdad: "<<player[i].edad;
            cout<<"\nEstatura:" <<player[i].estatura;
        }
    
    }
	return 0;
}
*/
//Ejercicio 4:
/*
struct Empleados
{
    string nombre;
    char sexo;
    float salario;
};
int main(){
    int cant;
    cout<<"Cantidad de empleados: ";cin>>cant;
    Empleados empl[cant];

    for (int i=0;i<cant;i++){
        cout<<"\nInformación: "<<i+1<<" :"<<endl;
        cout<<"\nNombre: ";
        cin>>empl[i].nombre;
        cout<<"Sexo del empleado (M/F): ";
        cin>>empl[i].sexo;
        cout<<"Salario: ";
        cin>>empl[i].salario;
    }
    float mayor = empl[0].salario, menor = empl[0].salario;
    for (int i=0;i<cant;i++){
        if (empl[i].salario>mayor){
            mayor = empl[i].salario;
        }
        if (empl[i].salario<menor){
            menor = empl[i].salario;
        }
    }
    for (int i=0;i<cant;i++){
        if (empl[i].salario==mayor){
            cout<<"Empleado con mayor salario: "<<endl;
            cout<<"Nombre: "<<empl[i].nombre<<endl;
            cout<<"Sexo: "<<empl[i].sexo<<endl;
            cout<<"Sueldo: "<<empl[i].salario<<endl;
            cout<<endl;}
        if (empl[i].salario==menor){
            cout<<"Empleado con menor salario:: "<<endl;
            cout<<"Nombre: "<<empl[i].nombre<<endl;
            cout<<"Sexo: "<<empl[i].sexo<<endl;
            cout<<"Sueldo: "<<empl[i].salario<<endl;
            cout<<endl;}
    }
    return 0;
}
*/