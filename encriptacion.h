#pragma once
#include <iostream>
#include <string>

using namespace std;

class encriptacion {

private:

    int filas = 3;
    int columnas = 6;

public:

    string cifrado(string mensaje)
    {
        string MensajeAuxiliar;

        for (int i = 0; i < columnas; i++)
        {
            for (int j = i; j < size(mensaje); j += columnas)
            {
                MensajeAuxiliar += mensaje[j];
            }
        }

        /*
        * int x = (filas * columnas) - size(mensaje);
        for (int i=0;i<x;i++)
        {
            auxiliar += mensaje[(' ')];
        }
        */

        return MensajeAuxiliar;
    }

    string decifrado(string mensaje)
    {
        string auxiliar;

        for (int i = 0; i < filas; i++)
        {
            for (int j = i; j < size(mensaje); j += filas)
            {
                auxiliar += mensaje[j];
            }
        }
        return auxiliar;
    }
};
