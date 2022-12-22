#pragma once
#include "string"
#include "../helpers/EntitiesHelper.h"
#include "../helpers/SerializeHelper.h"

class Item
{
public:
    explicit Item()
    {
        _id = EntitiesHelper::generateUuid();
    }

    [[nodiscard]] std::string id() const
    {
        return _id;
    }

    template<class T>
    static void save(const std::string& fileName, const T& obj)
    {
        std::ofstream out(fileName, std::ios::binary);
        out << bits(obj);
    }

    template<class T>
    static void load(const std::string& fileName, T& obj)
    {
        std::ifstream in(fileName);
        in >> bits(obj);
    }

protected:
    std::string _id;
};
