/*
** EPITECH PROJECT, 2021
** test_gates
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include "../include/Gates.hpp"

Test(Truegates, all)
{
    nts::True gate;
    cr_assert(gate.compute() == nts::Tristate::TRUE);
}

Test(Falsegates, all)
{
    nts::False gate;
    cr_assert(gate.compute() == nts::Tristate::FALSE);
}

Test(Notgates, Ntrue)
{
    nts::Not gate;
    cr_assert(gate.compute(nts::Tristate::TRUE) == nts::Tristate::FALSE);
}

Test(Notgates, Nfalse)
{
    nts::Not gate;
    cr_assert(gate.compute(nts::Tristate::FALSE) == nts::Tristate::TRUE);
}

Test(Yesgates, Ytrue)
{
    nts::Yes gate;
    cr_assert(gate.compute(nts::Tristate::TRUE) == nts::Tristate::TRUE);
}

Test(Yesgates, Yfalse)
{
    nts::Yes gate;
    cr_assert(gate.compute(nts::Tristate::FALSE) == nts::Tristate::FALSE);
}

Test(Andgates, Atrue)
{
    nts::And gate;
    nts::Tristate a = nts::Tristate::TRUE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, b) == nts::Tristate::TRUE);
}

Test(Andgates, Afalse)
{
    nts::And gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, b) == nts::Tristate::FALSE);
    cr_assert(gate.compute(b, a) == nts::Tristate::FALSE);
    cr_assert(gate.compute(a, a) == nts::Tristate::FALSE);
}

Test(Orgates, Ofalse)
{
    nts::Or gate;
    nts::Tristate a = nts::Tristate::FALSE;

    cr_assert(gate.compute(a, a) == nts::Tristate::FALSE);
}

Test(Orgates, Otrue)
{
    nts::Or gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, b) == nts::Tristate::TRUE);
    cr_assert(gate.compute(b, a) == nts::Tristate::TRUE);
    cr_assert(gate.compute(b, b) == nts::Tristate::TRUE);
}

Test(Nandgates, NAfalse)
{
    nts::Nand gate3;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate3.compute(b, b) == nts::Tristate::FALSE);
}

Test(Nandgates, NAtrue)
{
    nts::Nand gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(b, a) == nts::Tristate::TRUE);
    cr_assert(gate.compute(a, b) == nts::Tristate::TRUE);
    cr_assert(gate.compute(a, a) == nts::Tristate::TRUE);
}

Test(NOgates, NOfalse)
{
    nts::Nor gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(b, b) == nts::Tristate::FALSE);
    cr_assert(gate.compute(b, a) == nts::Tristate::FALSE);
    cr_assert(gate.compute(a, b) == nts::Tristate::FALSE);
}

Test(NOgates, NOtrue)
{
    nts::Nor gate;
    nts::Tristate a = nts::Tristate::FALSE;

    cr_assert(gate.compute(a, a) == nts::Tristate::TRUE);
}

Test(XORgates, XOfalse)
{
    nts::Xor gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, a) == nts::Tristate::FALSE);
    cr_assert(gate.compute(b, b) == nts::Tristate::FALSE);
}

Test(XORgates, XOtrue)
{
    nts::Xor gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, b) == nts::Tristate::TRUE);
    cr_assert(gate.compute(b, a) == nts::Tristate::TRUE);
}


Test(NXORgates, NXOfalse)
{
    nts::Xnor gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, b) == nts::Tristate::FALSE);
    cr_assert(gate.compute(b, a) == nts::Tristate::FALSE);
}

Test(NXORgates, NXOtrue)
{
    nts::Xnor gate;
    nts::Tristate a = nts::Tristate::FALSE;
    nts::Tristate b = nts::Tristate::TRUE;

    cr_assert(gate.compute(a, a) == nts::Tristate::TRUE);
    cr_assert(gate.compute(b, b) == nts::Tristate::TRUE);
}