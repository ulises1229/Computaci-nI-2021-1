# Práctica 10: Tienda

## Descripción

Gracias a nuestro trabajo con _don Neilt_, nos recomendó con una de sus clientas, la _Lic. Juanip_ quien ahora nos está buscando para ver si le podemos ayudar a diseñar un programa para controlar el inventario de sus tiendas.

De nueva cuenta, ella ya contaba con un poco de código que nos ofreción y te lo hemos colocado en la carpeta [Tienda](Tienda) y contiene tres archivos:

### `Almacen.h`
Este archivo `.h` contiene la declaración de la clase `Almacen`.

En particular podrás observar que este archivo cuenta con dos estructuras de datos:
* `Articulo` que luce de la siguiente forma:
```
struct Articulo
{
	string nombre = "";
	string fabricante = "";
	float precio = 0;
};
```
que va a hacer referencia a los artículos que se van a almacenar. Estos artículos tendrán entonces tres propiedades: `nombre` con una variable `string`, así como un `fabricante` y un `precio`, este último como un `float`. Esto indica que cada nueva variable del tipo `Articulo` que se cree en el código, tendrá estas tres propiedades, inicialmente con los valores indicados en la declaración (considera que es buena práctica asignar los valores de estas propiedades a cada nueva variable posteriormente a ser creada).

* `ArticuloAlmacenado` es la segunda estructura de datos que se va a ocupar, esta tendrá la intención de guardar el apuntador al artículo almacenado, así como, en una misma variable, guardar la cantidad almacenada. La forma de esta estructura luce así:
```
struct ArticuloAlmacenado
{
	Articulo* articulo;
	int cantidad;
};
```
donde se puede apreciar que la propiedad `articulo` es el apuntador a la dirección en memoria del artículo que se quiere almacenar, y la cantidad del artículo es una variable del tipo `int` que llevará la cuenta del número neto de artículos de ese tipo en el almacén.

Esta clase contiene dos atributos privados:
* `string nombre` que corresponde al nombre del almacén (ingresado por el usuario).
* `vector<ArticuloAlmacenado> articulos` es el vector de variables del tipo `ArticuloAlmacenado` que guardará todos los artículos almacenados en ese almacén, cada uno con su correspondiente cantidad.

Cuenta también con el constructor para incializar sin parámetros:
* `Almacen() : nombre("") {}`

y la sobrecarga del constructor recibiendo como argumento el nombre del almacén:
* `Almacen(string nom) : nombre(nom) { }` que incializa el almacén con el nombre pasado como argumento al constructor.

De igual forma tiene la delaración de los siguientes métodos públicos:
* `bool ModificarInventarioArticulo(Articulo* artPtr, int cantidad)` que permite modificar la cantidad del artículo correspondiente al apuntador `artPtr` almacenados. Este método deberá de regresar un valor del tipo `bool` indicando si la operación se llevó a cabo con éxito, es decir, si la cantidad ingresada en el parámetro `cantidad` puede ser **añadida** o **retirada** del almacén (i.e. si hay `5` productos, no debería de poderse modificar el inventario si se ingresa una `cantidad` de `-10`). Este método será también utilizado para añadir por primera vez un artículo al almacén, comprobando antes de agregarlo, que la cantidad ingresada nuevamente sea un valor válido (i.e. mayor que `0`).
* `string ObtenerInventario() const` regresa un `string` con la descripción del inventario del almacén, donde indica los artículos contenidos en él de la forma
```
Articulo          Cantidad
<NombreArticulo>  <CantidadArticulo>
```
 donde `<nombreArticulo>` es el nombre (`string`) del artículo i-ésimo almacenado, y `<cantidad>` es la cantidad almacenada. **Podrás notar que este método ya está totalmente implementado para tí**. En particular puedes apreciar que se ocupa **const** para denotar que este método no va a modificar las variables de la clase, simplemente va a ocuparlas, esto ayuda a que este proceso sea más eficiente.
* `string ObtenerNombre() const` que regresa el nombre del almacén, el cual nuevamente al ser únicamente un método de consulta, está definido como **const**.

### `Almacen.cpp`
Este archivo deberá contener las implementaciones de los métodos de la clase `Almacen` declaradas en el archivo `Almacen.h`.

### `Tienda.cpp`
Este código contiene la estructura principal del programa. Este código **ya está totalmente implementado** y cuenta con la siguiente estructura:
* Crea un arreglo de almacenes.
* Pide al usuario que ingrese la información de cada almacen y lo asigna al arreglo.
* Crea un arreglo para todos los artículos a ingresar.
* Solicita al usuario ingresar la información de cada artículo y va asignando cada uno al arreglo.
* Pregunta al usuario si quiere modificar el inventario de un artículo (escribiendo `1`), o si desea salir del programa (escribiendo `0`). Si quiere modificar un inventario, le despliega la lista de artículos existentes con su respectivo ID (índice en el arreglo) y le pide seleccionar uno ingresando el ID.
* Cuando el usuario haya elegido el artículo, le preguntará si desea agregarlo (modificar su inventario) para cada uno de los almacenes. Si el usuario indica que sí, le pide la cantidad a ingresar e intenta modificar el inventario de ese artículo en el almacnén seleccionado, al finalizar el proceso le avisa al usuario si la operación se realizó con éxito o fue fallida.
* El proceso anterior se repite hasta que el usuario solcita salir del programa. Antes de cerrar el programa, se imprimen los inventarios finales de cada uno de los almacenes.

