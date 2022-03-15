/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** C4017
*/

#include "Chipsets.hpp"

nts::C4017::C4017(std::string const &value)
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

nts::Tristate nts::C4017::compute(std::size_t pin)
{
    (void)pin;
    return UNDEFINED;
}

void nts::C4017::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    (void)pin;
    (void)other;
    (void)otherPin;
}

void nts::C4017::dump() const
{
}

std::string nts::C4017::getName() const
{
    return _name;
}