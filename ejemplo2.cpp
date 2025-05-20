#include <iostream>
using namespace std;

int main()
{
    int n;
    int modulo;
    int primo= 1;

    cout << "Ingrese un numero entero" << endl;
    cin >> n;

    for (int i = n - 1; i >= 2; i--)
    {
        modulo = n % i;
        if (modulo == 0)
        {
            cout << " No es primo " << endl;
            primo = 0;
            break;
        }
       
    }
     if (primo == 1)
        {
            cout << " es primo ";
        
        }
        return 0;
    }