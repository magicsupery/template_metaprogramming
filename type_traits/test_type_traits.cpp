#include <boost/type_traits.hpp>

#include <iostream>

int main(){
    bool a = boost::is_void<int>();

    int b = a + 1;
}

