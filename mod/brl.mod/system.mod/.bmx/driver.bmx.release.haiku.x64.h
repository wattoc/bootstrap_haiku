#ifndef BRL_SYSTEM_DRIVER_BMX_RELEASE_HAIKU_X64_H
#define BRL_SYSTEM_DRIVER_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
int _bb_brl_system_driver();
struct brl_system_driver_TSystemDriver_obj;
struct brl_system_driver_IWrappedSystemDriver_obj;
extern const struct BBInterface brl_system_driver_IWrappedSystemDriver_ifc;
void _brl_system_driver_TSystemDriver_New(struct brl_system_driver_TSystemDriver_obj* o);
BBSTRING _brl_system_driver_TSystemDriver_ToString(struct brl_system_driver_TSystemDriver_obj* o);
typedef BBSTRING (*brl_system_driver_TSystemDriver_Name_m)(struct brl_system_driver_TSystemDriver_obj*);
BBSTRING _brl_system_driver_TSystemDriver_Name(struct brl_system_driver_TSystemDriver_obj*);
typedef void (*brl_system_driver_TSystemDriver_Poll_m)(struct brl_system_driver_TSystemDriver_obj*);
void _brl_system_driver_TSystemDriver_Poll(struct brl_system_driver_TSystemDriver_obj*);
typedef void (*brl_system_driver_TSystemDriver_Wait_m)(struct brl_system_driver_TSystemDriver_obj*);
void _brl_system_driver_TSystemDriver_Wait(struct brl_system_driver_TSystemDriver_obj*);
typedef void (*brl_system_driver_TSystemDriver_MoveMouse_ii_m)(struct brl_system_driver_TSystemDriver_obj*,BBINT,BBINT);
void _brl_system_driver_TSystemDriver_MoveMouse_ii(struct brl_system_driver_TSystemDriver_obj*,BBINT,BBINT);
typedef void (*brl_system_driver_TSystemDriver_SetMouseVisible_i_m)(struct brl_system_driver_TSystemDriver_obj*,BBINT);
void _brl_system_driver_TSystemDriver_SetMouseVisible_i(struct brl_system_driver_TSystemDriver_obj*,BBINT);
typedef void (*brl_system_driver_TSystemDriver_Notify_Si_m)(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBINT);
void _brl_system_driver_TSystemDriver_Notify_Si(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBINT);
typedef BBINT (*brl_system_driver_TSystemDriver_Confirm_Si_m)(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBINT);
BBINT _brl_system_driver_TSystemDriver_Confirm_Si(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBINT);
typedef BBINT (*brl_system_driver_TSystemDriver_Proceed_Si_m)(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBINT);
BBINT _brl_system_driver_TSystemDriver_Proceed_Si(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBINT);
typedef BBSTRING (*brl_system_driver_TSystemDriver_RequestFile_SSiS_m)(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBSTRING,BBINT,BBSTRING);
BBSTRING _brl_system_driver_TSystemDriver_RequestFile_SSiS(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBSTRING,BBINT,BBSTRING);
typedef BBSTRING (*brl_system_driver_TSystemDriver_RequestDir_SS_m)(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBSTRING);
BBSTRING _brl_system_driver_TSystemDriver_RequestDir_SS(struct brl_system_driver_TSystemDriver_obj*,BBSTRING,BBSTRING);
typedef BBINT (*brl_system_driver_TSystemDriver_OpenURL_S_m)(struct brl_system_driver_TSystemDriver_obj*,BBSTRING);
BBINT _brl_system_driver_TSystemDriver_OpenURL_S(struct brl_system_driver_TSystemDriver_obj*,BBSTRING);
typedef BBINT (*brl_system_driver_TSystemDriver_DesktopWidth_m)(struct brl_system_driver_TSystemDriver_obj*);
BBINT _brl_system_driver_TSystemDriver_DesktopWidth(struct brl_system_driver_TSystemDriver_obj*);
typedef BBINT (*brl_system_driver_TSystemDriver_DesktopHeight_m)(struct brl_system_driver_TSystemDriver_obj*);
BBINT _brl_system_driver_TSystemDriver_DesktopHeight(struct brl_system_driver_TSystemDriver_obj*);
typedef BBINT (*brl_system_driver_TSystemDriver_DesktopDepth_m)(struct brl_system_driver_TSystemDriver_obj*);
BBINT _brl_system_driver_TSystemDriver_DesktopDepth(struct brl_system_driver_TSystemDriver_obj*);
typedef BBINT (*brl_system_driver_TSystemDriver_DesktopHertz_m)(struct brl_system_driver_TSystemDriver_obj*);
BBINT _brl_system_driver_TSystemDriver_DesktopHertz(struct brl_system_driver_TSystemDriver_obj*);
struct BBClass_brl_system_driver_TSystemDriver {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_system_driver_TSystemDriver_Name_m m_Name;
	brl_system_driver_TSystemDriver_Poll_m m_Poll;
	brl_system_driver_TSystemDriver_Wait_m m_Wait;
	brl_system_driver_TSystemDriver_MoveMouse_ii_m m_MoveMouse_ii;
	brl_system_driver_TSystemDriver_SetMouseVisible_i_m m_SetMouseVisible_i;
	brl_system_driver_TSystemDriver_Notify_Si_m m_Notify_Si;
	brl_system_driver_TSystemDriver_Confirm_Si_m m_Confirm_Si;
	brl_system_driver_TSystemDriver_Proceed_Si_m m_Proceed_Si;
	brl_system_driver_TSystemDriver_RequestFile_SSiS_m m_RequestFile_SSiS;
	brl_system_driver_TSystemDriver_RequestDir_SS_m m_RequestDir_SS;
	brl_system_driver_TSystemDriver_OpenURL_S_m m_OpenURL_S;
	brl_system_driver_TSystemDriver_DesktopWidth_m m_DesktopWidth;
	brl_system_driver_TSystemDriver_DesktopHeight_m m_DesktopHeight;
	brl_system_driver_TSystemDriver_DesktopDepth_m m_DesktopDepth;
	brl_system_driver_TSystemDriver_DesktopHertz_m m_DesktopHertz;
};

