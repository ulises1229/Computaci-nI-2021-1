#ifndef TIENDA_ALMACEN_H
#define TIENDA_ALMACEN_H

#include <string>
#include <vector>

using namespace std;

struct  Articulo
{
	string nombre = "";
	string fabricante = "";
	float precio = 0;
	float peso = 0;
	float dimX = 0, dimY = 0, dimZ = 0;
};

struct ArticuloAlmacenado
{
	Articulo* articulo = nullptr;
	int cantidad = 0;
};

class Almacen
{
private:
	string nombre;
	vector<ArticuloAlmacenado> articulos;
public: 
	Almacen(string nom) : nombre(nom) { }
	void AgregarArticulo(Articulo* artPtr, int cantidad);
	void ModificarInventarioArticulo(int ID, int cantidad);
	int ObtenerIDArticulo(Articulo* artPtr) const;
	string ObtenerInventario();
	string ObtenerNombre() { return nombre; };
};

#endif // !TIENDA_ALMACEN_H
