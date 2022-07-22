#include <iostream>
#include <string>
using namespace std;
class Llantas{
    public:
        int tamanio;
};
class Motor{
    public:
        int Poder;
};
class Cuerpo{
    public:
        string forma;
        string color;
};
class Asientos{
    public:
        int cantidad;
        string color;
};
class Ventanas{
    public:
        int cantidad;
        string polarizada;
};
class Carro{
    public:
        Llantas*   llantas[4];
        Motor*  motor;
        Cuerpo* cuerpo;
        Asientos* asientos;
        Ventanas* ventanas;
        void specifications(){
            cout << "Cuerpo: " << cuerpo->forma << " " << cuerpo->color <<endl;
            cout << "Fuerza del motor: " << motor->Poder <<endl;
            cout << "Tamaño de las ruedas: " << llantas[0]->tamanio << "'" <<endl;
            cout<< "Numero y color de los asientos: " << asientos->cantidad<< " asientos "<<asientos->color<<endl;
            cout<<"Numero de ventanas y si son o no polarizadas: "<<ventanas->cantidad<< " ventanas "<<ventanas->polarizada<<endl;
        }
};
class Builder{
    public:
        virtual Llantas* getLlantas()=0;
        virtual Motor* getMotor()=0;
        virtual Cuerpo* getCuerpo()=0;
        virtual Asientos*getAsientos()=0;
        virtual Ventanas*getVentanas()=0;
};
class Director{
    Builder* builder;
    public:
        void setBuilder(Builder* newBuilder){
            builder = newBuilder;
        }
        Carro* getCarro(){
            Carro* carro = new Carro();
            carro->cuerpo = builder->getCuerpo();
            carro->motor = builder->getMotor();
            carro->llantas[0] = builder->getLlantas();
            carro->llantas[1] = builder->getLlantas();
            carro->llantas[2] = builder->getLlantas();
            carro->llantas[3] = builder->getLlantas();
            carro->asientos=builder->getAsientos();
            carro->ventanas=builder->getVentanas();
            return carro;
        }
};
class HondaBuilder : public Builder{
    public:
        Llantas* getLlantas(){
            Llantas* llanta = new Llantas();
            llanta->tamanio = 22;
            return llanta;
        }
        Motor* getMotor(){
            Motor* motor = new Motor();
            motor->Poder = 400;
            return motor;
        }
        Cuerpo* getCuerpo(){
            Cuerpo* cuerpo = new Cuerpo();
            cuerpo->forma = "Minivan";
            cuerpo->color="Blanco";
            return cuerpo;
        }
        Asientos* getAsientos(){
            Asientos* asientos=new Asientos();
            asientos->cantidad=11;
            asientos->color="Marrones";
            return asientos;
        }
        Ventanas* getVentanas(){
            Ventanas* ventanas=new Ventanas();
            ventanas->cantidad=8;
            ventanas->polarizada="No polarizadas";
            return ventanas;

        }
};
class SuzukiBuilder : public Builder{
    public:
        Llantas* getLlantas(){
            Llantas* llanta = new Llantas();
            llanta->tamanio = 16;
            return llanta;
        }
        Motor* getMotor(){
            Motor* motor = new Motor();
            motor->Poder = 85;
            return motor;
        }
        Cuerpo* getCuerpo(){
            Cuerpo* cuerpo = new Cuerpo();
            cuerpo->forma = "Coupe";
            cuerpo->color="Negro";
            return cuerpo;
        }
        Asientos* getAsientos(){
            Asientos* asientos=new Asientos();
            asientos->cantidad=3;
            asientos->color="Negros";
            return asientos;
        }
        Ventanas* getVentanas(){
            Ventanas* ventanas=new Ventanas();
            ventanas->cantidad=6;
            ventanas->polarizada="Polarizadas";
            return ventanas;
        }
};
int main()
{
    Carro* carro;
    Director director;
    HondaBuilder hondaBuilder;
    SuzukiBuilder susukiBuilder;
    cout << "Honda" << endl;
    director.setBuilder(&hondaBuilder); 
    carro = director.getCarro();
    carro->specifications();
    cout << endl;
    cout << "Suzuki" << endl;
    director.setBuilder(&susukiBuilder); 
    carro = director.getCarro();
    carro->specifications();
    return 0;
}