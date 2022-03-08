// AR_168_puzle.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
bool casoDePrueba() {
    const int MAX = 10000;
    int numPiezas, pieza; 
    bool estaPieza[MAX];

    cin >> numPiezas;

    if (numPiezas == 0) {
        return false;
    }
    else {          
        for (int i = 0; i < numPiezas; i++) {
            estaPieza[i] = false;
        }

        for (int j = 0; j < numPiezas - 1; j++) {
            cin >> pieza;
            estaPieza[pieza-1] = true;
        }

        int i = 0;
        while (i < numPiezas && estaPieza[i]) {           
            i++;
        }
        cout << i+1 << endl;
        return true;
    }
}

int main()
{
    while (casoDePrueba()) {

    }
    return 0;

}
