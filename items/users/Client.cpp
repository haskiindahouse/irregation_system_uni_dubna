#include "../../helpers/EntitiesHelper.h"
#include "Client.h"


namespace Users {
    Client::Client(const std::string& name)
    : Item()
    {
        _name = name;
    }

    Client::~Client()
    {
    }

    std::string Client::name() const
    {
        return _name;
    }

    void Client::setName(const std::string &name)
    {
        _name = name;
    }
} // Users