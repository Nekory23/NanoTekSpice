/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Error
*/

#ifndef ERROR_HPP_
#define ERROR_HPP_

#include <string>
#include <exception>
#include <iostream>

class Error : public std::exception {
    public:
        Error(std::ostream &os, const std::string &str) throw();
        virtual ~Error() throw();
        const char *what() const throw();

    private:
        std::string _msg;
        std::ostream &_os;
};

#endif /* !ERROR_HPP_ */
