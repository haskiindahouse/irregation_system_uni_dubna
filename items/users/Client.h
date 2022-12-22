#pragma once

#include <iostream>
#include <cstring>
#include "../Item.h"


namespace Users
{
class Client : public Item
{
public:
    enum Properties
    {
        Id = 0,
        Name = 1,
        Purchase = 2,
    };

public:
    explicit Client(const std::string& name);
    ~Client();

    std::string name() const;
    void setName(const std::string& name);

private:
    std::string _name;
};

} // Users
