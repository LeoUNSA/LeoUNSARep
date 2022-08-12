#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;
//Ejercicio 1:
//Utilizando Functores, elabore una clase que calcule la ecuación de regresión lineal simple (y=a+bx) de un conjunto de pares de datos (x,y) almacenados en un vector, retorne como parte del resultado los valores de a y b.
/*
class Punto{
    public:
        int x,y;
        Punto(int _x,int _y) : x(_x) , y(_y) {}
};
class RegresionL{
    public:
        vector <Punto> num;
        RegresionL(vector <Punto> Num) : num(Num) {}
        vector <float> operator()(){
            vector <float> r;
            float m,y,p1=0,p2=0,p3=0,p4=0,a=0,b=0;
            for(auto i = num.begin(); i!= num.end(); i++){
                p1+=(i->x*i->y);
                b+=i->x;a+=i->y;
                p3+=(i->x)*(i->x); 
            }
            p1*=num.size();
            p2=b*a;
            p3*=num.size();
            p4=b*b;
            a=a/num.size();
            b=b/num.size();
            m=(p1-p2)/(p3-p4);
            y=a-m*(b);
            r.push_back(y);
            r.push_back(a);
            r.push_back(m);
            r.push_back(b);
            return r;
        }
};
int main(){
    vector <Punto> num; 
    Punto  o(2,4),o1(1,3),o2(2,2),o3(3,5),o4(2,1),o5(4,1),o6(4,4),o7(7,5); 
    num.push_back(o);
    num.push_back(o1);
    num.push_back(o2);
    num.push_back(o3);
    num.push_back(o4);
    num.push_back(o5);
    num.push_back(o6);
    num.push_back(o7); 
    RegresionL linea(num);
    vector <float> aux = linea();
    cout<<"y = "<<aux[0] << " a = " <<aux[1] << " b = " << aux[2] <<" x = " << aux[3];
    cout<<aux[1];
    return 0;
}
*/
//Ejercicio 2:
//Utilizando Functores, elabore una clase que simule el proceso de la función estandar FIND. Se debe trabajar enviando como parámetros el índice de inicio el índice final y el dato a buscar. Retorne todas las ocurrencias en el rango indicado.
/*
class FIND{
    public:
        vector <int> nums;
        FIND(vector <int> Num) : nums(Num) {}
        vector <int> operator()(int index, int end, int num){
            vector <int> aux;
            for(int i=index;i<end;i++){
                if(nums[i]==num){
                    aux.push_back(i);
                }
            }
            return aux;
        }
};

int main(){
    vector <int> num;
    num.push_back(1);
    num.push_back(4);
    num.push_back(4);
    num.push_back(3);
    num.push_back(2);
    num.push_back(7);
    num.push_back(4);
    num.push_back(8);
    FIND linea(num);
    vector <int> aux = linea(1,4,4);
    cout<<"Numero:\tIndice:\n";
    for(int i=0;i<num.size();i++)
        cout<<num[i]<<"\t"<<i<<endl;
    cout<<endl<<"Indice de inicio: 1 , Indice final: 4 , Numero a buscar: 4\nIndices donde aparece el numero 4: \n";
    for(auto i=aux.begin();i!=aux.end();i++){
        cout<<*i<<endl;
    }

    return 0;
}
*/
//Ejercicio 3:
//Utilizando Functores y el método std::sort, elabore una clase Elementos con dos atributos de números enteros a y b. Genere una lista de 20 elementos de esta clase Elementos con valores aleatorios.
//Mediante el método std::sort ordénelos de forma en que un objeto al ser comparado se tenga la desigualdad: obj1.a<obj2.b. El método std::sort debe trabajar con un objeto Funtores.
/*
class Elemento{
    private:
        int a,b;
    public:
        Elemento(){
            a=0,b=0;
        }
        Elemento(int _a, int _b) : a(_a) , b(_b) {}        
        int getA(){return a;}
        void setA(int _a){a = _a;}
        int getB(){return b;}
        void setB(int _b){b = _b;}

};
bool comp(Elemento obj1,Elemento obj2){
    return obj1.getA() < obj2.getB();
}
class List{
    private:
        vector <Elemento> list;
    public:
        List(){}
        void push (int _a,int _b){
            Elemento obj(_a,_b);
            list.push_back(obj);
        }
        void operator()(){
            sort(list.begin(), list.end(), &comp);
        }
        void Imprimir(){
            for(auto&elem:list){
                cout<<elem.getA()<<" - "<<elem.getB()<<endl;
            }
        }
};
int main(){
    List list;
    srand(time(NULL));
    for(int i=0;i<20;i++){
        list.push(1+rand()%10,1+rand()%10);
    }
    cout<<"Pre-ordenamiento:\n";
    list.Imprimir();
    list();
    cout<<endl<<endl;
    cout<<"Lista ordenada:\n";
    list.Imprimir();
    return 0;
}
*/
