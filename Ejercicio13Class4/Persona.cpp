#include "Persona.hpp"
#include <cstdlib>
#include <cstdio>

using namespace std;

void Persona::generarDNI()
{
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int numero = rand() % 90000000 + 10000000;
    char letra = letras[numero % 23];
    snprintf(dni, sizeof(dni), "%08d%c", numero, letra);
}

Persona::Persona(int edad)
{
    this->edad = edad;
    this->genero = rand() % 2; 
    generarDNI();        
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
    return edad;
}

bool Persona::esMujer()
{
    return genero;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

void Persona::mostrar()
{
    cout << "DNI: " << dni 
         << " | Genero: " << (genero ? "Mujer " : "Hombre") 
         << " | Edad: " << edad << endl;
}