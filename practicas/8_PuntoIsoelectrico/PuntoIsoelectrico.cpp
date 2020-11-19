#include <iostream>
#include <array>
#include <string>

#include "Grupo.h"
#include "Molecula.h"

using namespace std;

Grupo CrearGrupo(int numGrupo);


int main()
{
    string nombreMolecula;
    cout << "Nombre de la molecula: ";
    cin >> nombreMolecula;

    Molecula miMolecula(nombreMolecula);

    int numGrupos;
    do
    {
        cout << "Numero de grupos: ";
        cin >> numGrupos;
    } while (numGrupos <= 0);

    for (int i = 0; i < numGrupos; i++)
        miMolecula.AgregarGrupo(CrearGrupo(i));

    cout << "El punto isoelectrico de " << nombreMolecula << " es = " << miMolecula.CalcularPuntoIsoelectrico() << endl;

    return 0;
}


Grupo CrearGrupo(int i)
{
    string nombreGrupo;
    float pkGrupo;
    int cargaGrupo;
    cout << "Nombre grupo " << i << ": ";
    cin >> nombreGrupo;
    do
    {
        cout << "pK de " << nombreGrupo << ": ";
        cin >> pkGrupo;
    } while (pkGrupo < 0 || pkGrupo > 14);
    cout << "Carga de " << nombreGrupo << " a pH mayor a " << pkGrupo << ": ";
    cin >> cargaGrupo;
    Grupo miGrupo(nombreGrupo, pkGrupo, cargaGrupo);
    return miGrupo;
}
