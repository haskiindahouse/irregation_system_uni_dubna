#pragma once

#include <string>
#include "../Item.h"

namespace UsersData {

class Region : public Item
{
public:
    enum Properties
    {
        Area = 0,
        Name = 1,
        Price = 2,
        Onwer = 3,
    };

public:
    explicit Region(const std::string& name, const std::string& ownerId);
    ~Region() = default;
    void setArea(const double area);
    double area() const;
    std::string name() const;

private:
    double _area;
    std::string _name;
    std::string _ownerId;
};

} // UsersData

