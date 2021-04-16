/*18.7 (Cifrado simple) Cierta información en Internet se puede cifrar con un algoritmo simple conocido como “rot13”, el
cual rota cada carácter 13 posiciones en el alfabeto.Así, 'a' corresponde a 'n', y 'x' corresponde a 'k'.rot13 es un ejemplo
del cifrado de clave simétrica.Con este tipo de cifrado, tanto el que cifra como el que descifra utilizan la misma clave.
C018_Deitel C++.indd 766 5 / 31 / 08 12:08 : 37 AM www.FreeLibros.me
a) Escriba un programa que cifre un mensaje usando rot13.
b) Escriba un mensaje que descifre el mensaje codifi cado usando 13 como la clave.
c) Después de escribir los programas de los incisos(a) y(b), responda brevemente a la siguiente pregunta : si no conociera la clave para el inciso(b), ¿qué tan difícil cree usted que sería quebrantar el código ? ¿Qué pasaría si tuviera
acceso a un poder de cómputo considerable(por ejemplo, supercomputadoras) ? En el ejercicio 18.26 le pediremos
que escriba un programa para lograr esto.*/

/*
#include <iostream>
#include <string>
using namespace std;


string cifrar_rot13(string mensaje) 
{
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    string cifrado;

    for (int i = 0; i < mensaje.length(); i++) 
    {
        int agregar = alfabeto.find(mensaje[i]) + 13;

        if (agregar > 25) 
        {
            agregar = agregar % 26;
        }

        cifrado = cifrado + alfabeto[agregar];
    }
    return cifrado;
}


string descifrar_rot13(string mensaje_c) 
{
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    string descifrado;

    for (int i = 0; i < mensaje_c.length(); i++)
    {
        int agregar = alfabeto.find(mensaje_c[i]) - 13;

        if (agregar < 0) 
        {
            agregar = 26 + agregar;
        }

        descifrado = descifrado + alfabeto[agregar];
    }
    return descifrado;
}

int main() 
{
    string texto;
    cout << "Ingrese el texto: ";
    getline(cin, texto);
    
    cout << "La palabra cifrada es: ";
    string cifrado = cifrar_rot13(texto);

    cout << cifrado << endl;

    cout << "La palabra descifrada es: ";
    string descifrado = descifrar_rot13(cifrado);
    cout << descifrado << endl;

    return 0;
}
*/

/*18.11 Escriba un programa que introduzca por separado un primer nombre y un apellido, y que concatene los dos en un
nuevo objeto string.*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    string apellido;

    cout << "Ingrese nombre: ";
    cin >> nombre;

    cout << "Ingrese apellido: ";
    cin >> apellido;

    cout << "Todo completo: ";
    string nombre_completo(nombre + ' ' + apellido);
    cout << nombre_completo;
}
*/

/*18.12 Escriba un programa para jugar al ahorcado.El programa debe elegir una palabra(que se codifica directamente en el
	programa, o se lee de un archivo de texto) y mostrar lo siguiente :
Adivine la palabra : XXXXXX
Cada X representa una letra.El usuario trata de adivinar las letras en la palabra.Deberá mostrarse la respuesta apropiada(si
o no) después de cada intento de adivinar.Después de cada intento incorrecto, muestre el diagrama con otra parte del cuerpo
incluida.Después de siete intentos incorrectos, el usuario deberá colgarse.La pantalla debe tener la siguiente apariencia :

Después de cada intento de adivinar, muestre todos los intentos que hizo el usuario.Si el usuario adivina la palabra correctamente, el programa debe mostrar lo siguiente :
Felicidades!!!Adivino mi palabra.Desea jugar otra vez ? si / no*/

