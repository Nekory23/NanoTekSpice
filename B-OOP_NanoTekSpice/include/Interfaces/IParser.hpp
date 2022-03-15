/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** IParser
*/

#ifndef IPARSER_HPP_
#define IPARSER_HPP_

#include <string>
#include <vector>

namespace nts {
    class IParser {
        public:
            virtual ~IParser() = default;
            virtual void CheckFile(std::string FilePath) = 0;
            virtual void Parse(std::string FilePath) = 0;
            virtual bool CheckEmpty(std::string line) = 0;
            virtual std::vector<std::string> ParseChipset(std::vector<std::string> content, std::size_t pos) = 0;
            virtual std::vector<std::string> ParseLinks(std::vector<std::string> content, std::size_t pos) = 0;
            virtual std::vector<std::string> CleanFile(std::vector<std::string> content) = 0;
            virtual std::string CleanStr(std::string line) = 0;
            virtual void CheckNames(std::vector<std::string> names, std::vector<std::string> namesBis) = 0;
    
        protected:
        private:
    };
}

#endif /* !IPARSER_HPP_ */
