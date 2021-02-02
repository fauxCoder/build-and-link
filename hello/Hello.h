#pragma once

#include <string>

class Hello
{
    std::string m_name;

public:
    Hello(std::string);

    void operator()() const;
};
