#pragma once
/*
 *  MultiFormatOneDReader.h
 *  ZXing
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

#include <zxing/oned/ZXingOneDReader.h>  // for OneDReader
#include <vector>                        // for vector

#include "zxing/DecodeHints.h"           // for DecodeHints
#include "zxing/common/Counted.h"        // for Ref

namespace pping {
class BitArray;
class Result;
}  // namespace pping

namespace pping {
  namespace oned {
    class MultiFormatOneDReader : public OneDReader {

    private:
      std::vector<Ref<OneDReader> > readers;
    public:
      MultiFormatOneDReader(DecodeHints hints);

      FallibleRef<Result> decodeRow(int rowNumber, Ref<BitArray> row) MB_NOEXCEPT_EXCEPT_BADALLOC;
    };
  }
}
