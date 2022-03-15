/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include "./Interfaces/IParser.hpp"

namespace nts {
    class Parser : public IParser {
        public:
            Parser() = default;
            ~Parser() = default;
            void CheckFile(std::string FilePath);
            void Parse(std::string FilePath);
            bool CheckEmpty(std::string line);
            std::vector<std::string> ParseChipset(std::vector<std::string> content, std::size_t pos);
            std::vector<std::string> ParseLinks(std::vector<std::string> content, std::size_t pos);
            std::vector<std::string> CleanFile(std::vector<std::string> content);
            std::string CleanStr(std::string line);
            void CheckNames(std::vector<std::string> names, std::vector<std::string> namesBis);
            std::vector<std::string> _types;
            std::vector<std::string> _names;
            std::vector<std::string> _links1;
            std::vector<std::string> _links2;
            std::vector<std::string> _pin1;
            std::vector<std::string> _pin2;
    
        protected:
        private:
            std::vector<std::string> _type;
    };
}

#endif /* !PARSER_HPP_ */
