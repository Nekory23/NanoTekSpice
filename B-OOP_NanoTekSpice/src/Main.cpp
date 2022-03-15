/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Main
*/

#include <iostream>
int start(char **av);

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cerr << "This program takes an argument." << std::endl;
        std::cerr << "./nanotekspice file.nts" << std::endl;
        return 84;
    }
    return start(av);
}
