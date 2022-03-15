/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** C4030
*/

#ifndef C4030_HPP_
#define C4030_HPP_

#include <map>
#include "../Interfaces/IComponent.hpp"

namespace nts {
    class C4030 final : public IComponent {
        public:
            C4030(std::string const &value);
            ~C4030() = default;

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

#endif /* !C4030_HPP_ */
