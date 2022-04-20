#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include "abin.h"
#include "abin_E-S.h"

using namespace std;

/*
-------------------------------------------------------------------------------------------
EJERCICIO 3. Implementa un subprograma que dados un arbol binario y un nodo del mismo, deter
mine la profundidad de este nodo en dicho arbol.
-------------------------------------------------------------------------------------------
*/
template <typename T>
int pNodo(const Abin<T> &A, typename Abin<T>::nodo n)
{
    if (n == A.raizB())
        return 0;
    else
        return 1 + pNodo(A, A.padreB(n));
}



/*PARA USAR ÁRBOLES DE CARACTERES:*/
    typedef char tElto;
    tElto fin = '#';
/*PARA USAR ÁRBOLES DE ENTEROS:*/
//  typedef int tElto;
//  tElto fin = -99;
int main()
{
    Abin<tElto> A;
    //PARA RELLENAR DESDE FICHERO:
        ifstream fA("abin1-char.txt"); // Abrir fichero de entrada.
        rellenarAbin(fA,A); // Rellenar desde fichero.
    //PARA RELLENAR MANUALMENTE:
    //    rellenarAbin(A, fin);

    imprimirAbin(A);
    cout << "Profundidad del hijo izquierdo de la raíz del árbol: " << pNodo(A,A.hijoIzqdoB(A.raizB()))<< endl;

    return 0;
}
