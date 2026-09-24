#ifndef PILA_HPP
#define PILA_HPP

#include "NodoPila.hpp"

class Pila
{
public:
    Pila();
    ~Pila();
    void insertar(int v);
    int extraer();
    int cima();
    void mostrar();
    int getLongitud();

private:
    pnodoPila ultimo; // Apunta a la cima de la pila
    int longitud;
};

#endif