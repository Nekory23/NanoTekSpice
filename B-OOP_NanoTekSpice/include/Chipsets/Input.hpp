/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Input
*/

#ifndef INPUT_HPP_
#define INPUT_HPP_

#include <map>
#include <memory>
#include "../Interfaces/IComponent.hpp"

namespace nts
{
    class Input final : public IComponent {
        public:
            Input(std::string const &value);
            Input() = default;
            
            Tristate compute(std::size_t pin = 1);
		    void setLink(std::size_t pin, IComponent &other, std::size_t otherPin);
		    void dump() const;
            void simulate(std::size_t tick) {(void) tick;}
    		void display() const {}
            std::string getName() const;

        protected:
        private:
            Tristate _pin;
            std::map<nts::Tristate, nts::Tristate> _links;
            std::string _name;
    };
}

#endif /* !INPUT_HPP_ */
