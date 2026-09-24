#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>

class Persona
{
private:
    bool genero;      
    int edad;         
    char dni[10];     

    void generarDNI();

public:

    Persona(int edad);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
};

#endif