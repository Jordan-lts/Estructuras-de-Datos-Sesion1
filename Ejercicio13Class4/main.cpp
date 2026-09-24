#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

using namespace std;

int main(int argc, char** argv)
{

    srand(time(NULL));
    Persona* personas[10];
    for (int i = 0; i < 10; i++) {
        personas[i] = new Persona(18 + i);
    }

    cout << "=== LISTA DE 10 PERSONAS CREADAS ===" << endl;
    for (int i = 0; i < 10; i++) {
        personas[i]->mostrar();
    }
    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}