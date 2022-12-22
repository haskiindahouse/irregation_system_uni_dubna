#include "../../helpers/EntitiesHelper.h"
#include "Purchase.h"


namespace Actions
{
    Purchase::Purchase(const std::string &clientId, const Purchase::Type &type)
    : Item()
    , _count(0)
    {
        _clientId = clientId;
        _type = type;
    }

    void Purchase::addRegion(const std::string &region) {
        _regions.push_back(region);
    }

    double Purchase::paymentInfo() const {
        return _count;
    }
} // Actions