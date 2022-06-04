#include <iostream> 
using namespace std;
//Ejercicio 1:
/*
template <class T>
T minimo (T*a,int n) 
{ 
   T min=a[0];
   for (int i=1;i<nu;i++)
        if(a[i]<min) 
            min=a[i];
   return min; 
} ;
template <class T>
T maximo (T*a,int n) 
{
   T max=a[0];
   for (int i=1;i<n;i++)
        if(a[i]>max) 
            max=a[i];
   return max; 
};
*/
//Ejercicio 2:
/*
template <class T>
class OA
{
    private:
        T a;
        T b;
    public:
        OA (T a, T b);
        T suma();
        T resta();
        T division();
        T multiplicacion();
};
template <class T>
OA<T>::OA(T a,T b)
{
    this->a=a;
    this->b=b;
}
template <class T>
T OA<T>::suma()
{
    T c;c=a+b;return c;
}
template <class T>
T OA<T> :: resta()
{
    T c;c=a-b;return c;
}
template <class T>
T OA<T>::division(){
    T c;c=a/b;return c;
}
template <class T>
T OA<T>::multiplicacion(){
    T c;c=a*b;return c;
}
int main()
{
    OA<int> ar1(10, 5);
    cout<<ar1.suma()<<endl;
    cout<<ar1.resta()<<endl;
    cout<<ar1.multiplicacion()<<endl;
    cout<<ar1.division()<<endl;
    
    OA<float> ar2(10.56, 5.25);
    cout<<ar2.suma()<<endl;
    cout<<ar2.resta()<<endl;
    cout<<ar2.multiplicacion()<<endl;
    cout<<ar2.division()<<endl;
}
*/
//Ejercicio 4:
/*
template <class T>
T minimo (T*a,int n) 
{ 
   T min=a[0];
   for (int i=1;i<n;i++)
        if(a[i]<min) 
            min=a[i];
   return min; 
} ;
template <class T>
T maximo (T*a,int n) 
{
   T max=a[0];
   for (int i=1;i<n;i++)
        if(a[i]>max) 
            max=a[i];
   return max; 
};
int main(void)
{ 
   int Enteros [3]={10,2,1}; 
   float Flotantes [3]={5.3,4.7,8.2}; 
   int i;
   cout<<"Arreglo de enteros: ";
   for (i=0;i<3;i++) 
         cout<<Enteros[i]<<" "; 
   cout<<endl<<"Numero minimo: "<<minimo(Enteros, 3)<<endl<<"Numero maximo: "<<maximo(Enteros, 3)<<endl<<endl;
   cout<< "Arreglo de flotantes: ";
   for (i=0;i<3;i++) 
        cout<< Flotantes[i] << " "; 
        cout<<endl<<"Numero minimo: "<<minimo(Flotantes, 3)<<endl<<"Numero maximo: "<<maximo(Flotantes, 3); 
} 
*/
//Ejercicio 5:
/*
template <class T>
void Ordenar ( T * a, int st, int fn) 
{
   int i,j,k;
   T objeto;
   k=1;
   do {
       k=3*k+1; 
    }while(k<fn-st+1) ;
   do {
       k/=3;
       for(i=st+k;i<=fn;i++) 
       { objeto=a[i];j=i;
            while (objeto < a [ j-k]){ 
               a[j]=a[j-k]; 
               j-=k;if(j<st+k) 
                 break; }
            a[j]=objeto;}}
            while(k>1);}
int main(void){ 
    int Enteros[3] = { 5,6,1 } ;
    float Flotantes[3] = {12.3,5.6,17.2 } ;
    int i;
    cout<<"Enteros: "<<endl<< "Arreglo original: ";
    for (i=0; i<3; i++) 
          cout << Enteros[ i ] << " ";
    Ordenar(Enteros, 0, 2); 
    cout<<endl<<"Luego de ordenar: ";
    for (i=0;i<3;i++) 
          cout<<Enteros[i]<<" ";
    cout<<endl<<endl<<"Flotantes: "<<endl<< "Arreglo original: "; 
    for (i=0; i<3; i++) 
          cout<<Flotantes[i]<<" ";
    Ordenar(Flotantes, 0, 2); 
    cout<<endl<<"Luego de ordenar: ";
    for (i=0;i<3;i++) 
        cout<<Flotantes[i]<<" "; 
}
*/

