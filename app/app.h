#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
    class animal
    {
    public:
        virtual std::string species() const = 0;
        virtual unsigned int legs() const = 0;
        virtual ~animal() = default;
    };

    class insect : public animal
    {
        unsigned int legs() const override { return 6; }
    };
    class cockroach : public insect
    {
        std::string species() const override { return "cockroach"; }
    };

    class spider : public animal
    {
        unsigned int legs() const override { return 8; }
    };
    class tarantula : public spider
    {
        std::string species() const override { return "tarantula"; }
    };

    class bird : public animal
    {
        unsigned int legs() const override { return 2; }
    };
    class sparrow : public bird {
        std::string species() const override { return "sparrow"; }
    };

    class leg_counter
    {
    private:
        unsigned legSum = 0;
    public:
        std::string add_animal(animal* a);
        unsigned legs() const;
    };

    std::unique_ptr<animal> animal_factory(int animalID);
}