Para lograrlo tiene definidas

## Implementación
En esta práctica tendrás que llevar a cabo la implementación del método `ModificarInventarioArticulo` de la clase `Almacen` en el archivo `Almacen.cpp` para que cumpa con su objetivo. También puedes agregar a esta clase tantos métodos como consideres necesarios.

#### NOTA A CONSIDERAR
Para que tu práctica funcione de manera correcta, **únicamente** ocuparás los tres archivos que te hemos proporcionado: `Tienda.cpp`, `Almacen.h` y `Almacen.cpp`. Sin embargo, para la evaluación de tu proyecto se van a ocupar solo `Almacen.h` y `Almacen.cpp`, los cuales deberán de estar en la carpeta de tu repository en GitHub.

### Ejemplo de funcionamiento
A continuación se muestra un ejemplo del funcionamiento para el programa a otorgarle a la _Lic. Juanip_ de tu práctica:

```
$ ./ Tienda

Nombre almacen 0: MX
Nombre almacen 1: USA
Nombre articulo 0: Computadora
Fabricante: Dell
Precio: $15000
Nombre articulo 1: Celular
Fabricante: Huawei
Precio: $10000
Nombre articulo 2: Sudadera
Fabricante: UNAM
Precio: $650

Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 0
Agregar Computadora al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): 5
Operacion exitosa
Agregar Computadora al almacen USA (1 si, 0 no): 0

Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 2
Agregar Sudadera al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): -5
Operacion fallida
Agregar Sudadera al almacen USA (1 si, 0 no): 0

Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 1
Agregar Celular al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): 10
Operacion exitosa
Agregar Celular al almacen USA (1 si, 0 no): 1
Cantidad (puede ser negativo): 6
Operacion exitosa

Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 1
Agregar Celular al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): -20
Operacion fallida
Agregar Celular al almacen USA (1 si, 0 no): 1
Cantidad (puede ser negativo): -2
Operacion exitosa

Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 2
Agregar Sudadera al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): 8
Operacion exitosa
Agregar Sudadera al almacen USA (1 si, 0 no): 0

Accion (1 modificar inventario articulo, 0 para salir): 0

Inventario almacen MX

Articulo        Cantidad
Computadora     5
Celular         10
Sudadera        8

Inventario almacen USA

Articulo        Cantidad
Celular         4
```

En este caso es importante notar los siguientes comportamientos:

```
Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 0
Agregar Computadora al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): 5
Operacion exitosa
```

en esta operación se agregó por primera vez el artículo con ID `0` al almacén _MX_ con una cantidad de `5` artículos, al final se indica al usuario que la operación se realizó con éxito porque fue totalmente válida.

Podemos observar en la segunda operación, que luce de la siguiente forma:
```
Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 2
Agregar Sudadera al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): -5
Operacion fallida
```

que se intenta agregar al almacén el artículo con ID `2` nuevamente por primera vez al almacén _MX_, pero con una cantidad de `-5`, la cual es inválida ya que no se cuenta todavía con un inventario de este artículo en ese almacén, de forma que el programa indica al usuario que la operación fue fallida.

El siguiente conjunto de operaciones tiene como intención agregar y posteriormente manipular el inventario del artículo con ID `1` en los almacenes:

```
Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 1
Agregar Celular al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): 10
Operacion exitosa
Agregar Celular al almacen USA (1 si, 0 no): 1
Cantidad (puede ser negativo): 6
Operacion exitosa

Accion (1 modificar inventario articulo, 0 para salir): 1
Lista de articulos
ID      Articulo
0       Computadora
1       Celular
2       Sudadera

Ingresa el ID del articulo a modificar: 1
Agregar Celular al almacen MX (1 si, 0 no): 1
Cantidad (puede ser negativo): -20
Operacion fallida
Agregar Celular al almacen USA (1 si, 0 no): 1
Cantidad (puede ser negativo): -2
Operacion exitosa
```

donde se puede apreciar que primero se agrega el producto con una cantidad de `10` en el almacén _MX_ y `6` en el de _USA_. Acto seguido se intenta reducir el inventario, en el almacén _MX_ con una cantidad `-20`, la cual resulta ser inválida ya que únicamente se contaba con `10` artículos, por tanto el programa indica que es una operación inválida, mientras que, sobre el almacen de _USA_ únicamente disminuye una cantidad de `-2` artículos, considerando que habían `6` iniciales, esta operación es válida y por tanto se realiza.

Finalmente, al sair del programa se puede ver que se despliegan los inventarios, resultando de la forma siguiente:
```
Accion (1 modificar inventario articulo, 0 para salir): 0

Inventario almacen MX

Articulo        Cantidad
Computadora     5
Celular         10
Sudadera        8

Inventario almacen USA

Articulo        Cantidad
Celular         4
```

donde se puede apreciar, además del correcto despliegue de únicamente los artículos agregados a cada almacén, sus respectivas cantidades finales, particularmente la de _Celular_ en la bodega _USA_ donde se cuenta con `4` artículos, resultado de los `6` iniciales y la modificación de los `-2` aplicada posteriormente; mientras que en _MX_ se quedaron los `10` iniciales, ya que la operación de disminuir su cantidad fue errónea.
