/*
 * Copyright (C) 2015 The CyanogenMod Project
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

#include <stdlib.h>

/* status_t Parcel::readuInt64 */
extern "C" int _ZNK7android6Parcel10readUint64EPy(uint64_t *pArg);
extern "C" int _ZNK7android6Parcel10readuInt64EPy(uint64_t *pArg) {
    return _ZNK7android6Parcel10readUint64EPy(pArg);
}

/* status_t Parcel::writeString16 */
extern "C" int _ZN7android6Parcel13writeString16EPKDsj();
extern "C" int _ZN7android6Parcel13writeString16EPKtj() {
    return _ZN7android6Parcel13writeString16EPKDsj();
}

extern "C" void RIL_register_socket() {}

extern "C" void RIL_onRequestAck() {}
