/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Circuit
*/

#ifndef CIRCUIT_HPP_
#define CIRCUIT_HPP_

#include <map>
#include <vector>
#include "./Interfaces/ICircuit.hpp"

namespace nts {
    class Circuit {
        public:
            Circuit() = default;
            ~Circuit() = default;

            void createCircuit(std::string &value, std::unique_ptr<nts::IComponent> component);
            nts::Tristate compute(std::size_t pin);
            void simulate(std::size_t tick);
            void display() const;
            void dump() const;

            std::map<std::string, std::shared_ptr<nts::IComponent>> _circuit;
        protected:
        private:
    };
}

#endif /* !CIRCUIT_HPP_ */