/*
#include <iostream>
#include <string>

using namespace std;

string palabra_original;
string palabra_mostrar;

int vidas;
int intentos;

void mostrar_persona();
void mostrar();
void ingresar(char x);
void iniciar();

int main() 
{
    iniciar();
    mostrar();

    while (vidas > 0 && palabra_mostrar != palabra_original)
    {
        char x;
        cout << "Inserte una letra:";
        cin >> x;
        ingresar(x);
        mostrar();
    }

    if (vidas > 0) 
    {
        cout << endl << "-------GANASTE-------" << endl << endl;
        cout << "Numero de intentos: " << intentos << endl << endl;
    }

    else 
    {
        cout << "PERDISTE, la palabra secreta era: " << palabra_original << endl << endl;
        cout << "Numero de intentos: " << intentos << endl << endl;
    }
}

void mostrar_persona() 
{
    if (vidas <= 6) 
    {
        cout << " O " << endl;

        if (vidas <= 5) 
        {
            cout << "/";

            if (vidas <= 4) 
            {
                cout << "|";

                if (vidas <= 3) 
                {
                    cout << "\\" << endl;

                    if (vidas <= 2) 
                    {
                        cout << " | " << endl;

                        if (vidas <= 1) 
                        {
                            cout << "/ ";

                            if (vidas <= 0)
                            {
                                cout << "\\" << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}

void mostrar() 
{
    mostrar_persona();
    cout << endl << "Tus vidas disponibles son: " << vidas << endl;
    cout << "Intente descubrir la palabra: "<< palabra_mostrar << endl;
}

void iniciar() 
{
    vidas = 7;
    intentos = -1;
    palabra_original = "abstracta";

    for (int i = 0; i < palabra_original.length(); i++) 
    {
        if (palabra_original[i] >= 'A' && palabra_original[i] <= 'Z') 
        {
            palabra_original[i] += 32;
        }
    }

    for (int i = 0; i < palabra_original.length(); i++) 
    {
        if (palabra_original[i] >= 'a' && palabra_original[i] <= 'z') 
        {
            palabra_mostrar += 'X';
        }
        else 
        {
            palabra_mostrar += palabra_original[i];
        }
    }
}

void ingresar(char x) 
{
    bool perderVidas = true;

    for (int i = 0; i < palabra_original.length(); i++) 
    {
        if (x == palabra_original[i]) 
        {
            perderVidas = false;
            palabra_mostrar[i] = x;
            intentos++;
        }
    }

    if (perderVidas) 
    {
        vidas--;
        intentos++;
    }
}
*/

/*18.19 Escriba un programa que inserte los caracteres "******" en la mitad exacta de un objeto string. 

*/

/*
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string palabra;
    string asteriscos = "*********";

    cout << "Ingrese la palabra: ";
    cin >> palabra;

    palabra.insert(palabra.size() / 2, asteriscos);
    cout << "Palabra con asteriscos: ";
    cout << palabra << endl;

    return 0;
}
*/

/*18.21 Escriba un programa que introduzca una línea de texto, reemplace todos los signos de puntuación con espacios y utilice
la función strtok de la biblioteca de cadenas estilo C para dividir el objeto string en palabras individuales(tokens).*/

/*18.22 Escriba un programa que introduzca una línea de texto y la imprima al revés.Use iteradores en su solución.
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cadena1;
    cout << "Ingrese texto: ";
    getline(cin, cadena1);

    string::reverse_iterator iterador1 = cadena1.rbegin();

    cout << "Texto invertido: ";
   
    while (iterador1 != cadena1.rend()) 
    {
        cout << *iterador1;
        ++iterador1;
    }
    cout << endl;

    return 0;
}
*/

/*18.27 Escriba una versión de la rutina de ordenamiento por selección(fi gura 8.28) que ordene objetos string.Use la función
swap en su solución.*/

/*
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void ordenamientoSeleccion(string[], const int, bool (*)(int, int));
bool ascendente(int, int);
bool descendente(int, int);

int main() 
{
    const int tamanioArreglo = 10;
    int orden;    
    int contador; 

    string arr[tamanioArreglo] = { "gatos\n","sagasti\n","alas\n","oh\n","luz\n","tetero\n","lavadora\n","estasbien\n","arbol\n","multifacetico\n" };
    
    cout << "Escriba la OPCION 1 para el orden ascendente y escriba la OPCION 2 para el orden descendente: ";
    cin >> orden;

    cout << endl << "Elementos de datos en el orden original" << endl << endl;

    for (contador = 0; contador < tamanioArreglo; contador++)
    {
        cout << " " << arr[contador];
    }

    if (orden == 1) 
    {
        ordenamientoSeleccion(arr, tamanioArreglo, ascendente);
        cout << endl << "Elementos de datos en orden ascendente" << endl<<endl;
    } 

    else 
    {
        ordenamientoSeleccion(arr, tamanioArreglo, descendente);
        cout << endl << "Elementos de datos en orden descendente" << endl<<endl;
    }

    for (contador = 0; contador < tamanioArreglo; contador++)
    {
        cout << setw(18) << arr[contador];
    }

    cout << endl;

    return 0;
}

void ordenamientoSeleccion(string trabajo[], const int tamanio, bool (*compara)(int, int))
{
    int menorOmayor;
    for (int i = 0; i < tamanio - 1; i++) 
    {
        menorOmayor = i;

        for (int index = i + 1; index < tamanio; index++)
        {
            if (!(*compara)(trabajo[menorOmayor].size(), trabajo[index].size()))
            {
                menorOmayor = index;
            }
        }

        trabajo[menorOmayor].swap(trabajo[i]);
    }
}

bool ascendente(int a, int b) { return a < b; }
bool descendente(int a, int b) { return a > b; }
*/