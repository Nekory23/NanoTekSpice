/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Factory
*/

#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include <map>
#include <functional>
#include "./Interfaces/IFactory.hpp"

namespace nts {
	class Factory : public IFactory{
	    public:
	        Factory();
	        ~Factory() = default;
	        std::unique_ptr<nts::IComponent> createComponent(std::string &type, std::string &value) const;
	
	    protected:
	    private:
	        std::unique_ptr<nts::IComponent> create4001(std::string const &value) const noexcept;
			std::unique_ptr<nts::IComponent> createInput(std::string const &value) const noexcept;
			std::unique_ptr<nts::IComponent> createOutput(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4008(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4011(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4013(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4017(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4030(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4040(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4069(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4071(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4081(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4094(std::string const &value) const noexcept;
			//std::unique_ptr<nts::IComponent> create4514(std::string const &value) const noexcept;
			
			using func = std::function<std::unique_ptr<nts::IComponent>(Factory const &, std::string const &)>;
			
			std::map<std::string, func> _factories;
	};
}
#endif /* !FACTORY_HPP_ */
