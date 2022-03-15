/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** Clock
*/

#ifndef CLOCK_HPP_
#define CLOCK_HPP_

#include "../Interfaces/IComponent.hpp"

namespace nts
{
    class Clock final : public IComponent {
        public:
            Clock(std::string const &value);
            ~Clock() = default;

            Tristate compute(std::size_t pin = 1);
		    void setLink(std::size_t pin, IComponent &other, std::size_t otherPin);
		    void dump() const;
            void simulate(std::size_t tick) {(void) tick;}
    		void display() const {}
            std::string getName() const;

        protected:
        private:
            nts::Tristate _pin;
            std::string _name;
    };
}

#endif /* !CLOCK_HPP_ */
