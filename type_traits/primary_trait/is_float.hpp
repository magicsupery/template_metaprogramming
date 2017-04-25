#ifndef _H_TMP_IS_FLOATING_H
#define _H_TMP_IS_FLOATING_H

#include "../integral_constant.hpp"

namespace tmp
{
    template<class T>
    struct is_floating: public false_type{};

    template<class T>
    struct is_floating<const T>: public is_floating<T>{};

    template<class T>
    struct is_floating<volatile T>: public is_floating<T>{};

    template<class T>
    struct is_floating<const volatile T>: public is_floating<T>{};

    template<>
    struct is_floating<float>: public true_type{};

    template<>
    struct is_floating<double>: public true_type{};

    template<>
    struct is_floating<long double>: public true_type{};
}
#endif
