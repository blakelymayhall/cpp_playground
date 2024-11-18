#include "../include/Bar.h"

Bar::Bar(std::string initString) 
    : m_string (initString)
{
    
}

std::string Bar::GetMemberString()
{
    return m_string;
}