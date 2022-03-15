/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** SimpleGates
*/

#include "Gates.hpp"

nts::Tristate nts::True::compute()
{
    return nts::Tristate::TRUE;
}

nts::Tristate nts::False::compute()
{
    return nts::Tristate::FALSE;
}