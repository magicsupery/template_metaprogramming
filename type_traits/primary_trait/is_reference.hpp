#ifndef _H_TMP_IS_REFERENCE_H
#define _H_TMP_IS_REFERENCE_H

#include "../integral_constant.hpp"

#include "is_lvalue_reference.hpp"
#include "is_rvalue_reference.hpp"

namespace tmp
{
    template<class T>
    struct is_reference:
        public integral_const<bool,
                is_lvalue_reference<T>::value || is_rvalue_reference<T>::value> {};


}
#endif
