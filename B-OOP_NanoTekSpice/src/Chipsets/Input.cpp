/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Input
*/

#include "Error.hpp"
#include "../../include/Chipsets/Input.hpp"

nts::Input::Input(std::string const &value)
{
    _name = value;
    _pin = UNDEFINED;
}

nts::Tristate nts::Input::compute(std::size_t pin)
{
    (void) pin;
    return _pin;
}

void nts::Input::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    if (pin != 1)
        throw Error(std::cerr, "This pin doesn't exist");
    
}

void nts::Input::dump() const
{
    std::cout << _pin << std::endl;
}

std::string nts::Input::getName() const
{
    return _name;
}