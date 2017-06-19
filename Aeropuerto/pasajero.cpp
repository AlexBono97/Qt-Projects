#include "pasajero.h"

Pasajero::Pasajero()
{

}

Pasajero::~Pasajero()
{
    //dtor
}

Pasajero::Pasajero(string n, int p)
{
    nombre=n;
    pesoE=p;
    next=0;

}

