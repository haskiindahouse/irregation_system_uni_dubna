#include "Region.h"

namespace UsersData {
    Region::Region(const std::string &name, const std::string &ownerId)
    : Item()
    {
        _name = name;
        _ownerId = ownerId;
    }

    void Region::setArea(const double area) {
        _area = area;
    }

    double Region::area() const {
        return _area;
    }

    std::string Region::name() const {
        return _name;
    }
} // UsersData