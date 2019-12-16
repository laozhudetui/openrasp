/*
 * Copyright 2017-2019 Baidu Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "unsigned_integer.h"

namespace openrasp
{
namespace validator
{
namespace vint64
{

std::string UnsignedInteger::check(const int64_t value) const
{
    std::string result;
    if (value <= 0)
    {
        result = "shoule be greater than 0";
    }
    return result;    
}
} // namespace vint64

} // namespace validator

} // namespace openrasp