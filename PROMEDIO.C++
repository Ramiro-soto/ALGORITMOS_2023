// PROMEDIO DE NOTAS
#include <iostream>
using namespace std;

int main()
{
    int algoritmos, contabilidad;
    char alumno[10];
    cout << "CALCULA TU PROMEDIO INGRESANDO TUS NOTAS" << endl;
    cout << "INGRESE SU NOMBRE" << endl;
    cin >> alumno;
    cout << "INGRESE SU NOTA DE ALGORITMOS" << endl;
    cin >> algoritmos;
    cout << "INGRESE SU NOTA DE CONTABILIDAD" << endl;
    cin >> contabilidad;

    int promedio = (algoritmos + contabilidad) / 2;

    cout << "SU PROMEDIO ES: " << promedio << endl;

    system("pause");
    return 0;
}