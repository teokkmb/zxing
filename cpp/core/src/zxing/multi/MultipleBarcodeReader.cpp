/*
 *  Copyright 2011 ZXing authors All rights reserved.
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

#include <zxing/multi/MultipleBarcodeReader.h>

#include "zxing/BinaryBitmap.h"    // for BinaryBitmap
#include "zxing/DecodeHints.h"     // for DecodeHints, DecodeHints::DEFAULT_HINT
#include "zxing/Result.h"          // for Result
#include "zxing/common/Counted.h"  // for Ref

namespace pping {
namespace multi {

MultipleBarcodeReader::~MultipleBarcodeReader() { }

Fallible<std::vector<Ref<Result>>> MultipleBarcodeReader::decodeMultiple(Ref<BinaryBitmap> image) MB_NOEXCEPT_EXCEPT_BADALLOC {
  return decodeMultiple(image, DecodeHints::DEFAULT_HINT);
}

} // End zxing::multi namespace
} // End zxing namespace
