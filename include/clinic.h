#ifndef CLINIC_H
#define CLINIC_H

#include "clientStorage.h"

class Clinic
{
    ClientStorage clients;

public:
    Clinic();
    ClientStorage& getClients();
};

#endif