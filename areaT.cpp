#include <iostream>
float base;
float altura;
float resultado;
using namespace std;
int main(){
cout << "Ingrese la base del triangulo: ";
cin >> base;
cout << "Ingrese la altura del triangulo: ";
cin >> altura;
resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
cout << "El area de su triangulo es: " << resultado << endl;
cin.ignore();
cin.get(); // Detenemos el programa con estas dos funciones similar a la funcion system("pause");
}

/*
#include <iostream>
int main () {
     //Definir Variables y otros
     printf("Ejercicio 01: Area de un Triangulo\n");
     int b=0, h=0, area=0;
     //Datos de Entrada
     printf("Ingrese Base:");
     scanf("%i", &b);
     printf("Ingrese Altura:");
     scanf("%i", &h);
     //Proceso
     area=(b*h)/2;
    //Datos de Salida
    printf("Area de Triangulo es:%i %s", area, "\n");
    return 0;
}*/