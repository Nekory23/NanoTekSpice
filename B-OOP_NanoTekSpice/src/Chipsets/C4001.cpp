/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** C4001
*/

#include "Error.hpp"
#include "Chipsets.hpp"

nts::C4001::C4001(std::string const &value)
{
    _pins.emplace(1, UNDEFINED);
    _pins.emplace(2, UNDEFINED);
    _pins.emplace(3, UNDEFINED);
    _pins.emplace(4, UNDEFINED);
    _pins.emplace(5, UNDEFINED);
    _pins.emplace(6, UNDEFINED);
    _pins.emplace(7, UNDEFINED);
    _pins.emplace(8, UNDEFINED);
    _pins.emplace(9, UNDEFINED);
    _pins.emplace(10, UNDEFINED);
    _pins.emplace(11, UNDEFINED);
    _pins.emplace(12, UNDEFINED);
    _pins.emplace(13, UNDEFINED);
    _pins.emplace(14, UNDEFINED);
    _name = value;
}

nts::Tristate nts::C4001::compute(std::size_t pin)
{
    (void) pin;
    //if (pin == 0)
    //    return nts::Tristate::UNDEFINED;
    //Nor nor(_pins[1], _pins[2]);
    //Nor nor1(_pins[5], _pins[6]);
    //Nor nor2(_pins[8], _pins[9]);
    //Nor nor3(_pins[12], _pins[13]);
    //switch (pin)
    //{
    //case 3:
    //    return _pins[3] = nor.compute();
    //case 4:
    //    return _pins[4] = nor1.compute();
    //case 10:
    //    return _pins[10] = nor2.compute();
    //case 11:
    //    return _pins[11] = nor3.compute();
    //default:
    //    return UNDEFINED;
    //}
    return UNDEFINED;
}

void nts::C4001::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    //std::map<std::size_t, nts::IComponent> othermap;

    if (pin > 14 || pin < 1)
        throw Error(std::cerr, "This pin doesn't exist");
    //othermap[otherPin] = other;
    //_links.emplace(pin, othermap);
}

void nts::C4001::dump() const
{
}

std::string nts::C4001::getName() const
{
    return _name;
}