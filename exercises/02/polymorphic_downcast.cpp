#include <iostream>
#include <boost/type_traits.hpp>

template<class T, class S>
inline T polymorphic_downcast(S* s)
{
    return static_cast<T>(s);
}

template<class T, class S>
inline T polymorphic_downcast(S& s)
{
    return static_cast<T>(s);
}

struct A{};

struct B: public A {};
int main()
{
    A * a = new B;
    std::cout << boost::is_same<B*, decltype(polymorphic_downcast<B*>(a))>() << std::endl;

    B b;
    A & a_r = b;

    std::cout << boost::is_same<B&, decltype(polymorphic_downcast<B&>(a_r))>() << std::endl;
}
