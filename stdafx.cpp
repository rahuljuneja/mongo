// stdafx.cpp : source file that includes just the standard includes

/*    Copyright 2009 10gen Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "stdafx.h"

#if defined( __MSVC__ )
// should probably check VS version here
#elif defined( __GNUC__ )

#if __GNUC__ < 4
#error gcc < 4 not supported
#endif

#else
// unknown compiler
#endif 


namespace mongo {

    const char versionString[] = "1.3.6-pre-";

} // namespace mongo
