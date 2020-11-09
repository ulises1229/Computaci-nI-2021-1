#include <iostream>
#include <array>

#include "GaussJordan.h"

using namespace std;


int main() {
    const int f = 3, c = 4;

    float M[f][c] = { {2, 1, -1, 8},
                    {-3, -1, 2, -11},
                    {-2, 1, 2, -3}};

    GaussJordan gauss(M, f, c);
    gauss.eliminacionGaussJ();




    return 0;
}
