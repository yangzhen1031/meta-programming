#pragma once
#include <cstddef>

namespace MetaNN
{
    template <typename T>
    struct Identity_
    {
        using type = T;
    };

    template <bool cur, typename TNext>
    constexpr static bool OrValue = true;

    template <typename TNext>
    constexpr static bool OrValue<false, TNext> = TNext::value;

    

}