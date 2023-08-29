// -----------------------------------------------------------------------------------
// FMX.H - Pre-compiled header file for FMX Framework
//
// $Rev: 111713 $
//
// Copyright(c) 1995-2013 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#ifndef FMX_H
#define FMX_H

#if defined(_WIN32) && !defined(_WIN64)
#pragma link "GdiPlus.lib"
#pragma link "D3D9.lib"
#pragma link "shell32.lib"
#endif

#if defined(_WIN32)
#pragma comment(lib, "shcore")
#endif

#define INC_FMX

// Core (minimal) Delphi RTL headers
//
#include <System.hpp>
#include <System.Types.hpp>
#if defined(_WIN32)
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#endif
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

// Core FMX headers
//
#include <FMX.Types.hpp>
#include <FMX.Types3D.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Forms3D.hpp>
#include <FMX.Dialogs.hpp>
#include <FMX.Objects3D.hpp>
#include <FMX.Edit.hpp>
#include <FMX.ExtCtrls.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Header.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.ListView.hpp>
#include <FMX.Memo.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TreeView.hpp>

#endif  // FMX_H

