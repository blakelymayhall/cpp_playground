#include "../include/Foo.h"

Foo::Foo(int initVal) 
    : m_int (initVal)
{
    
}

int Foo::GetMemberVar()
{
    return m_int;
}