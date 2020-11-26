# Práctica 9: Almacen

## Descripción

Para esta práctica vamos a visitar a _don Neilt_ quien acaba de hacer crecer su negocio y compró un almacén donde busca guardar sus productos en las diferentes bodegas. Para ello nos ha pedido que le diseñemos un sistema que le permita inventariar sus diferentes artículos en las correspondientes bodegas y que al final le informe qué productos fueron agregados a qué bodegas. Para lograrlo ya nos ha pasado una parte del código que un _tecnólogo_ le comenzó a desarrollar, pero que no pudo culminar por otras situaciones.


El código que nos ofreció _don Neilt_ lo hemos colocado en la carpeta [Almacen](Almacen) y contiene tres archivos:

### `Bodega.h`
Este archivo `.h` contiene la declaración de la clase `Bodega`, la cual contiene dos atributos privados:
* `string nombre` que corresponde al nombre de la bodega (ingresado por el usuario).
* `vector<string*> articulos` es un vector que guardará todos los artículos que se vayan agregando al inventario de la bodega. **Notar que es un arreglo de apuntadores a string**, de forma que guarda las direcciones de memoria donde se encuentran los artículos, **no sus strings**.
 Cuenta también con dos constructores (sobrecarga de constructores):
* `Bodega() { nombre = ""; }` que incializa una bodega sin nombre.
* `Bodega(string nom) { nombre = nom; }` que incializa la bodega con el nombre pasado como argumento al constructor.
De igual forma tiene la delaración de tres métodos públicos:
* `string ObtenerNombre()` que regresa el nombre de la bodega.
* `bool AgregarArticulo(string* artPtr)` que tiene como objetivo agregar el artículo indicado a la bodega. Para ello recibe como parámetro el apuntador del artículo que se desea agregar, checa si no existe en los artículos ya guardados, en caso de existir regresa `false`, de forma contrario lo agrega al final del vector de artículos y regresa `true`.
* `string ObtenerInventario()` regresa un `string` con la descripción del inventario de la bodega, donde indica los artículos contenidos en ella con la frase `Articulo <i> es <nombreBodega>` donde `<i>` es el número de artículo y `<nombreArticulo>` es el nombre (`string`) del artículo i-ésimo almacenado en esa bodega.

### `Bodega.cpp`
Este archivo contiene las implementaciones de los métodos de la clase `Bodega` declaradas en el archivo `Bodega.h`.

### `Almacen.cpp`
Este código contiene la estructura principal del programa. En él ya se cuenta con una parte del código implementado. En particular cuenta con la siguiente estructura:
* Crea un arreglo de bodegas.
* Pide al usuario que ingrese la información de cada bodega y la agrega al arreglo.
* Crea un arreglo para todos los artículos a ingresar.
* Pide al usuario que ingrese los datos de cada artículo, una vez ingresados le pide que indique para cada bodega en cuál se va a agregar y lo intenta agregar a la bodega si así lo indica el usuario.
* Imprime el inventario de cada bodega.

Este código cuenta también con tres funciones:

`CrearBodega` que solicitará al usuario la información de la bodega a crear y regresará la instancia de la clase creada. La declaración de esta función luce de la forma `Bodega CrearBodega(int i)`, donde el parámetro _i_ es el número de bodega a llenar. Esta función **ya la había implementado totalmente el tecnólogo**.

`CrearArtículo` funciona de forma similar pero para crear un artículo, en este caso representado por una variable del tipo `string`. Para lograrlo la declaración de la función luce de la siguiente forma `string CrearArticulo(int i)`, siendo el `string` devuelto el artículo creado, también el parámetro _i_ es el número de artículo a crear. Esta función también **ya la dejó totalmente implementada el tecnólogo**.

