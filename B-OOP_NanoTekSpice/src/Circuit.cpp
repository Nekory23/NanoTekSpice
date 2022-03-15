/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Circuit
*/


#include "Circuit.hpp"

void nts::Circuit::createCircuit(std::string &value, std::unique_ptr<nts::IComponent> component)
{
    _circuit[value] = std::move(component);
}

nts::Tristate nts::Circuit::compute(std::size_t pin)
{
    (void) pin;
    return UNDEFINED;
}

void nts::Circuit::simulate(std::size_t tick)
{
    (void ) tick;
}

void nts::Circuit::display() const
{

}

void nts::Circuit::dump() const
{
    
}