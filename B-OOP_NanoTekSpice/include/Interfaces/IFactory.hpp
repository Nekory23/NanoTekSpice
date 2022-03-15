/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** IFactory
*/

#ifndef IFACTORY_HPP_
#define IFACTORY_HPP_

#include <memory>
#include "IComponent.hpp"

namespace nts  {
    class IFactory {
        public:
            virtual ~IFactory() = default;
    
        protected:
            virtual std::unique_ptr<nts::IComponent> createComponent (std::string &type, std::string &value) const = 0;
        private:
};
}

#endif /* !IFACTORY_HPP_ */
