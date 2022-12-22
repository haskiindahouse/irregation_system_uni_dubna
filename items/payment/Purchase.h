#pragma once


#include <string>
#include <vector>
#include "../Item.h"

namespace Actions
{
class Purchase : public Item
{
public:
    enum class Type
    {
        Irrigation = 0,
        Invalid = -1,
    };

    enum Properties
    {
        ClientId = 1,
        Regions = 2,
        Count = 3
    };

public:
    explicit Purchase(const std::string& clientId, const Purchase::Type& type);
    void addRegion(const std::string& regionId);
    [[nodiscard]] double paymentInfo() const;

private:
    Type _type;
    std::string _clientId;
    std::vector<std::string> _regions;
    double _count;

};
} // Actions


