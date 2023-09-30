#include<iostream> //Biblioteca estandar que permite entrada/salida
#include<cmath>  /*Biblioteca estandar para funciones matematicas*/

using namespace std;

int main(){
    float numero, raiz;

    cout<<"Calculo de raiz cuadrada"<<endl;
    cout<<"Ingrese el numero"<<endl;
    cin >> numero;

    raiz = sqrt (numero);

    cout<<"La raiz cuadrada de: " << numero << " es igual a = "<< raiz << endl;

   system("pause");
    return 0;
}