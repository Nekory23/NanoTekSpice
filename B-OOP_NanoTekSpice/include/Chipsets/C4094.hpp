/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** C4094
*/

#ifndef C4094_HPP_
#define C4094_HPP_

#include <map>
#include "../Interfaces/IComponent.hpp"

namespace nts {
    class C4094 final : public IComponent {
        public:
            C4094(std::string const &value);
            ~C4094() = default;

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

#endif /* !C4094_HPP_ */
