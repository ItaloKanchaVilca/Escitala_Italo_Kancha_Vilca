#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Persona {

private:

    int filas = 3;
    int columnas = 6;

public:
    string cifrado(string mensaje) 
    {
        string MensajeAuxiliar;

        for (int i = 0; i < (filas * columnas) - mensaje.size(); i++) 
        {
            mensaje += "_";
        }

        for (int i = 0; i < columnas; i++) 
        {
            for (int j = 0, cont = i; j < filas; j++, cont += columnas) 
            {
                MensajeAuxiliar = MensajeAuxiliar + mensaje[cont];
            }
        }

        cout << "MENSAJE CIFRADO: " << endl << endl;

        return MensajeAuxiliar;
    }

    string descifrado(string mensaje) 
    {
        string MensajeAuxiliar;

        for (int i = 0; i < filas; i++) 
        {
            for (int j = 0, cont = i; j < columnas; j++, cont += filas)
            {
                MensajeAuxiliar = MensajeAuxiliar + mensaje[cont];
            }
        }
        cout << "MENSAJE DESCIFRADO: " << endl << endl;

        return MensajeAuxiliar;
    }
};

int main() {
    string MensajeOriginal;

    Persona emisor;
    Persona receptor;

    cout << "INGRESA EL MENSAJE SECRETO:" << endl;
    cin >> MensajeOriginal;

    string x = emisor.cifrado(MensajeOriginal);

    cout << x << endl << endl;
    cout << receptor.descifrado(x);

    return 0;
}