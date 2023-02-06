#pragma once
#include <cstddef>

namespace MetaNN
{
    template <typename T>
    struct Identity_
    {
        using type = T;q
    };

    template <bool cur, typename TNext>
    constexpr static bool OrValue = true;

    template <typename TNext>
    constexpr static bool OrValue<false, TNext> = TNext::value;

    template <bool cur, typename TNext>
    constexpr static bool AndValue = true;

}