#include <iostream>
#include <vector>
#include <iomanip>

#include "Almacen.h"

using namespace std;

void CrearAlmacenes(vector<Almacen>& misAlmacenes, int numAlmacenes);
void AgregarArticulo(vector<Articulo>& misArticulos, vector<Almacen>& misAlmacenes);
void ElegirArticulo(vector<Articulo>& misArticulos, vector<Almacen>& misAlmacenes);
void AgregarArticuloAAlmacenes(Articulo* miArticulo, vector<Almacen>& misAlmacenes);


int main()
{
    int numAlmacenes;
    cout << "Num Almacenes: ";
    cin >> numAlmacenes;
    vector<Almacen> todosAlmacenes;
    CrearAlmacenes(todosAlmacenes, numAlmacenes);

   int opcion;
    vector<Articulo> todosArticulos;
    do {
        cout << "Opcion (1 para nuevo articulo, 2 para articulo existente, 0 para salir): ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            AgregarArticulo(todosArticulos, todosAlmacenes);
            break;
        case 2:
            ElegirArticulo(todosArticulos, todosAlmacenes);
            break;
        default:
            break;
        }
    } while (opcion);

    cout << "Inventario: " << endl;
    for (int i = 0; i < numAlmacenes; i++)
        cout << todosAlmacenes[i].ObtenerInventario() << endl;
    
    return 0;
}

void AgregarArticulo(vector<Articulo>& misArticulos, vector<Almacen>& misAlmacenes)
{
    Articulo nuevoArticulo;
    Articulo* nuevoArtPtr = nullptr;
    cout << "Nombre articulo: ";
    cin >> nuevoArticulo.nombre;
    cout << "Fabricante: ";
    cin >> nuevoArticulo.fabricante;
    cout << "Precio: ";
    cin >> nuevoArticulo.precio;
    cout << "Peso: ";
    cin >> nuevoArticulo.peso;
    cout << "Dimension X: ";
    cin >> nuevoArticulo.dimX;
    cout << "Dimension Y: ";
    cin >> nuevoArticulo.dimY;
    cout << "Dimension Z: ";
    cin >> nuevoArticulo.dimZ;
    misArticulos.push_back(nuevoArticulo);
    nuevoArtPtr = &misArticulos[misArticulos.size()-1];
    AgregarArticuloAAlmacenes(nuevoArtPtr, misAlmacenes);
}

void ElegirArticulo(vector<Articulo>& misArticulos, vector<Almacen>& misAlmacenes)
{
    Articulo* articuloPtr= nullptr;
    int numArticulos = misArticulos.size();
    cout << "Escribe el ID del articulo que quieres agregar de la siguiente lista: " << endl;
    cout << "ID\tNombre" << endl;
    for (int i = 0; i < numArticulos; i++)
    {
        cout << setfill('0') << setw(int(numArticulos/10) + 1) << i;
        cout << "\t" << misArticulos[i].nombre << endl;
    }
    int idArticulo;
    do
    {
        cout << "ID articulo: ";
        cin >> idArticulo;
    } while (idArticulo < 0 || idArticulo > numArticulos);
    articuloPtr = &misArticulos[idArticulo];
    AgregarArticuloAAlmacenes(articuloPtr, misAlmacenes);
}

void AgregarArticuloAAlmacenes(Articulo* miArticulo, vector<Almacen>& misAlmacenes)
{
    int decision;
    int cantidad;
    for (int i = 0, n = misAlmacenes.size(); i < n; i++)
    {
        cout << "Agregar " << miArticulo->nombre << " a " << misAlmacenes[i].ObtenerNombre() << " (1 si, 0 no): ";
        cin >> decision;
        if (decision)
        {
            cout << "Cantidad del producto (puede ser negativo): ";
            cin >> cantidad;
            misAlmacenes[i].AgregarArticulo(miArticulo, cantidad);
        }
    }
}

void CrearAlmacenes(vector<Almacen>& misAlmacenes, int numAlmacenes)
{
    string nombre;
    for (int i = 0; i < numAlmacenes; i++)
    {
        cout << "Nombre almacen " << i << ": ";
        cin >> nombre;
        Almacen miAlmacen(nombre);
        misAlmacenes.push_back(miAlmacen);
    }
}