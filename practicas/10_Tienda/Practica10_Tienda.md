# Práctica 10: Tienda

## Descripción

Gracias a nuestro trabajo con _don Neilt_, nos recomendó con una de sus clientas, la _Lic. Juanip_ quien ahora nos está buscanod para ver si le podemos ayudar para diseñar un progrmaa para controlar el inventario de sus tiendas.

De nueva cuenta, ella ya contaba con un poco de código que nos ofreción y te lo hemos colocado en la carpeta [Tienda](Tienda) y contiene tres archivos:

### `Almacen.h`
Este archivo `.h` contiene la declaración de la clase `Almacen`, la cual contiene dos atributos privados:
* `string nombre` que corresponde al nombre de la bodega (ingresado por el usuario).
* `vector<ArticuloAlmacenado> articulos` es un vector que guardará todos los artículos almacenados en esa bodega.
Cuenta también con su constructor:
* `Almacen(string nom) : nombre(nom) { }` que incializa el almacen con el nombre pasado como argumento al constructor.
De igual forma tiene la delaración de tres métodos públicos:
* `void AgregarArticulo(Articulo* artPtr, int cantidad)` que modifica la cantidad del artículo pasado con el apuntador, o si no existe en `articulos` lo agrega y añade su cantidad.
* `void ModificarInventarioArticulo(int ID, int cantidad)` que modifica la cantidad del artículo con el índice `ID` en el vector `articulos`.
* `int ObtenerIDArticulo(Articulo* artPtr) const` que es un método constante que nos regresará el índice del artículo almacenado en el vector `articulos`, si no lo encuenta regresa `-1`.
* `string ObtenerInventario()` regresa un `string` con la descripción del inventario del almacén, donde indica los artículos contenidos en ella con la frase `<nombreArticulo> <cantidad>` donde `<nombreArticulo>` es el nombre (`string`) del artículo i-ésimo almacenado, y `<cantidad>` es la cantidad almacenada.
* `string ObtenerNombre()` que regresa el nombre del almacen.

### `Almacen.cpp`
Este archivo deberá contener las implementaciones de los métodos de la clase `Almacen` declaradas en el archivo `Almacen.h`.

### `Tienda.cpp`
Este código contiene la estructura principal del programa. En él ya se cuenta con una parte del código implementado. En particular cuenta con la siguiente estructura:
* Crea un vector de almacen.
* Pide al usuario que ingrese la información de cada almacen y la agrega al vector.
* Crea un vector para todos los artículos a ingresar.
* Pregunta al usuario si quiere ingresar un nuevo artículo, o si desea utilizar uno ya existente. Si quiere agregar uno nuevo solicita la información. Si pide uno existente le despliega la lista de artículos existentes y le pie seleccionar uno.
* Cuando ya se tiene el nuevo artículo, le pide al usuario que indique en qué almacenes lo quiere agregar y cuántas piezas.
* Imprime el inventario de cada almacen.

## Implementación
En esta práctica tendrás que llevar a cabo la implementación de todos los métodos de la clase `Almacen` en el archivo `Almacen.cpp`.

#### NOTA A CONSIDERAR
Para que tu práctica funcione de manera correcta, **únicamente** ocuparás los tres archivos que te hemos proporcionado: `Tienda.cpp`, `Almacen.h` y `Almacen.cpp`. Estos tres archivos tendrán que encontrarse en tu carpeta para que todo funcione de la forma correcta.
