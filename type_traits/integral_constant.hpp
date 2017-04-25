#ifndef _H_TMP_INTEGRAL_CONSTANT_H
#define _H_TMP_INTEGRAL_CONSTANT_H


namespace tmp
{
    template<class T, T val>
    struct integral_const
    {
        typedef T value_type;
        typedef integral_const<T, val> type;
        static const T value = val;


        constexpr operator value_type() const
        {
            return val;
        }
    };

    template<class T, T val>
    const T integral_const<T, val>::value;

    template<bool val>
    struct integral_const<bool, val>
    {
        typedef bool value_type;
        typedef integral_const<bool ,val> type;
        static const bool value = val;

        constexpr operator value_type() const
        {
            return value;
        }
    };

    template<bool val>
    const bool integral_const<bool ,val>::value;

    typedef integral_const<bool, true> true_type;
    typedef integral_const<bool, false> false_type;

}
#endif
