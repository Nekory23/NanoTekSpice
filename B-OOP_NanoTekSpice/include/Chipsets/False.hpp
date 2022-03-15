/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** False
*/

#ifndef FALSE_HPP_
#define FALSE_HPP_

#include "../Interfaces/IComponent.hpp"

namespace nts
{
    class False final : public IComponent {
        public:
            False(std::string const &value);
            ~False() = default;

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

#endif /* !FALSE_HPP_ */
