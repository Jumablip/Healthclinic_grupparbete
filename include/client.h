#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>

class Client
{
    std::string clientId;

public:
    Client();
    Client(std::string clientId);
    void setClientId(std::string clientId);
    std::string getClientId();
};

#endif