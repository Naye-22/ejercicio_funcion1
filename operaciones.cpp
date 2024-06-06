//diseñe las funcione que calpulan las 4 operaciones aritmetica
//basicas: suma, resta, multiplicacion y dvision
#include<iostream>
using namespace std;
double suma(double num1, double num2)
{
    return num1 + num2;
}
double resta(double num1, double num2)
{
    return num1 - num2;
}
double multiplicacion(double num1, double num2)
{
    return num1 * num2;
}
double division(double num1, double num2)
{
    return num1 / num2;
}
int main()
{
    cout<<endl<<"funciones que calculas las operaciones basicas";
    cout<<endl<<"la division de 19 para 3 es: "<<division(19,3);


    double res = suma(10, suma(12,100));
    cout<<endl<<"la variable res vale: "<<res;
    return 0;
} 