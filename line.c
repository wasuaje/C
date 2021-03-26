#include <stdio.h>


int funcion();

int main() 
{
    for(int i == 0; i < 10; i++)
        cout << "Llamada " << i+1 << ": " << funcion() << endl;
    return 0;
}

int funcion() 
{
    static int x=10;

    x++;
    return x;
}
