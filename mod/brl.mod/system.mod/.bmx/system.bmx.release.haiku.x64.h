#ifndef BRL_SYSTEM_SYSTEM_BMX_RELEASE_HAIKU_X64_H
#define BRL_SYSTEM_SYSTEM_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include <brl.mod/event.mod/.bmx/event.bmx.release.haiku.x64.h>
#include <brl.mod/keycodes.mod/.bmx/keycodes.bmx.release.haiku.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.release.haiku.x64.h>
#include "driver.bmx.release.haiku.x64.h"
int __bb_brl_system_system();
BBINT brl_system_PollSystem();
BBINT brl_system_WaitSystem();
BBSTRING brl_system_CurrentDate(BBSTRING bbt__format);
BBSTRING brl_system_CurrentTime();
BBINT brl_system_MoveMouse(BBINT bbt_x,BBINT bbt_y);
BBINT brl_system_ShowMouse();
BBINT brl_system_HideMouse();
BBINT brl_system_Notify(BBSTRING bbt_text,BBINT bbt_serious);
BBINT brl_system_Confirm(BBSTRING bbt_text,BBINT bbt_serious);
BBINT brl_system_Proceed(BBSTRING bbt_text,BBINT bbt_serious);
BBSTRING brl_system_RequestFile(BBSTRING bbt_text,BBSTRING bbt_extensions,BBINT bbt_save_flag,BBSTRING bbt_initial_path);
BBSTRING brl_system_RequestDir(BBSTRING bbt_text,BBSTRING bbt_initial_path);
BBINT brl_system_OpenURL(BBSTRING bbt_url);
BBINT brl_system_DesktopWidth();
BBINT brl_system_DesktopHeight();
BBINT brl_system_DesktopDepth();
BBINT brl_system_DesktopHertz();

#endif
