#include "../type_traits.hpp"
#include <iostream>

void test_is_void()
{
    std::cout << "=============== test_is_void start ================" << std::endl;

    std::cout << "void is "<< tmp::is_void<void>::value << std::endl;
    std::cout << "void* is "<< tmp::is_void<void*>::value << std::endl;

    std::cout << "const void is "<< tmp::is_void<const void>::value << std::endl;
    std::cout << "const void* is "<< tmp::is_void<const void*>::value << std::endl;

    std::cout << "volatile void is "<< tmp::is_void<volatile void>::value << std::endl;
    std::cout << "volatile void* is "<< tmp::is_void<volatile void*>::value << std::endl;

    std::cout << "const volatile void is "<< tmp::is_void<const volatile void>::value << std::endl;
    std::cout << "const volatile void* is "<< tmp::is_void<const volatile void*>::value << std::endl;

    std::cout << "=============== test_is_void end ================" << std::endl;
}
int main()
{
    test_is_void();
}

