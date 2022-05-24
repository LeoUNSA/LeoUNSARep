//Lab 7 - CC2 - Leonardo Montoya
#include <iostream>
using namespace std; 
//Ejercicio 1:
/*
class Persona{
	private: 
		string Nombre;
		int Edad;
	public: 
		Persona(string,int);
		void asignarDatos();
};
class Alumno:public Persona{
	public:
		Alumno(string,int);
		void mostrarAlumno();
};
Persona::Persona(string _Nombre,int _Edad){
	Nombre=_Nombre;
	Edad = _Edad;
}
void Persona::asignarDatos(){
	cout<<"Nombre: "<<Nombre<<endl;
	cout<<"Edad: "<<Edad<<endl;
}

Alumno::Alumno(string _Nombre,int _Edad):Persona(_Nombre,_Edad){
}
void Alumno::mostrarAlumno(){
	asignarDatos();
}
int main(){
	Persona p1 =Persona ("Leo",18);
	p1.asignarDatos();
	cout<<"Nostrar alumno y datos: \n";
	Alumno a1 = Alumno("Leonardo",18);
	a1.mostrarAlumno();
	return 0;
}
*/
//Ejercicio 2:
/*
class Color{
	string rgb;
	public:
		Color(string);
		void mostrarColor();
};
class Material{
	private: 
		string tipoMaterial;
	public: 
		Material(string);
		void mostrarMat();
};
class Objetos: public Color,public Material{
	public:
		Objetos(string,string);
		void mostrarOb();
};
Color::Color(string _rgb){
	rgb=_rgb;
}
void Color::mostrarColor(){
	cout<<"El color es "<<rgb;
}
Material::Material(string _tipoMaterial){
	tipoMaterial= _tipoMaterial;
}
void Material::mostrarMat(){
	cout<<"Tipo de material: "<<tipoMaterial<<endl;
}
Objetos::Objetos(string _rgb,string _tipoMaterial):Color(_rgb),Material(_tipoMaterial){	
}
void Objetos::mostrarOb(){
	mostrarColor();
	mostrarMat();
}
int main(){	
	return 0; 
}
*/
//Ejercicio 4:
/*
class Multimedia{
	private:
		string nombre;
	public:
		Multimedia(string);
		void mostrar();
		
};
class disco:public Multimedia{
	int duracion;
	public:
		disco(string, int);
		void Reproducir();
		void motrarDis();
};

Multimedia::Multimedia(string _nombre){
	nombre=_nombre;
}
void Multimedia::mostrar(){
	cout<<nombre;
}
disco::disco(string _nombre, int _duracion):Multimedia(_nombre){
	duracion=_duracion;
}
void disco::Reproducir(){
	cout<<"El ";
	mostrar();
	cout<<" esta reproduciendo una cancion de: "<<duracion<<" minutos"<<endl;
}
void disco::motrarDis(){
	mostrar();
	cout<<"\n" ;
	cout<<"dura: "<<duracion<<"Minutos"<<endl;
}
int main(){
	disco d1("disco",6);
	d1.Reproducir();
	return 0;
}
*/
//Ejercicio 6:
class Ave{
	private:
		string especie;
	public: 
		Ave(string);
		void imprimirDatos();
};
class Ganso:public Ave{	
	private: 
		int edad;	
	public: 
		Ganso(string,int);
		void mostrarGanso();
};
class Pato:public Ave{
	public:
		Pato(string,int);
		void mostrarPato();
};
class Gallina:public Ave{
		Gallina(string,int);
		void mostrarGallina();
};
Ave::Ave(string _especie){
	especie=_especie;
	
}
void Ave::imprimirDatos(){
	cout<<"Especie: "<<especie<<endl;
}
Ganso::Ganso(string _especie,int _edad):Ave (_especie){
	edad=_edad;
}
void Ganso::mostrarGanso(){
	imprimirDatos();
	cout<<"Tengo "<<edad<<" meses"<<endl;
	cout<<"Soy un ganso"<<endl;
}
Pato::Pato(string _especie,int _edad):Ave(_especie){
}
void Gallina::mostrarGallina(){
	imprimirDatos();
	cout<<"Soy una gallina "<<endl;
}
void Pato::mostrarPato(){
	imprimirDatos();
	cout<<"Soy un pato ";
}
int main(){
	Ave a1= Ave("oviparo");
	a1.imprimirDatos();
	cout<<"Clase Ganso"<<endl;
	Ganso g1= Ganso("oviparo",15);
	g1.mostrarGanso();
	cout<<"Clase Pato"<<endl;
	Pato p1 = Pato("oviparo",6);
	p1.mostrarPato();
	return 0;
}

