//fecha: 6/6/ 2024
//Autor
//diseñe la funcion que recide como primero un entero y calcula el cuadrado de ese entero
#include<iostream> 
using namespace std;
// @brief Calcula el cuadrado e un numero

int cuadradoNum(int num)
{
    int res;
    res = num*num;
    return res;
}
    int main()
        {
            cout<<endl<<"calcula el cuadrado de un numero";
            int x = cuadradoNum(10);//llamada a la funcion cuadrado
            x = x*2 + (x/3);
            cout<<endl<<"el cuadrado de x es: "<<x;

            cout<<endl<<"El cuadrado de 12 es: "<<cuadradoNum(12);
            //pida al usuario el valor que desea que sea elevado
            cout<<endl<<"Ingrese el numero que desea elevar al cuadrado: ";
            cin>>x;
            cout<<endl<<"el cuadrado de "<< x <<"es: "<<cuadradoNum(x);

            x = cuadradoNum(cuadradoNum(3));
            cout<<endl<<"Resultado del cuadrado de un cuadrado es: "<<x;
    return 0;
}