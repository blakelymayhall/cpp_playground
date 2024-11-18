#ifndef FOO_H
#define FOO_H

class Foo
{
public:
    Foo(int initVal);

    int GetMemberVar();

private:
    int m_int;
};

#endif