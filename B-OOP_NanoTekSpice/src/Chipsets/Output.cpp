/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Output
*/

#include "Error.hpp"
#include "../../include/Chipsets/Output.hpp"

nts::Output::Output(std::string const &value)
{
    _name = value;
    _pin = UNDEFINED;
}

nts::Tristate nts::Output::compute(std::size_t pin)
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

void nts::Output::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    //std::map<std::size_t, nts::IComponent> othermap;

    if (pin != 1)
        throw Error(std::cerr, "This pin doesn't exist");
    //othermap[otherPin] = other;
    //_links.emplace(pin, othermap);
}

void nts::Output::dump() const
{
}

std::string nts::Output::getName() const
{
    return _name;
}