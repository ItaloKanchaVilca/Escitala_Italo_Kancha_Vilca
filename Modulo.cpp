#include <iostream>
using namespace std;

void division(int dividendo, int divisor)
{
    int cociente, residuo;

    if (dividendo > 0)
    {
        cociente = dividendo / divisor;
        residuo = dividendo - cociente * divisor;
    }

    else
    {
        cociente = dividendo / divisor;
        residuo = (cociente * divisor) - dividendo;
    }

    cout << "cociente: " << cociente << endl << endl << "residuo: " << residuo << endl;

}


int main()
{

    int dividendo, divisor;

    cout << "dividendo: ";
    cin >> dividendo;
    cout << endl;

    cout << "divisor: ";
    cin >> divisor;
    cout << endl;

    division(dividendo, divisor);

}
