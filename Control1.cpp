//ejercicio3
/*
#include <string>
#include <iostream>

using namespace std;

void enteroACad(int numero, char cad[]) 
{
    int numeroD = 0;

    int auxiliar = numero;

    while (auxiliar > 0)
    {
        auxiliar = auxiliar / 10;
        numeroD++;

    }

    cad[numeroD] = '\0';
    auxiliar = numero;
    int pos = numeroD - 1;
    int digitos;

    while (pos >= 0)
    {
        digitos = auxiliar % 10;
        auxiliar = auxiliar / 10;
        cad[pos] = digitos + '0';
        pos--;
    }
}


int main()
{
    
    int numero;
    
    cout << "Dame un numero para hacerlo string: ";
    cin >> numero;

    char cadena[20];

    enteroACad(numero, cadena);

    cout << "La cadena que representa el numero es " << cadena << endl;

}
*/


//ejercicio2

/*
#include <string>
#include <iostream>

using namespace std;

int main()
{
    char cad[] = "1123343";
    int numero;
    numero = atoi(cad);
    cout << numero << endl;
    return 0;
}
*/

//ejercicio1

#include <string>
#include <iostream>

using namespace std;

void DivCadena(string palabra, int espacios) {
    for (int i = 0; i < palabra.length(); i++)
    {
        if (i % espacios == 0) 
        {
            cout << endl;
        }
        cout << palabra[i];
    }
}

int main()
{
    int numero1 = 01010101100101;
    string numstr(std::to_string(numero1));
    cout << numstr + "examen" << endl;
    DivCadena("talvez me cambie de carrera", 4);

    return 0;
}