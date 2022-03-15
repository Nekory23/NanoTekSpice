/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** GateMedium
*/

#include "Gates.hpp"

nts::Tristate nts::Not::compute(nts::Tristate a)
{
    if (a == nts::Tristate::TRUE)
        return nts::Tristate::FALSE;
    return nts::Tristate::TRUE;
}

nts::Tristate nts::Yes::compute(nts::Tristate a)
{
    return a;
}