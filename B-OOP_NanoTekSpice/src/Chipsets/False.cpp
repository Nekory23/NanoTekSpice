/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** False
*/

#include "Chipsets.hpp"

nts::False::False(std::string const &value)
{
    _name = value;
    _pin = FALSE;
}

nts::Tristate nts::False::compute(std::size_t pin)
{
    (void) pin;
    return _pin;
}

void nts::False::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    (void) pin;
    (void) other;
    (void) otherPin;
}

void nts::False::dump() const
{
    std::cout << _pin << std::endl;
}

std::string nts::False::getName() const
{
    return _name;
}