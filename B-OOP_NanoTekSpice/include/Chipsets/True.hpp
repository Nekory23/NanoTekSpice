/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** True
*/

#ifndef TRUE_HPP_
#define TRUE_HPP_

#include "../Interfaces/IComponent.hpp"

namespace nts
{
    class True final : public IComponent {
        public:
            True(std::string const &value);
            ~True() = default;

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

#endif /* !TRUE_HPP_ */
