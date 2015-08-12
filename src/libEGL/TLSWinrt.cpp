//
// Copyright (c) 2002-2010 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// TLSWinrt.cpp: Thread local storage implementation for WinRT and WP8.

#include "TLSWinrt.h"

#if defined(WINAPI_FAMILY)
#if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

__declspec( thread ) egl::Current glContext;

void * LocalAlloc(UINT uFlags, size_t size) { return (void*) &glContext; };
void LocalFree(HLOCAL index) {};

#endif
#endif