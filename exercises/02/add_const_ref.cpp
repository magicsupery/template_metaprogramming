#include <boost/type_traits.hpp>
#include <iostream>


template<class T, bool convert>
struct add_const_ref_imp;

template<class T>
struct add_const_ref_imp<T, true>
{
    typedef T type;
};

template<class T>
struct add_const_ref_imp<T, false>
{
    typedef const T& type;
};

template<class T>
struct add_const_ref: public add_const_ref_imp<T, boost::is_reference<T>::value> {};

int main()
{
    std::cout << boost::is_same<const int & , add_const_ref<int>::type>() << std::endl;
    std::cout << boost::is_same<const int & , add_const_ref<const int>::type>() << std::endl;
    std::cout << boost::is_same<int & , add_const_ref<int&>::type>() << std::endl;
    std::cout << boost::is_same<const int & , add_const_ref<const int&>::type>() << std::endl;
}
