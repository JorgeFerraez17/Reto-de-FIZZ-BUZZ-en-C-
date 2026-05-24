#include<iostream>
#include<conio.h>
using namespace std;

int cont = 0, num1, num2, resultado, x;

int main (){
while (true){

system("cls");

cout<<"Desea salir del programa\n\n-Escriba 0 para salir\n-Si desea continuar escriba cualquier numero entero\n";
cin>> x;



if (x == 0){
    cout<<"CERRANDO LA CALCULADORA \n\n ----ADIOS----";
    getch();
    break;
}


system("cls");
cout<<"Escribe el primer numero\n";
cin>> num1;

cout<<"Escribe el segundo numero\n";
cin>> num2;

cout<<"Escribe el numero correspondiente a la accion que desee hacer.\n\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n";
cin>> cont;


switch (cont)
{
case 1:
    system("cls");
    resultado = (num1 + num2);
    cout<<"El resultado de la Suma de: " << num1 <<" + " << num2 <<" = " << resultado;
    getch();
    break;

case 2:
    system("cls");
    resultado = (num1 - num2);
    cout<<"El resultado de la Resta de: " << num1 <<" - " << num2 <<" = " << resultado;
    getch();
    break;

case 3:
    system("cls");
    resultado = (num1 * num2);
    cout<<"El resultado de la Multiplicacion de: " << num1 <<" X " << num2 <<" = " << resultado;
    getch();
    break;

case 4:
    system("cls");
    resultado = (num1 / num2);
    cout<<"El resultado de la Divicion de: " << num1 <<" / " << num2 <<" = " << resultado;
    getch();
    break;

default:
    break;
}


}
    return 0;
}