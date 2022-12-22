#pragma once

#include "map"
#include "string"
#include "../items/users/Client.h"
#include "../helpers/SerializeHelper.h"

namespace ConfigNames
{
    const std::string Clients("Clients.bin");
}

class Project
{
public:
    Project()
    {
        setupClients();
    }
    ~Project()
    {
    }

public:

    void setupClients()
    {
//        std::ifstream in(ConfigNames::Clients);
//
//        std::map< std::string, class Users::Client > m;
//
//        in >> bits(clients);
    }

    void saveClient()
    {
        std::ofstream out(ConfigNames::Clients, std::ios::binary);
        out << bits(_clients);
    }

    void addClient(const Users::Client& client)
    {
        _clients.insert({client.id(), client});
    }

    void removeClient(const std::string& clientId)
    {
        _clients.erase(clientId);
    }

    std::map<std::string, Users::Client> clients()
    {
        return _clients;
    }

private:
    std::map<std::string, Users::Client> _clients;
};


