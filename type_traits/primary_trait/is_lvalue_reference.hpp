#ifndef _H_TMP_IS_LVALUE_REFERENCE_H
#define _H_TMP_IS_LVALUE_REFERENCE_H

#include "../integral_constant.hpp"

namespace tmp
{
    template<class T>
    struct is_lvalue_reference: public false_type {};

    template<class T>
    struct is_lvalue_reference<T&>: public true_type {};
}
#endif
