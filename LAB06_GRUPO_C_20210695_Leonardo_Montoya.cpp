//Lab 6-Leonardo Montoya
#include <iostream>
#include <random>
using namespace std;
//Ejercicio 1
/*
class Rectangulo{
private:int l;int a;
public:Rectangulo(int, int);~Rectangulo();
int geta();int getl();int area();int perimetro();};
Rectangulo::Rectangulo(int _l, int _a){l=_l;a=_a;}
Rectangulo::~Rectangulo(){}
int Rectangulo::geta(){
int aux;aux=a;return aux;}
int Rectangulo::getl(){
int laux;laux=l;return laux;}
int Rectangulo::area(){
int laux, aux;
laux=getl();aux=geta();
int area;area=laux*aux;
return area;}
int Rectangulo::perimetro(){
int laux,aux;
laux=getl();aux=geta();
int p;
p=2*(laux+aux);
return p;}
int main(){
int a,b;
cout<<"Largo del rectangulo: "<<endl;cin>>a;
cout<<"Ancho del rectangulo: "<<endl;cin>>b;
Rectangulo c=Rectangulo(a,b);
cout<<"El perimetro es: " <<c.perimetro()<<endl;
cout<<"El area es: "<<c.area()<<endl;}
*/
//Ejercicio 2;
/*
class Estudiante{
private:
string Nombre,Apellidos;
int cui;float p1,p2,p3;
public:
Estudiante(string, string, int, float, float, float);
~Estudiante();
string getn();
int getcui();float getp1(),getp2(),getp3(),final();bool aprobar();void notas();};
Estudiante::Estudiante(string _nombre,string _apellidos,int _cui,float _p1,float _p2,float _p3){
    Nombre=_nombre;
    Apellidos=_apellidos;cui= _cui;p1=_p1;p2=_p2;p3=_p3;
}
Estudiante::~Estudiante(){
}
string Estudiante::getn(){
    string n1;n1=Nombre;return n1;
}
int Estudiante::getcui(){
    int cui1;cui1=cui;return cui1;
}
float Estudiante::getp1(){
    float p1ob;p1ob=p1;return p1ob;
}
float Estudiante::getp2(){
    float p2ob;p2ob=p2;return p2ob;
}
float Estudiante::getp3(){
    float p3ob;p3ob=p3;return p3ob;
}
float Estudiante::final(){
    float final;
    final=(getp1()+getp2()+getp3())/3;return final;
}
bool Estudiante::aprobar(){
    bool aprobo;
    float f1=final();
    if(f1>=10,5){
        return true;}
        else{return false;}}
void Estudiante::notas(){
cout<<"Nombre: "<<getn()<<endl;
cout<<"CUI: "<<getcui()<<endl;
cout<<"Promedio: "<<final()<<endl;
if(aprobar()==true){
cout<<"El estudiante aprobo.";}
else{cout<<"El estudiante no aprobo.";}}
int main(){
string Nombre, Apellidos;
int cui; float nota1,nota2,nota3;
cout<<"Nombre del alumno: "<<endl;cin>>Nombre;
cout<<"Apellido del alumno: "<<endl;cin>>Apellidos;
cout<<"Cui del alumno: "<<endl;cin>>cui;
cout<<"Primer parcial: "<<endl;cin>>nota1;
cout<<"Segundo parcial: "<<endl;cin>>nota2;
cout<<"Tercer parcial: "<<endl;cin>>nota3;
Estudiante a=Estudiante(Nombre,Apellidos,cui,nota1,nota2,nota3);a.notas();}
*/
//Ejercicio 3:
/*
class Edad{
private:
string Nombre;
int d1,m1,a1,d2,m2,a2;
public:
Edad(string, int, int, int, int, int, int);
~Edad();
int gedad();
void imprimiredad();
};
Edad::Edad(string _nombre,int _d1,int _m1,int _a1,int _d2,int _m2,int _a2){
Nombre=_nombre;
d1=_d1;
m1=_m1;
a1=_a1;
d2=_d2;
m2=_m2;
a2=_a2;
}
Edad::~Edad(){
}
int Edad::gedad(){
int edad=0,dm=0,dd=0;
if(d1>d2){
dd+=31-d1;
dd+=d2;
if(dd>31)
{
dm++;
}
}
if(m1>m2){
dm+=12-m1;
dm+=m2;
}
if(dm>12){
edad++;
}
edad = a2-a1;
return edad;
}
void Edad::imprimiredad(){
cout<<"La edad de: "<<Nombre<<" es "<<gedad()<<endl;
}
int main(){
int d1, d2, m1, m2, a1, a2;
string nombre;
cout<<"Nombre: " << endl;cin>>nombre;
cout<<"Dia de nacimiento: "<<endl;cin>>d1;
cout<<"Mes de nacimiento: " <<endl;cin>>m1;
cout<<"Anio de nacimiento: " <<endl;cin>>a1;
cout<<"Dia actual: " << endl;cin>>d2;
cout<<"Mes actual: " << endl;cin>>m2;
cout<<"Anio actual: " << endl;cin>>a2;
Edad j = Edad(nombre, d1, m1, a1, d2, m2, a2);
j.imprimiredad();}
*/
//Ejercicio 5:
/*
class Matriz{
private:
int M[3][3];
public:
Matriz();
~Matriz();
void buscar(int);
};
Matriz::Matriz(){
int n;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
n = rand()%10;
M[i][j]=n;
}}}
Matriz::~Matriz(){}
void Matriz::buscar(int abuscar){
bool find = false;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
if(abuscar == M[i][j]){
cout << "Numero encontrado en la posicion ["<<i<<"]["<<j<<"]"<<endl;}}}}
int main(){
int buscar;
Matriz a = Matriz();
cout<<"Se creo una matriz aleatoria, pruebe buscar un numero: "
<< endl;cin>>buscar;
a.buscar(buscar);
}
*/