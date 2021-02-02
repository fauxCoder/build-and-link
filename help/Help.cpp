#include <help/Help.h>

#include <iostream>

Help::Help(std::string name)
: m_name(name)
{
}

void Help::operator()() const
{
    std::cout << "Hello, " << m_name << "." << std::endl;
}
