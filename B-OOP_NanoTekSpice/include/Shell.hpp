/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Shell
*/

#ifndef SHELL_HPP_
#define SHELL_HPP_

#include <unordered_map>
#include "./Interfaces/IShell.hpp"

namespace nts {
    class Shell : public IShell {
        public:
            Shell();
            ~Shell() = default;

            void start(Circuit &circuit, std::vector<std::string> &names);
            std::string CleanCommand(std::string str);
            void loop(nts::Circuit &circuit);
            void display(nts::Circuit &circuit);
            void dump(nts::Circuit &circuit);
            void simulate(nts::Circuit &circuit);
            void exit(nts::Circuit &circuit);
        protected:
        private:
            using func = void (Shell::*)(nts::Circuit &circuit);

            std::unordered_map<std::string, func> _exec;
            std::size_t _end;
            std::size_t _tick;
    };
}

#endif /* !SHELL_HPP_ */
