#pragma once

#include <string>

class Help
{
    std::string m_name;

public:
    Help(std::string);

    void operator()() const;
};
