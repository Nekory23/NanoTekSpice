/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Output
*/

#ifndef OUTPUT_HPP_
#define OUTPUT_HPP_

#include <map>
#include <memory>
#include "../Interfaces/IComponent.hpp"

namespace nts
{
    class Output final : public IComponent {
        public:
            Output(std::string const &value);
            Output() = default;
            
            Tristate compute(std::size_t pin = 1);
		    void setLink(std::size_t pin, IComponent &other, std::size_t otherPin);
		    void dump() const;
            void simulate(std::size_t tick) {(void) tick;}
    		void display() const {}
            std::string getName() const;

        protected:
        private:
            nts::Tristate _pin;
            //std::map<std::size_t, std::map<std::size_t, nts::IComponent>> _links;
            std::string _name;
    };
}

#endif /* !OUTPUT_HPP_ */
