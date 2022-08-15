#include <iostream>
#include <memory> 
using namespace std;
//Ejercicio 1:
//Implemente el siguiente código que usa punteros sin procesar y explique lo que hace
/*
Explicación breve:
Lo que hace la función luego de definir la clase Point con la que trabaja, es crear un puntero y un objeto, imprimirlos en pantalla, modificar sus parametros y finalmente eliminarlos.
*/
//Detalles
/*
class Point{
public:
    Point(double _x,double _y){
        cout<<"Constructor"<<endl;
        x = _x,y = _y;
    }
    //Métodos para darles valor a X y Y
    void X(double _X){
    cout<<_X<<endl;
    x = _X;
    }
    void Y(double _Y){
    cout<<_Y<<endl;
    y = _Y;
    }
    ~Point(){
    cout<<"Destructor"<<endl;
    }
    double x, y;
};
int main(){
    double* d=new double(1.0); //Puntero 'd' de tipo double 
    Point* pt=new Point(1.0, 2.0); //Creamos un objeto de tipo Point (pt) con los valores 1.0 y 2.0
    cout<<*d<<endl; //Imprimimos *d (1.0)
    *d = 2.0; //Se intercambia el valor del puntero de 1.0 (valor predeterminado) a 2.0 (valor asignado en esta linea)
    cout<<*d<<endl; //Imprimimos el nuevo valor de *d (2.0)
    (*pt).X(3.0); //Cambiamos el valor de X, que definimos inicialmente como 1.0 a 3.0
    cout<<pt->x<<endl;  //Imprimimos en pantalla el valor de X en el objeto pt
    (*pt).Y(3.0); //Cambiamos el valor de Y, que definimos iniciallmente como 2.0 a 3.0
    cout<<pt<<endl;//Imprimimos, nótese que ahora tanto X como Y tienen la misma dirección de memoria.
    pt->X(3.0);//Usamos '->' Para setear los valores.
    cout<<pt<<endl; //Imprimimos.
    pt->Y(3.0); //Nuevamente usamos '->' para setear valores
    delete d; //Borramos el puntero que creamos
    delete pt; //Borramos el objeto que creamos
    return 0; //Return de la función main.
}

//Ejercicio 2:
//Transfiera el código anterior reemplazando los punteros sin formato por std::unique_ptr.
/*
Al declarar los objetos usando std::unique ptr, el operador delete se vuelve innecesario. Escencialmente, al ejecutarse, hacen lo mismo, pero nos ahorramos algo de tiempo
y el proceso de vuelve más automatizado, evitando problemas de memoria.
*/
/*
class Point{
public:
    Point(double _x,double _y){
        cout<<"Constructor"<<endl;
        x = _x,y = _y;
    }
    //Métodos para darles valor a X y Y
    void X(double _X){
    cout<<_X<<endl;
    x = _X;
    }
    void Y(double _Y){
    cout<<_Y<<endl;
    y = _Y;
    }
    ~Point(){
    cout<<"Destructor"<<endl;
    }
    double x, y;
};
int main(){
    std::unique_ptr<double> d = std::make_unique<double>(1.0);
    std::unique_ptr<Point> pt = std::make_unique<Point>(1.0,2.0);
    cout<<*d<<endl;
    *d = 2.0; 
    cout<<*d<<endl;
    (*pt).X(3.0); 
    cout<<pt->x<<endl; 
    (*pt).Y(3.0); 
    cout<<&pt<<endl;
    pt->X(3.0); 
    cout<<&pt<<endl;
    pt->Y(3.0);
    return 0;
}
*/
//Ejercicio 3:
/*
class C1
{
    private:
        std::shared_ptr<double> d;
    public:
        C1(std::shared_ptr<double> value) : d(value) {}
        virtual ~C1() { cout << "\nDestructor C1 "; }
        void print() const { cout << "Valor C1: " <<*d<<endl; }
};
class C2{
    private:
        C1 *d;
        std::shared_ptr<double> d1;
    public:
        C2(C1 *value) {
            d = value;
        }
        C2(std::shared_ptr<double> value) : d1(value) {}
        virtual ~C2() { cout << "\nDestructor C2 "; }
        void print() const { cout << "Valor C2: " <<*d1<<endl;}
};
//Función de prueba.
int main() {
    shared_ptr<double> n1 = std::make_shared<double>(3.1416);
    C1 *c1=new C1(n1);
    C2 *c2=new C2(n1);
    c1->print();
    c2->print();
    delete c1;
    delete c2;
    return 0;
}
*/
//Ejercicio 4:
//Al anterior código implementele un puntero débil a un puntero el cual no puede estar vacio:
/*
class Point{
public:
    Point(double _x,double _y){
        cout<<"Constructor Point"<<endl;
        x = _x;
        y = _y;
    }
    void X(double _X){
        cout<<_X<<endl;
        x = _X;
    }
    void Y(double _Y){
        cout<<_Y<<endl;
        y = _Y;
    }
    ~Point(){
        cout<<"Destructor Point"<<endl;
    }
    double x, y;
};
class C1
{
    private:
        std::shared_ptr<double> d;
        std::shared_ptr<Point> p;
    public:
        C1(std::shared_ptr<double> value) : d(value) {}
        void setPoint(std::shared_ptr<Point> x){
            p = x;
            cout<<"Punto ("<<p->x<<","<<p->y<<") seteado"<<endl;
        };
        virtual ~C1() { cout << "Destructor C1\n"; }
        void print() const { cout << "Valor C1: " << *d<<endl; }
};
class C2{
    private:
        std::shared_ptr<C1> d;
        std::shared_ptr<double> d1;
        std::shared_ptr<Point> p;
    public:
        C2(std::shared_ptr<C1> value) {
            d = value;
        }
        C2(std::shared_ptr<double> value) : d1(value) {}
        void setPoint(std::shared_ptr<Point> value){
            p = value;
        }
        void setC1(std::shared_ptr<C1> value){
            d = value;
        }
        void setP(std::shared_ptr<Point> value){
            p = value;
            cout<<"Punto ("<<p->x<<","<<p->y<<") seteado"<<endl;
        }
        virtual ~C2() { cout << "Destructor C2\n"; }
        void print() const { 
            cout << "Valor C2: " << *d1<<endl;
        }
        void print_1(){
            cout<<"C1 en C2: ";
            d->print();
        } 
};
//Función de prueba
int main() {
    shared_ptr<double> n1 = std::make_shared<double>(3.1416);
    shared_ptr<Point> p = std::make_shared<Point>(*n1,7.775);
    shared_ptr<C1> c1 = std::make_shared<C1>(n1);
    c1->setPoint(p);
    shared_ptr<C2> c2 = std::make_shared<C2>(n1);
    c2->setP(p);
    c2->setC1(c1);
    return 0;
}
*/
//Ejercicio 5:
/*
class Point{
public:
    Point(double _x,double _y){
        cout<<"Constructor Point"<<endl;
        x = _x;
        y = _y;
    }
    void X(double _X){
        cout<<_X<<endl;
        x = _X;
    }
    void Y(double _Y){
        cout<<_Y<<endl;
        y = _Y;
    }
    ~Point(){
        cout<<"Destructor Point"<<endl;
    }
    double x,y;
};
class C2;
class C1{
    private:
        std::shared_ptr<double> d;
        std::shared_ptr<Point> p;
        std::weak_ptr<C2> d1;
    public:
        C1(std::shared_ptr<double> value) : d(value) {}
        void setPoint(std::shared_ptr<Point> x){
            p = x;
            cout<<"Punto ("<<p->x<<","<<p->y<<") seteado"<<endl;
        };
        void setC2(std::shared_ptr<C2> value){
            this->d1 = value;
            cout<<"Usando puntero debil - C1"<<endl;
        }
        virtual ~C1() { cout << "Destructor C1\n"; }
        void print() const { cout << "Valor C1: " << *d<<endl; }
};
 
class C2{
    private:
        std::weak_ptr<C1> d;
        std::shared_ptr<double> d1;
        std::shared_ptr<Point> p;
    public:
        C2(std::shared_ptr<C1> value) {
            d = value;
        }
        C2(std::shared_ptr<double> value) : d1(value) {}
        void setPoint(std::shared_ptr<Point> value){
            p = value;
        }
        
        void setC1(std::shared_ptr<C1> value){
            this->d = value;
            cout<<"Usando puntero debil - C2"<<endl;
        }
        void setP(std::shared_ptr<Point> value){
            p = value;
            cout<<"Punto ("<<p->x<<","<<p->y<<") seteado"<<endl;
        }
        virtual ~C2() { cout << "Destructor C2\n"; }
        void print() const { 
            cout << "Valor C2: " << *d1<<endl;
        }
        void print_1(){
            cout<<"C1 en C2: ";
            shared_ptr<C1> d2 = d.lock();
            d2->print();
        } 
};
//Función de prueba
int main() {
    shared_ptr<double> n1=std::make_shared<double>(3.1416);
    shared_ptr<Point> p=std::make_shared<Point>(*n1,7.775);
    shared_ptr<C1> c1=std::make_shared<C1>(n1);
    c1->setPoint(p);
    shared_ptr<C2> c2=std::make_shared<C2>(n1);
    c2->setP(p);
    c2->setC1(c1);
    c1->setC2(c2);
    weak_ptr<C2> c=c2;
    cout<<c2.use_count()<<endl;
    shared_ptr<C2> c5=c.lock();
    cout<<c2.use_count()<<endl;
    return 0;
}
*/