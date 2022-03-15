/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** GateMedium
*/

#ifndef GATEMEDIUM_HPP_
#define GATEMEDIUM_HPP_

#include "../Interfaces/IGates.hpp"

namespace nts {
    class Not : public IGates {
        public :
            Not() = default;
            ~Not() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };
    
    class Yes : public IGates {
        public :
            Yes() = default;
            ~Yes() = default;
            nts::Tristate compute();
            nts::Tristate compute(nts::Tristate a);
            nts::Tristate compute(nts::Tristate a, nts::Tristate b);
    };
}

#endif /* !GATEMEDIUM_HPP_ */
