#include <iostream>

#include "triangulo.h"

using namespace std;

int main() {

    //Definición de objeto
    Triangulo t1;

    t1.setAltura(4.0);
    t1.setBase(5.0);
    cout << "El área de t1 es: " << t1.calcularArea() << endl;

    return 0;
}
