/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Factory
*/


#include "Error.hpp"
#include "Factory.hpp"
#include "Chipsets.hpp"

nts::Factory::Factory()
{
    //_factories["4001"] = &Factory::create4001;
	//_factories["input"] = &Factory::createInput;
	//_factories["output"] = &Factory::createOutput;
	//_factories["4008"] = &Factory::create4008;
	//_factories["4011"] = &Factory::create4011;
	//_factories["4013"] = &Factory::create4013;
	//_factories["4017"] = &Factory::create4017;
	//_factories["4030"] = &Factory::create4030;
	//_factories["4040"] = &Factory::create4040;
	//_factories["4069"] = &Factory::create4069;
	//_factories["4071"] = &Factory::create4071;
	//_factories["4081"] = &Factory::create4081;
	//_factories["4094"] = &Factory::create4094;
	//_factories["4514"] = &Factory::create4514;
}

std::unique_ptr<nts::IComponent> nts::Factory::createComponent(std::string &type, std::string &value) const
{
    auto fact{ _factories.find(type) };

	//std::cout << type << std::endl;
    if (fact != _factories.end())
        return fact->second(*this, value);
    throw Error(std::cerr, " unknown component type : " + type);
}

std::unique_ptr<nts::IComponent> nts::Factory::createInput(std::string const &value) const noexcept
{
    return std::make_unique<nts::Input>(value);
}

std::unique_ptr<nts::IComponent> nts::Factory::createOutput(std::string const &value) const noexcept
{
    return std::make_unique<nts::Output>(value);
}

std::unique_ptr<nts::IComponent> nts::Factory::create4001(std::string const &value) const noexcept
{
    return std::make_unique<nts::C4001>(value);
}

//std::unique_ptr<nts::IComponent> nts::Factory::create4008(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4008>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4011(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4011>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4013(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4013>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4017(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4017>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4030(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4030>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4040(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4040>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4069(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4069>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4071(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4071>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4081(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4081>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4094(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4094>(value);
//}
//
//std::unique_ptr<nts::IComponent> nts::Factory::create4514(std::string const &value) const noexcept
//{
//    return std::make_unique<nts::C4514>(value);
//}
//