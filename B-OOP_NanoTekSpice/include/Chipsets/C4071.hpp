/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** C4071
*/

#ifndef C4071_HPP_
#define C4071_HPP_

#include <map>
#include "../Interfaces/IComponent.hpp"

namespace nts {
    class C4071 final : public IComponent {
        public:
            C4071(std::string const &value);
            ~C4071() = default;

            Tristate compute(std::size_t pin = 1);
		    void setLink(std::size_t pin, IComponent &other, std::size_t otherPin);
		    void dump() const;
            void simulate(std::size_t tick) {(void) tick;}
    		void display() const {}
            std::string getName() const;

        protected:
        private:
            std::map<std::size_t, nts::Tristate> _pins;
            std::string _name;
    };
}

#endif /* !C4071_HPP_ */
