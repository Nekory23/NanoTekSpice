/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** ICircuit
*/

#ifndef ICIRCUIT_HPP_
#define ICIRCUIT_HPP_

#include <memory>
#include "IComponent.hpp"

namespace nts {
    class ICircuit {
        public:
            ~ICircuit() = default;
            virtual void createCircuit(std::string &value, std::unique_ptr<nts::IComponent> component) = 0;

            virtual nts::Tristate compute(std::size_t pin) = 0;
            virtual void simulate(std::size_t tick) = 0;
            virtual void display() const = 0;
            virtual void dump() const = 0;
        protected:
        private:
    };
}

#endif /* !ICIRCUIT_HPP_ */
