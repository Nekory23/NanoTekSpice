/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** True
*/

#include "Chipsets.hpp"

nts::True::True(std::string const &value)
{
    _name = value;
    _pin = TRUE;
}

nts::Tristate nts::True::compute(std::size_t pin)
{
    (void) pin;
    return TRUE;
}

void nts::True::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    (void) pin;
    (void) other;
    (void) otherPin;
}

void nts::True::dump() const
{
}

std::string nts::True::getName() const
{
    return _name;
}