// -*- mode:c++; tab-width:2; indent-tabs-mode:nil; c-basic-offset:2 -*-
#pragma once
/*
 *  LuminanceSource.h
 *  zxing
 *
 *  Copyright 2010 ZXing authors All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <zxing/common/Counted.h>  // for Ref, Counted
#include <zxing/common/Error.hpp>

#include <string>

namespace pping {

class LuminanceSource : public Counted {
public:
  LuminanceSource() = default;
  virtual ~LuminanceSource() = default;

  virtual int getWidth() const noexcept = 0;
  virtual int getHeight() const noexcept = 0;

  // Callers take ownership of the returned memory and must call delete [] on it themselves.
  virtual unsigned char* getRow(int y, unsigned char* row) const MB_NOEXCEPT_EXCEPT_BADALLOC = 0;
  virtual unsigned char* getMatrix() const MB_NOEXCEPT_EXCEPT_BADALLOC = 0;

  virtual bool isRotateSupported() const noexcept = 0;
  virtual Ref<LuminanceSource> rotateCounterClockwise() MB_NOEXCEPT_EXCEPT_BADALLOC = 0;

  operator std::string () const MB_NOEXCEPT_EXCEPT_BADALLOC;
};

}

