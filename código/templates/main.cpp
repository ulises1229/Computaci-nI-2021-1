#include <iostream>
using namespace std;

template <typename T>
T suma(T a, T b);

void imprimirVar(int & a);

int main() {
    int a = 1 , b = 2;
    float c = 2.3, d = 3.2;

    //cout<< "a = " << &a << endl;

    /*cout << "La suma de los elementos es: " << suma(a,b) << endl;
    cout << "La suma de los elementos es: " << suma(c,d) << endl;*/

    imprimirVar(a);

    cout <<"a = " << a << endl;


    return 0;
}

template <typename T>
T suma(T a, T b){
    return a + b;
}

void imprimirVar(int & a){
    cout <<"a = " << a << endl;
    a = 5;
}