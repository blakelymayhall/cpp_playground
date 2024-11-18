#ifndef BAR_H
#define BAR_H

#include <string>

class Bar
{
public:
    Bar(std::string initString);

    std::string GetMemberString();

protected:
    std::string m_string;
};

#endif