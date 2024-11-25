#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
    std::string leg_counter::add_animal(animal* a)
    {
        legSum += (*a).legs();
        return (*a).species();
    }

    std::unique_ptr<animal> animal_factory(int animalID)
    {
        switch (animalID)
        {
        case 1:
            return std::make_unique<cockroach>();
        case 2:
            return std::make_unique<tarantula>();
        case 3:
            return std::make_unique<sparrow>();
        default:
            return nullptr;
        }
    };

    unsigned leg_counter::legs() const
    {
        return legSum;
    };
}