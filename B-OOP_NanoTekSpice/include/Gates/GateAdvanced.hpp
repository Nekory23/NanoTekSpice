/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** GateAdvanced
*/

#ifndef GATEADVANCED_HPP_
#define GATEADVANCED_HPP_

#include "../Interfaces/IGates.hpp"

namespace nts {
    class And : public IGates {
        public :
            And() = default;
            ~And() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };

    class Or : public IGates {
        public :
            Or() = default;
            ~Or() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };

    class Nand : public IGates {
        public :
            Nand() = default;
            ~Nand() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };

    class Nor : public IGates {
        public :
            Nor() = default;
            ~Nor() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };
    
    class Xor : public IGates {
        public :
            Xor() = default;
            ~Xor() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };
    
    class Xnor : public IGates {
        public :
            Xnor() = default;
            ~Xnor() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };
}

#endif /* !GATEADVANCED_HPP_ */
