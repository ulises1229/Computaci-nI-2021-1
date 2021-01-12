# Práctica 12: Comparando

## Descripción

Ahora que ya tienes un mayor dominio de los dos lenguajes de programación que hemos visto (C++ y Python) es buen momento ponerlos a competir.

En esta práctica vamos a poner a competir las implementaciones en C++ y Python del método de Gauss-Jordan que ya tuviste que haber implementado en la [práctica 5 (GaussJordan)](../5_GaussJordan) y la [práctica 11 (GaussJordanP)](../11_GaussJordanP) respectivamente. Además de eso, vamor a poner a prueba el uso de las herramientas que ofrece [NumPy](https://numpy.org/doc/) para implementar una tercera versión del algoritmo pero ocupando esencialmente como estructuras de datos los arreglos de NumPy.

## Implementación

Tendrás dos _tareas_ para esta práctica:

* Implementar el método de Gauss-Jordan haciendo uso de las herramientas de NumPy.
* Hacer una comparativa de los tiempos de ejecución de tu implementación del método de Gauss-Jordan en C++ y las dos implementaciones en Python (considerando la que vas a realizar con NumPy). En esta comparativa tendrás que escribir todas las diferencias que consideres fundamentales entre las diferentes implementaciones, es totalmente libre la forma en que lo redactes, pero se busca que expliques las principales diferencias. **Es obligatorio** que coloques para cada implementación el tiempo que tarda cada una en ejecutarse sobre un mismo ejemplo, es decir, cuánto tardan en resolver el mismo sistema de ecuaciones (preferentemente que tenga solución), para lograrlo tal vez puedes encontrar útiles las siguiente referencias (todas están en inglés, pero son bastante amenas):
    - [Cálculo básico del tiempo de ejecuación en C++](https://www.geeksforgeeks.org/measure-execution-time-function-cpp/)
    - [Documentación biblioteca `chrono` en C++](https://www.cplusplus.com/reference/chrono/)
    - [Cálculo básico del tiempo de ejecución en python](https://stackoverflow.com/questions/7370801/how-to-measure-elapsed-time-in-python#answers)
    - [Documentación módulos de biblioteca `time` en Python](https://docs.python.org/3/library/time.html)


#### NOTA A CONSIDERAR
Para esta práctica puedes, pero no es obligatorio, subir tus códigos de la implementación del método de Gauss-Jordan en C++ y la primera implementación en Python. Sin embargo sí será necesario que subas un archivo `GaussJordanNumpy.py` para la implementación del método de Gauss-Jordan con las herramientas de NumPy en python. Además de esto, deberás de subir una comparativa de los rendimientos entre las tres implementaciones en un archivo `README.md`. En

### Ejemplo de funcionamiento
En esta ocasión no hay un ejemplo de la implementación, pero busca apoyarte de [las herramientas de marcado de texto del lenguaje `Markdown`](https://docs.github.com/en/free-pro-team@latest/github/writing-on-github/basic-writing-and-formatting-syntax) para darte una presentación lo más entendible posible, con una buena estructura y formato.
