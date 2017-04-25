#include <boost/type_traits.hpp>
#include <iostream>


template<class T, class X, class Y>
struct repalce_type
{
    typedef T type;
};

// pure replace
template<class X, class Y>
struct repalce_type<X, X, Y>
{
    typedef Y type;
};

// add pointer
template<class X, class Y>
struct repalce_type<X*, X, Y>
{
    typedef Y* type;
};

// add reference
template<class X, class Y>
struct repalce_type<X&, X, Y>
{
    typedef Y& type;
};


// add array
template<class T, class X, class Y, int N>
struct repalce_type<T[N], X, Y>
{
    typedef typename repalce_type<T, X, Y>::type type_temp;
    typedef type_temp type[N];
};

// add function
template<class T, class X, class Y, class A1>
struct repalce_type<T (*)(A1), X, Y>
{
    typedef typename repalce_type<T, X, Y>::type r_type;
    typedef typename repalce_type<A1, X, Y>::type a_type;

    typedef r_type (* type) (a_type);
};
int main()
{
    std::cout << boost::is_same<int*, repalce_type<void*, void, int>::type>() <<std::endl;

    std::cout << boost::is_same<long*[10], repalce_type<int const*[10], int const, long>::type>() <<std::endl;

    std::cout << boost::is_same<long& (*) (long&), repalce_type<char& (*) (char&), char, long>::type>() <<std::endl;
}
