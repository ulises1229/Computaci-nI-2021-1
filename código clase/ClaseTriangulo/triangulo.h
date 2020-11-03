//
// Created by Ulises Olivares on 26/10/20.
//

#ifndef POOTRIANGULO_TRIANGULO_H
#define POOTRIANGULO_TRIANGULO_H


class Triangulo {
public:
    void setAltura(float altura);
    float getAltura();

    void setBase(float base);
    float getBase();

    float calcularArea();

private:
    float b{0},  h{0};

};


#endif //POOTRIANGULO_TRIANGULO_H
