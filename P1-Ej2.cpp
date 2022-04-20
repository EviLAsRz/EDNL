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
EJERCICIO 2. Implementa un subprograma que calcule la altura de un árbol binario.
-------------------------------------------------------------------------------------------
*/
template <typename T>
int altura(const Abin<T> &A)
{
    return altura_rec(A.raizB(), A);
}

template <typename T>
int altura_rec(typename Abin<T>::nodo n, const Abin<T> &A)
{
    if (n == Abin<T>::NODO_NULO)
        return -1;
    else
        return 1 + max(altura_rec(A.hijoIzqdoB(n), A), altura_rec(A.hijoDrchoB(n), A));
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
    cout << "Altura del árbol: " << altura(A)<< endl;

    return 0;
}