`AgregarArticuloABodega` es la última función declarada en este código, la cual tiene como propósito intentar agregar un artículo a una bodega. A partir de la declaración que luce como `void AgregarArticuloABodega(string* artPtr, Bodega& bodega)` podemos observar que no se pasa una copia de artículo, sino un **apuntador** a esa instancia del artículo (denotado por el `string*` que indica un apuntador a un `string`). También podemos notar que se pasa por referencia la bodega, no una copia de la misma. La función intenta entonces agregar el apuntador del artículo a la bodega pasada como parámetro e indica al usuario si se agregó con éxito o no el artículo a la bodega. **Esta función está totalmente implementada** y se puede notar que hace uso del método `AgregarArticulo` de la instancia de la clase `Bodega`.

## Implementación
Como podrás haber notado, el tecnólogo hizo una gran parte de la implementación, pero no la llevó a cabo completa (no sería tu práctica). En específico ha dejado notas con los comentarios `// TODO` en las secciones que no logró terminar.

Hemos revisado el código y encontramos que estos comentarios se encuentran en dos partes de la implementación:
* En la clase `Bodega`, en la implementación del método `ObtenerInventario` dejó el comentario en el ciclo que recorre cada artículo en el inventario de la bodega, como podrás notar lo que dejó pendiente es agregar al `string` `inv` el nombre del i-ésimo artículo en la bodega. Tendrás que completar esto _desreferenciando_ la dirección del apuntador del i-ésimo valor del vector `articulos` que tiene como atributo la clase `Bodega` y lo tendrás que agregar ([`append`](http://www.cplusplus.com/reference/string/string/append/) te puede resultar un método útil cuando trabajes con variables del tipo `string`) a la información ya guardada en `inv`.
* En el método _main()_ del archivo `Almacen.cpp` también aparece un `// TODO` en el ciclo donde se crea un nuevo artículo y se agrega a las bodegas indicadas por el usuario. Para lograr esta sección del código tendrás que crear un nuevo artículo, agregarlo a tu arreglos de `misArticulos` y preguntar al usuario para cada bodega si desea agregar el artículo (pidiendo un valor `1` como sí, y un `0` como un no), en caso de que sí lo desee agregar, parece un momento en donde la función `AgregarArticuloABodega` que dejó el tecnológo puede resultar útil, pasándole la dirección de memoria (apuntador) del nuevo artículo agregado al arreglo de artículos y pasando la referencia de la bodega a la que se va a agregar el artículo.

Si así lo consideras, siéntete libre de crear tantas funciones y variables como encuentres necesarias para tu implementación, pero no puedes borrar o modificar nada de la implementación que te hemos otorgado excepto lo marcado como `// TODO`.

#### NOTA A CONSIDERAR
Para que tu práctica funcione de manera correcta, **únicamente** ocuparás los tres archivos que te hemos proporcionado: `Almacen.cpp`, `Bodega.h` y `Bodega.cpp`. Estos tres archivos tendrán que encontrarse en tu carpeta para que todo funcione de la forma correcta.

### Ejemplo de funcionamiento
A continuación se muestra un ejemplo del funcionamiento esperado por _don Neilt_ de tu práctica:

```
$ ./ Almacen

Nombre bodega 0: MX
Nombre bodega 1: USA
Nombre del articulo 0: Computadora
Agregar Computadora a la bodega MX? (1 si, 0 no): 1
Articulo agregado exitosamente.
Agregar Computadora a la bodega USA? (1 si, 0 no): 0
Nombre del articulo 1: Celular
Agregar Celular a la bodega MX? (1 si, 0 no): 1
Articulo agregado exitosamente.
Agregar Celular a la bodega USA? (1 si, 0 no): 1
Articulo agregado exitosamente.
Nombre del articulo 2: iPad
Agregar iPad a la bodega MX? (1 si, 0 no): 0
Agregar iPad a la bodega USA? (1 si, 0 no): 1
Articulo agregado exitosamente.

Inventario bodega MX
Articulo 0 es Computadora
Articulo 1 es Celular

Inventario bodega USA
Articulo 0 es Celular
Articulo 1 es iPad

```

¡Nota que en ejemplo se ha añadido en ambas bodegas (`MX` y `USA`) el mismo artículo `Celular`! Esto lo hemos logrado a través de guardar su dirección de memoria, no una copia del objeto, ¡tal y como _don Neilt_ nos pidió para poder distribuir un mismo artículo en diferentes bodegas!
