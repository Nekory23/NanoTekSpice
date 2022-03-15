/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** Clock
*/

#include "Chipsets.hpp"

nts::Clock::Clock(std::string const &value)
{
    _name = value;
    _pin = UNDEFINED;
}

nts::Tristate nts::Clock::compute(std::size_t pin)
{
    (void) pin;
    return UNDEFINED;
}

void nts::Clock::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    (void) pin;
    (void) other;
    (void) otherPin;
}

void nts::Clock::dump() const
{
}

std::string nts::Clock::getName() const
{
    return _name;
}