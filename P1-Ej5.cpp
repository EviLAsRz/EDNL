
// El ejercicio 4 sería idéntico a este, exceptuando la sintaxis: no usaríamos el operador -> sino el operador []

/* AÑADIR ESTE CÓDIGO AL TAD "Árbol binario mediante celdas enlazadas" PROPORCIONADO EN LA ASIGNATURA */

/*
* 5. Añade dos nuevas operaciones al TAD árbol binario: una que calcule la profundidad de un
* nodo y otra que calcule la altura de un nodo en un árbol dado.
*/

//Profundidad de un nodo dado
template <typename T>
int Abin<T>::profundidadB(nodo n)const
{
    if (n == raizB())
        return 0;
    else
        return 1 + profundidadB(n->padre);
}

//Altura de un nodo dado
template <typename T>
int Abin<T>::alturaB(nodo n)const
{
    if (n == NODO_NULO)
        return -1;
    else
        return 1 + std::max(alturaB(n->hizq), alturaB(n->hder));

}
