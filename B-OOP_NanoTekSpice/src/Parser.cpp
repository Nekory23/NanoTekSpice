/*
** EPITECH PROJECT, 2021
** tekspice
** File description:
** Parser
*/

#include <fstream>
#include <algorithm>
#include "Error.hpp"
#include "Parser.hpp"

void nts::Parser::CheckNames(std::vector<std::string> names, std::vector<std::string> namesBis)
{
    int okName = 0;

    for (std::size_t i = 0; i != names.size(); i++) {
        okName = 0;
        for (std::size_t j = 0; j != _names.size(); j++)
            if (names[i].compare(_names[j]) == 0)
                okName = 1;
        if (okName != 1)
            throw Error(std::cerr, "'" + names[i] + "'Unknown component name");
    }
    for (std::size_t i = 0; i != namesBis.size(); i++) {
        okName = 0;
        for (std::size_t j = 0; j != _names.size(); j++)
            if (namesBis[i].compare(_names[j]) == 0)
                okName = 1;
        if (okName != 1)
            throw Error(std::cerr, "'" + namesBis[i] + "'Unknown component name");
    }
}

std::vector<std::string> nts::Parser::ParseLinks(std::vector<std::string> content, std::size_t pos)
{
    for (std::size_t i = pos; i != content.size(); i++) {
        if (content[i] == ".chipsets:")
            return content;
        if (content[i] == ".links:")
            continue;
        if (content[i].find(' ') != content[i].rfind(' ')) {
            std::cout << content[i] << std::endl;
            std::cout << "find = " << content[i].find(' ') << " and rfind = " << content[i].rfind(' ') << std::endl;
            throw Error(std::cerr, "'" + content[i] + "' invalid syntax");
        }
        _links1.push_back(content[i].substr(0, content[i].find(':')));
        _links2.push_back(content[i].substr(content[i].find(' ') + 1, content[i].rfind(':') - content[i].find(' ') - 1));
        _pin1.push_back(content[i].substr(content[i].find(':') + 1, content[i].find(' ') - content[i].find(':') - 1));
        _pin2.push_back(content[i].substr(content[i].rfind(':') + 1));
    }
    CheckNames(_links1, _links2);
    for (std::size_t k = 0; k != _links1.size(); k++)
        if (_links1[k].compare(_links2[k]) == 0 && _pin1[k].compare(_pin2[k]) == 0)
            throw Error(std::cerr, "linking " + _links1[k] + " to " + _links2[k] + " is impossible");
    return content;
}

std::vector<std::string> nts::Parser::ParseChipset(std::vector<std::string> content, std::size_t pos)
{
    std::string str;
    bool isGood = false;

    _type.assign({"input", "output", "4001", "4011", "4030", "4071", "4081", "4069", "4008", "4013", "4017", "4040", "4094", "4512", "4514", "4801", "2716", "logger", "clock", "true", "false"});
    for (std::size_t i = pos; content[i] != ".links:"; i++) {
        if (content[i] == ".chipsets:")
            continue;
        if (content[i].find(' ') != content[i].rfind(' '))
            throw Error(std::cerr, content[i] + " invalid syntax");
    }
    for (std::size_t i = pos; content[i] != ".links:"; i++) {
        if (content[i] == ".chipsets:")
            continue;
        isGood = false;
        str = content[i].substr(0, content[i].find(' '));
        for (std::size_t j = 0; j != _type.size(); j++)
            if (str == _type[j])
                isGood = true;
        if (isGood == false)
            throw Error(std::cerr, str + " unkown or invalid chipset type");
        _types.push_back(str);
    }
    for (std::size_t i = pos, j = 0; content[i] != ".links:"; i++, j++) {
        if (content[i] == ".chipsets:")
            continue;
        _names.push_back(content[i].substr(content[i].find(' ') + 1));
        for (std::size_t k = 0; k != _names.size(); k++) {
            for (std::size_t u = 0; u != _names.size(); u++) {
                if (k == u)
                    continue;
                if (_names[k].compare(_names[u]) == 0)
                    throw Error(std::cerr, _names[k] + " is not a unique name");
            }
        }
    }
    return content;
}

bool nts::Parser::CheckEmpty(std::string line)
{
    for (int i = 0; line[i] != '\0'; i++)
        if (line[i] != ' ' && line[i] != '\t')
            return true;
    return false;
}

std::vector<std::string> nts::Parser::CleanFile(std::vector<std::string> content)
{
    std::vector<std::string> clean;

    for (std::size_t i = 0; i != content.size(); i++)
        if (content[i].compare(0, 1, "#") != 0)
            if (CheckEmpty(content[i]))
                clean.push_back(content[i]);
    return clean;
}

void nts::Parser::CheckFile(std::string FilePath)
{
    std::string extension;
    std::string line;
    std::vector<std::string> content;
    std::ifstream fd(FilePath);

    if (!fd)
        throw Error(std::cerr, FilePath + " File not found");
    extension = FilePath.substr(FilePath.find_last_of('.') + 1);
    if (extension.compare("nts") != 0)
        throw Error(std::cerr, FilePath + " not valid, file must be a .nts");
}

std::string nts::Parser::CleanStr(std::string line)
{
    int len = line.length();
    int free = 0;
    bool space = false;

    for (int i = 0; i < len; i++) {
        while (free == 0 && i < len && (line[i] == ' ' || line[i] == '\t'))
            i++;
        if (line[i] == ' ' || line[i] == '\t') {
            if (!space) {
                line[free++] = line[i];
                space = true;
            }
        } else {
            line[free++] = line[i];
            space = false;
        }
    }
    if (line[free - 1] == ' ' || line[free - 1] == '\t')
        line.erase(line.begin() + free - 1, line.end());
    else
        line.erase(line.begin() + free, line.end());
    return (line);
}

void nts::Parser::Parse(std::string FilePath)
{
    int checkchip = 0;
    int checklink = 0;
    std::string line;
    std::vector<std::string> content;
    std::ifstream fd(FilePath);
    
    CheckFile(FilePath);
    while (std::getline(fd, line))
        content.push_back(line);
    content = CleanFile(content);
    for (std::size_t i = 0; i != content.size(); i++)
        content[i] = CleanStr(content[i]);
    for (std::size_t i = 0; i != content.size(); i++) {
        if (!(content[i].find(".chipsets:")))
            checkchip++;
        if (!(content[i].find(".links:")))
            checklink++;
    }
    if (checkchip < 1 || checklink < 1)
            throw Error(std::cerr, "This file must contains a .chipsets or .links");
    for (std::size_t i = 0; i != content.size(); i++) {
        if (!(content[i].find(".chipsets:")))
            ParseChipset(content, i + 1);
        if (!(content[i].find(".links:")))
            ParseLinks(content, i + 1);
    }
}