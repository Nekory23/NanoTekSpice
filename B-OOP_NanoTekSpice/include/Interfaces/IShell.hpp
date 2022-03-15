/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** IShell
*/

#ifndef ISHELL_HPP_
#define ISHELL_HPP_

#include <string>
#include "../Circuit.hpp"

namespace nts {
    class IShell {
        public:
            ~IShell() = default;

            virtual void start(Circuit &circuit, std::vector<std::string> &names) = 0;
            virtual std::string CleanCommand(std::string str) = 0;
            virtual void loop(nts::Circuit &circuit) = 0;
            virtual void display(nts::Circuit &circuit) = 0;
            virtual void dump(nts::Circuit &circuit) = 0;
            virtual void simulate(nts::Circuit &circuit) = 0;
            virtual void exit(nts::Circuit &circuit) = 0;
        protected:
        private:
    };
}

#endif /* !ISHELL_HPP_ */
