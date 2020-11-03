#include <stdio.h> // encabezado de C puro
#include <iostream> //C++

#include "test.h"

int main() {
    int a = 2, b = 3;
    float c = 3.2f;

    std::cout << "a = " << a << std::endl;
    // Apuntador
    int *d = &a;

    // modificamos a
    a = 5;

    cout<< "d = " << *d << endl;

    const int n = 2;
    int numero[n][n] = {{1,2},
                        {3,4}};
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << numero[i][j] << " ";
        }
        cout << "\n";
    }
}

