#ifndef PASAJERO_H
#define PASAJERO_H
#include <iostream>
#include <QString>

using namespace std;

class Pasajero
{
    public:
        Pasajero();
        Pasajero(string n, int p);
        virtual ~Pasajero();
        string nombre;
        int pesoE;
        Pasajero* next;



    protected:

    private:
};

#endif // PASAJERO_H
