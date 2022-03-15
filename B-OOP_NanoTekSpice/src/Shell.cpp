/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Shell
*/

#include "Shell.hpp"
#include "Nano.hpp"

nts::Shell::Shell()
{
    _end = 0;
    _tick = 0;
    _exec.emplace("loop", &Shell::loop);
    _exec.emplace("display", &Shell::display);
    _exec.emplace("dump", &Shell::dump);
    _exec.emplace("simulate", &Shell::simulate);
    _exec.emplace("exit", &Shell::exit);
}

void nts::Shell::start(nts::Circuit &circuit, std::vector<std::string> &names)
{
    std::string str;
    std::string name;
    bool nameIsOk = false;
    void (Shell::*fp)(nts::Circuit &circuit);

    simulate(circuit);
    display(circuit);
    while (_end == 0) {
        std::cout << "> ";
        if (!std::getline(std::cin, str)) {
            exit(circuit);
            continue;
        }
        str = CleanCommand(str);
        if (str.find('=') != std::string::npos) {
            name = str.substr(0, str.find('='));
            for (std::size_t i = 0; i != names.size(); i++)
                if (name == names[i])
                    nameIsOk = true;
            if (nameIsOk != true)
                std::cerr << "Unknown component name : '" << name << "'" << std::endl;
            nameIsOk = false;
        }
        else if (_exec.find(str) != _exec.end()) {
            fp = _exec[str];
            (this->*fp)(circuit);
        }
        else
            std::cerr << str << ": Unknown command" << std::endl;
    }
}

std::string nts::Shell::CleanCommand(std::string str)
{
    int len = str.length();
    int free = 0;
    bool space = false;

    for (int i = 0; i < len; i++) {
        while (free == 0 && i < len && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if (str[i] == ' ' || str[i] == '\t') {
            if (!space) {
                str[free++] = str[i];
                space = true;
            }
        } else {
            str[free++] = str[i];
            space = false;
        }
    }
    if (str[free - 1] == ' ' || str[free - 1] == '\t')
        str.erase(str.begin() + free - 1, str.end());
    else
        str.erase(str.begin() + free, str.end());
    return (str);
}

void nts::Shell::loop(nts::Circuit &circuit) 
{
    (void) circuit;
}

void nts::Shell::display(nts::Circuit &circuit) 
{
    //(void) circuit;
    circuit.display();
}

void nts::Shell::dump(nts::Circuit &circuit) 
{
    //(void) circuit;
    circuit.dump();
    circuit.display();
}

void nts::Shell::simulate(nts::Circuit &circuit) 
{
    //(void) circuit;
    circuit.simulate(_tick);
}

void nts::Shell::exit(nts::Circuit &circuit) 
{
    (void) circuit;
    _end = 1;
};