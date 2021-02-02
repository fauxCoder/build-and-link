#include <hello/Hello.h>

#include <iostream>

Hello::Hello(std::string name)
: m_name(name)
{
}

void Hello::operator()() const
{
    std::cout << "Hello, " << m_name << "." << std::endl;
}
