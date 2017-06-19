#ifndef CHECKIN_H
#define CHECKIN_H
#include "pasajero.h"
#include <iostream>

using namespace  std;
class CheckIn
{
    public:
        CheckIn();
        virtual ~CheckIn();
        void checkIn();
        void add(Pasajero* nod);
        bool isEmpty();
        Pasajero* head;
        int cant;

    protected:

    private:
};

#endif // CHECKIN_H
