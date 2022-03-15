/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** GateAdvanced
*/

#include "Gates.hpp"

nts::Tristate nts::And::compute(nts::Tristate a, nts::Tristate b)
{
    if (a && b)
        return nts::Tristate::TRUE;
    return nts::Tristate::FALSE;
}

nts::Tristate nts::Or::compute(nts::Tristate a, nts::Tristate b)
{
    if (a || b)
        return nts::Tristate::TRUE;
    return nts::Tristate::FALSE;
}

nts::Tristate nts::Nand::compute(nts::Tristate a, nts::Tristate b)
{
    if (a && b)
        return nts::Tristate::FALSE;
    return nts::Tristate::TRUE;
}

nts::Tristate nts::Nor::compute(nts::Tristate a, nts::Tristate b)
{
    if (a || b)
        return nts::Tristate::FALSE;
    return nts::Tristate::TRUE;
}

nts::Tristate nts::Xor::compute(nts::Tristate a, nts::Tristate b)
{
    if ((a && b == nts::Tristate::FALSE) || (a == nts::Tristate::FALSE && b))
        return nts::Tristate::TRUE;
    return nts::Tristate::FALSE;
}

nts::Tristate nts::Xnor::compute(nts::Tristate a, nts::Tristate b)
{
    if (a == b)
        return nts::Tristate::TRUE;
    return nts::Tristate::FALSE;   
}