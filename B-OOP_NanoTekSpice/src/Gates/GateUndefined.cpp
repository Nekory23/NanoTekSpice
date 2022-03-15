/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** Gate_undefined
*/

#include "Gates.hpp"

// simple //

nts::Tristate nts::True::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::True::compute(nts::Tristate a, nts::Tristate b)
{
    (void)a;
    (void)b;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::False::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::False::compute(nts::Tristate a, nts::Tristate b)
{
    (void)a;
    (void)b;
    return nts::Tristate::UNDEFINED;
}

// medium //

nts::Tristate nts::Not::compute(nts::Tristate a, nts::Tristate b)
{
    (void)a;
    (void)b;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Not::compute()
{
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Yes::compute(nts::Tristate a, nts::Tristate b)
{
    (void)a;
    (void)b;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Yes::compute()
{
    return nts::Tristate::UNDEFINED;
}

// advanced //

nts::Tristate nts::And::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::And::compute()
{
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Or::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Or::compute()
{
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Nand::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Nand::compute()
{
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Nor::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Nor::compute()
{
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Xor::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Xor::compute()
{
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Xnor::compute(nts::Tristate a)
{
    (void)a;
    return nts::Tristate::UNDEFINED;
}

nts::Tristate nts::Xnor::compute()
{
    return nts::Tristate::UNDEFINED;
}