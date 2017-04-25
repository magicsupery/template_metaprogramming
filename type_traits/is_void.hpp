#ifndef _H_TMP_IS_VOID_H
#define _H_TMP_IS_VOID_H


#include "integral_constant.hpp"

namespace tmp
{
    template<class T>
    struct is_void : public false_type
    {
    };

    template<>
    struct is_void<void> : public true_type
    {
    };

    template<>
    struct is_void<const void> : public true_type
    {
    };

    template<>
    struct is_void<volatile  void> : public true_type
    {
    };

    template<>
    struct is_void<const volatile void> : public true_type
    {
    };
}
#endif
