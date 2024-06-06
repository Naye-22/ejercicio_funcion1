//fecha: 6/6/ 2024
//Autor
//diseñe la funcion que imprima una tabla de multiplicar
#include<iostream>
using namespace std;
void TablaMultiplicar(int tabla)
{
    cout<<endl<<"tabla de multiplicae del "<<tabla;
    for(int k=1; k<=12; k++) 
    {
        cout<<endl<<tabla << " x " <<k<<" = "<< tabla*k;
    }
}
//diñese ña funcion que imprima una tabla de multiplica
//la funcion recibe como parametro 3 enteros: el primero es la tabla
//segundo limite inferior y el tercero es e limite superior
        void TablaLimites(int tabla, int inicio, int fin)
            {
                    for(int k=inicio; k<=fin; k++) 
                        {
                            cout<<endl<<tabla << " x " <<k<<" = "<< tabla*k;
                        }
                
            }
    int main()
        {
          cout<<endl<<"Funcion que calcula una tabla de multiplicar";
          TablaMultiplicar(5);
          TablaMultiplicar(9);
          TablaMultiplicar(12);
          //pida al usuario la tabla que desea imprimir 
          int mun;
          cout<<endl<<"Ingrese la tabla que desea que se muestre";
          cin>>mun;
          TablaMultiplicar(mun);
    return 0;
 }