struct brl_system_driver_TSystemDriver_obj {
	struct BBClass_brl_system_driver_TSystemDriver* clas;
};
extern struct BBClass_brl_system_driver_TSystemDriver brl_system_driver_TSystemDriver;
void _brl_system_driver_IWrappedSystemDriver_New(struct brl_system_driver_IWrappedSystemDriver_obj* o);
typedef void (*brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver_m)(struct brl_system_driver_IWrappedSystemDriver_obj*,struct brl_system_driver_TSystemDriver_obj*);
void _brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver(struct brl_system_driver_IWrappedSystemDriver_obj*,struct brl_system_driver_TSystemDriver_obj*);
typedef struct brl_system_driver_TSystemDriver_obj* (*brl_system_driver_IWrappedSystemDriver_GetDriver_m)(struct brl_system_driver_IWrappedSystemDriver_obj*);
struct brl_system_driver_TSystemDriver_obj* _brl_system_driver_IWrappedSystemDriver_GetDriver(struct brl_system_driver_IWrappedSystemDriver_obj*);
struct BBClass_brl_system_driver_IWrappedSystemDriver {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver_m m_SetDriver_TTSystemDriver;
	brl_system_driver_IWrappedSystemDriver_GetDriver_m m_GetDriver;
};

struct brl_system_driver_IWrappedSystemDriver_methods {
	brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver_m m_SetDriver_TTSystemDriver;
	brl_system_driver_IWrappedSystemDriver_GetDriver_m m_GetDriver;
};

struct brl_system_driver_IWrappedSystemDriver_obj {
	struct BBClass_brl_system_driver_IWrappedSystemDriver* clas;
};
extern struct BBClass_brl_system_driver_IWrappedSystemDriver brl_system_driver_IWrappedSystemDriver;
void brl_system_driver_InitSystemDriver(struct brl_system_driver_TSystemDriver_obj* bbt_driver);
struct brl_system_driver_TSystemDriver_obj* brl_system_driver_SystemDriver();

#endif
