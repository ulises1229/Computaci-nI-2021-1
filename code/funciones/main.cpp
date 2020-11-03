
#include <iostream>

using namespace std;

// Declaración de la función
float sumarNumeros(float a, float b);

int main() {

    float a {0}, b {0};

    cout << "Ingresar dos números enteros o flotantes" << endl;
    cin >> a >> b;

    cout << "La suma de los números es:" << sumarNumeros(a, b) << endl;
    return 0;
}

// Definición del cuerpo de la función
float sumarNumeros(float a, float b){
    return (a + b);
}
