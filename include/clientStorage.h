#ifndef CLIENT_STORAGE_H
#define CLIENT_STORAGE_H

#include "client.h"
#include <vector>

class ClientStorage
{
    std::vector<Client> clients;

public:
    ClientStorage();
    void addClient(Client client);
    Client& getClient(int index);
    std::vector<Client>& getList();
};

#endif