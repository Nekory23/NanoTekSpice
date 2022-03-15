/*
** EPITECH PROJECT, 2021
** B-OOP_NanoTekSpice
** File description:
** C2716
*/

#ifndef C2716_HPP_
#define C2716_HPP_

#include <map>
#include "../Interfaces/IComponent.hpp"

namespace nts {
    class C2716 final : public IComponent {
        public:
            C2716(std::string const &value);
            ~C2716() = default;

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

#endif /* !C2716_HPP_ */
