#ifndef _H_TMP_IS_RVALUE_REFERENCE_H
#define _H_TMP_IS_RVALUE_REFERENCE_H

#include "../integral_constant.hpp"

namespace tmp
{
    template<class T>
    struct is_rvalue_reference: public false_type {};

    template<class T>
    struct is_rvalue_reference<T &&>: public true_type {};
}
#endif
