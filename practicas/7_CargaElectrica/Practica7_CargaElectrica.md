# Práctica 7: CargaElectrica

## Descripción

En esta práctica vamos a llevar a programar un proceso común en clases de bioquímica: el cálculo de la carga neta de una molécula (principalmente aminoácidos y/o péptidos).

Para llevarla a cabo hemos puesto a tu disposición [este código](CargaElectrica.cpp) que contiene el esquema básico del funcionamiento de la práctica. En él, la función _main()_ realiza lo siguiente:
* Define el número de grupos `numGrupos` con los que va a contar la molécula.
* Solicita al usuario un nombre para la molécula
* Crea e inicializa un arreglo de variables del tipo `Grupo` de tamaño `numGrupos` que corresponde a los grupos de la molécula.
* Solicita al usuario información sobre cada uno de los grupos y los inicializa y asigna en el arreglo.
* Solicita al usuario el pH de la sustancia a la que se encuentra sometida la molécula.
* Evalúa la carga eléctrica neta de la molécula al pH indicado y lo imprime en pantalla.

Este código cuenta con tres funciones ya declaradas al inicio del archivo:

`PedirpH` la cual tiene como objetivo solicitar el valor de pH al cual se desea calcular la carga de la molécula y lo asigna a la variable `ph` pasada por referencia que corresponde a la variable `phMolecula` creada en el método `main()`. El prototipo de la función luce como: `void PedirpH(float& ph)`.

`CrearGrupo` es una función que recibe como parámetro un número entero que representa el grupo que se está pidiendo al usuario. El objetivo de esta función es solicitar al usuario información respecto al grupo tal como su nombre (e.g. _carboxilo_, _amino_, etc.), así como el valor de su respectivo _pKa_ y su carga eléctrica con un pH mayor a su pKa. Posteriormente crea una instancia de la clase `Grupo` pasando como argumentos al *constructor* el nombre, pKa y carga indicados por el usuario, regresando la nueva instancia creada. La declaración de la función es la siguiente: `Grupo CrearGrupo(int i)` donde `i` es el índice del grupo a llenar.

La siguiente función denominada `CalcularCargaApH` tiene como objetivo calcular la cargar eléctrica de la molécula a partir de la carga eléctrica de sus grupos a un cierto pH. Para lograrlo esta función recibe dos parámetros: un valor flotante `ph` pasado por referencia que corresponde al pH sobre el que se desea evaluar la carga de la molécula, el segundo parámetro es un _template_ denominado `grupos` el cual va a representar el arreglo de variables del tipo `Grupo` creado en `main()` denominado `todosGrupos`.

*TODO*

Este código cuenta también con la declaración de una variable `miPunto` del tipo `Punto2D`, este tipo corresponde a una clase con ese nombre, la cual hace referencia a un punto en el plano, y la cual debe de contar con sus correspondientes coordenadas `x` y `y`, así como un par de métodos que son llamados a lo largo del método _main()_.

En concreto requiere de los siguiente métodos:

* `SetPosicion`: Inicializa las coordenadas del punto, recibiendo como parámetros dos números flotantes.
* `Trasladar`: Traslada/desplaza el punto en el plano cierto valor en cada eje. Recibe como parámetros los valores a trasladar para cada eje, primero en el `x` y después el de las `y`.
* `RotarRespectoAlOrigen`: Rota el punto un cierto ángulo indicado con respecto al origen. Recibe como parámetro el ángulo a rotar **en grados**.
* `Escalar`: Escala la posición del punto en el plano, como parámetros recibe el factor de escala sobre cada eje, primero sobre `x` y luego sobre `y`.
* `GetX`: Regresa el valor de la coordenada `x` del punto en el plano.
* `GetY`: Regresa el valor de la coordenada `y` del punto en el plano.

## Implementación

Como podrás notar, no está definida la clase `Punto2D`, es ahí donde tú entras en acción.

Para lograr esta práctica tendrás que crear dos archivos: uno llamado `Punto.h` que contendrá la definición de la clase `Punto2D` así como sus atributos y las declaraciones de sus métodos, y otro llamado `Punto.cpp` que contendrá la implementación de los métodos de la mencionada clase.

Puedes agregar tantos atributos a la clase como creas necesario, siempre y cuando logre el objetivo de la práctica. Igualmente podrás agregar tantos métodos como consideres necesarios, considerando que **al menos deberán de estár implementados los indicados en la sección anterior** y que son los llamados a través de la función _main()_.

**IMPORTANTE**: No deberás modificar en absoluto el código en el archivo `Puntos.cpp` ya que éste ya está _totalmente implementado_ y por tanto no será descargado de tu repository, sino que se ocupará el [indicado en esta práctica](Puntos.cpp). Sin embargo es recomendable que lo descargues, para que puedas llevar a cabo las pruebas de forma local. Siéntete libre de agregarlo a la carpeta en tu repository, de estar presente simplemente se va a ignorar cuando se haga la revisión.

#### NOTA A CONSIDERAR
Para que tu práctica funcione de manera correcta vas a necesitar tener tres archivos, los ya mencionados `Grupo.h` y `Grupo.cpp` que es donde vas a implementar la declaración de la clase `Grupo` y la implementación de sus métodos repectivamente. El tercer archivo será el que te brindamos `CargaElectrica.cpp` en el cual se tiene toda la estructura del proyecto. De no tener estos tres archivos, tu proyecto no va a funcionar correctamente en tu computadora de forma local.

### Ejemplo de funcionamiento
A continuación se muestra un ejemplo del funcionamiento esperado de tu práctica.

```


```
