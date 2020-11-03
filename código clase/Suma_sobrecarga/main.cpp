#include <iostream>

using namespace std;

int suma(int a, int b);
float suma(float a, float b);
void imprimirVar(float a);

int main() {

    int a = 5, b = 2;

    float c = 7.2, d = 5.3;

    cout<< "La suma es: " << suma(a, b) << endl;

    cout<< "La suma es: " << suma(c, d) << endl;

    imprimirVar(c);

    return 0;
}

int suma(int a, int b ){
    return a + b;
}

float suma (float a, float b){
    return a + b;
}

void imprimirVar(float a){
    cout<< "Var a = " << a << endl;
}