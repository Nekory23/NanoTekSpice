/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** IGates
*/

#ifndef IGATES_HPP_
#define IGATES_HPP_

#include "IComponent.hpp"

namespace nts {
    class IGates {
        public:
            ~IGates() = default;
            virtual nts::Tristate compute() = 0;
            virtual nts::Tristate compute(nts::Tristate a) = 0;
            virtual nts::Tristate compute(nts::Tristate a, nts::Tristate b) = 0;
    
        protected:
        private:
    };
}

#endif /* !IGATES_HPP_ */