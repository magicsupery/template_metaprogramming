#include "is_void.hpp"


template<class T>
void func_1(T & val, tmp::true_type)
{
    int a = val + 1;
}


template<class T>
void func_1(T & val, tmp::false_type)
{
    int a = val - 1;
}

template<class T>
void func(T& val)
{
    func_1(val, tmp::is_void<T>());
}

int main()
{
    int a = 1;
    func(a);
}

