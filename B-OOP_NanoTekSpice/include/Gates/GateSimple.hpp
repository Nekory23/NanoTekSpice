/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** GateSimple
*/

#ifndef GATESIMPLE_HPP_
#define GATESIMPLE_HPP_

#include "../Interfaces/IGates.hpp"

namespace nts {
    class True : public IGates {
        public :
            True() = default;
            ~True() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };

    class False : public IGates {
        public :
            False() = default;
            ~False() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };
}

#endif /* !GATESIMPLE_HPP_ */
