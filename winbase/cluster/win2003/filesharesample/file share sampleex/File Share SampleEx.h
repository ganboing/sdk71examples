/////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2003 <company name>
//
//  Module Name:
//      File Share SampleEx.h
//
//  Implementation File:
//      File Share SampleEx.cpp
//
//  Description:
//      Global definitions across the DLL.
//
//  Author:
//      <name> (<e-mail name>) Mmmm DD, 2003
//
//  Revision History:
//
//  Notes:
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

/////////////////////////////////////////////////////////////////////////////
// Include Files
/////////////////////////////////////////////////////////////////////////////

#ifndef __AFXWIN_H__
    #error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// Constant Definitions
/////////////////////////////////////////////////////////////////////////////

#define REGPARAM_FILESHARESAMPLE_SHARENAME L"ShareName"
#define REGPARAM_FILESHARESAMPLE_PATH L"Path"
#define REGPARAM_FILESHARESAMPLE_REMARK L"Remark"
#define REGPARAM_FILESHARESAMPLE_MAXUSERS L"MaxUsers"

/////////////////////////////////////////////////////////////////////////////
// Global Function Declarations
/////////////////////////////////////////////////////////////////////////////

void
FormatError(
      CString & rstrErrorInout
    , DWORD     dwErrorIn
    );

/////////////////////////////////////////////////////////////////////////////
