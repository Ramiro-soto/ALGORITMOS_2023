#include <iostream> //Biblioteca estandar que permite entrada/salida

using namespace std;

int main()
{

    char nombre[10]; // variable tipo caracter
    int edad;        // variable tipo entero

    cout << "Ingrese su nombre: " << endl; // mostrar msj en pantalla
    cin >> nombre;                         // captura del dato en la variable

    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    cout << "Su nombre es: " << nombre << "  "
         << "Tienes: " << edad << "años" << endl;

    system("pause");
    return 0;
}