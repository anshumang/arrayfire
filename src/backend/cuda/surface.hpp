/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#if defined (WITH_GRAPHICS)

#include <Array.hpp>
#include <graphics_common.hpp>

namespace cuda
{
    template<typename T>
    void copy_surface(const Array<T> &P, fg::Surface* surface);
}

#endif

