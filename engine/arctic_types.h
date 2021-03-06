// The MIT License (MIT)
//
// Copyright (c) 2016 Huldra
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#ifndef ENGINE_ARCTIC_TYPES_H_
#define ENGINE_ARCTIC_TYPES_H_

#include <cstdint>

namespace arctic {

/// @addtogroup global_math
/// @{
typedef int8_t Si8;
typedef int16_t Si16;
typedef int32_t Si32;
typedef int64_t Si64;

typedef uint8_t Ui8;
typedef uint16_t Ui16;
typedef uint32_t Ui32;
typedef uint64_t Ui64;

enum Trivalent {
  kTrivalentFalse = 0,
  kTrivalentTrue = 1,
  kTrivalentUnknown = 2
};
/// @}

}  // namespace arctic

#endif  // ENGINE_ARCTIC_TYPES_H_
