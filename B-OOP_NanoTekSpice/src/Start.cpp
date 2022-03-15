/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Start
*/

#include "Error.hpp"
#include "Parser.hpp"
#include "Factory.hpp"
#include "Circuit.hpp"
#include "Shell.hpp"
#include "Chipsets.hpp"
#include "Nano.hpp"

int start(char **av)
{
    nts::Parser parser;
    nts::Factory factory;
    nts::Circuit circuit;
    nts::Shell shell;
    int ret = SUCCESS;

    try {
        parser.Parse(av[1]);
        for (std::size_t i = 0; parser._types.size() != i; i++)
            circuit.createCircuit(parser._names[i], factory.createComponent(parser._types[i], parser._names[i]));
        for (std::size_t i = 0; parser._links1.size() != i; i++) {
            auto temp{ circuit._circuit.find(parser._links1[i])};
            auto temp2{ circuit._circuit.find(parser._links2[i])};
            std::cout << temp->first << " " << " to " << temp2->first << std::endl;
            std::cout << "linking" << std::endl;
            temp->second->setLink(stoi(parser._pin1[i]), *(temp2->second.get()), stoi(parser._pin2[i]));
        }
        /*std::cout << "\ndisplay the links" << std::endl;
        for (std::size_t i = 0; parser._links1.size() != i; i++) {
            auto temp3{ circuit._circuit.find(parser._links1[i])};
            std::cout << std::endl;
        }
        */
        //shell.start(circuit, parser._names);
    }
    catch (const Error &e) {
        std::cout << "Error(s): " << e.what() << std::endl;
        ret = ERROR;
    }
    catch (...) {}
    return ret;
}