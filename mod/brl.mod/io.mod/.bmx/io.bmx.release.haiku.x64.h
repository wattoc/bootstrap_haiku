#ifndef BRL_IO_IO_BMX_RELEASE_HAIKU_X64_H
#define BRL_IO_IO_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include "common.bmx.release.haiku.x64.h"
int __bb_brl_io_io();
struct brl_io_MaxIO_obj;
void _brl_io_MaxIO_New(struct brl_io_MaxIO_obj* o);
typedef void (*brl_io_MaxIO_Init_v_f)();
void brl_io_MaxIO_Init_v();
typedef BBINT (*brl_io_MaxIO_DeInit_i_f)();
BBINT brl_io_MaxIO_DeInit_i();
typedef BBINT (*brl_io_MaxIO_Mount_i_SSi_f)(BBSTRING,BBSTRING,BBINT);
BBINT brl_io_MaxIO_Mount_i_SSi(BBSTRING,BBSTRING,BBINT);
typedef BBINT (*brl_io_MaxIO_MountIncbin_i_SSi_f)(BBSTRING,BBSTRING,BBINT);
BBINT brl_io_MaxIO_MountIncbin_i_SSi(BBSTRING,BBSTRING,BBINT);
typedef BBSTRING (*brl_io_MaxIO_GetBaseDir_S_f)();
BBSTRING brl_io_MaxIO_GetBaseDir_S();
typedef BBSTRING (*brl_io_MaxIO_GetPrefDir_S_SS_f)(BBSTRING,BBSTRING);
BBSTRING brl_io_MaxIO_GetPrefDir_S_SS(BBSTRING,BBSTRING);
typedef BBINT (*brl_io_MaxIO_SetWriteDir_i_S_f)(BBSTRING);
BBINT brl_io_MaxIO_SetWriteDir_i_S(BBSTRING);
typedef BBINT (*brl_io_MaxIO_Stat_i_SvTSMaxIO_Stat_f)(BBSTRING,struct brl_io_common_SMaxIO_Stat*);
BBINT brl_io_MaxIO_Stat_i_SvTSMaxIO_Stat(BBSTRING,struct brl_io_common_SMaxIO_Stat*);
typedef BBINT (*brl_io_MaxIO_DeletePath_i_S_f)(BBSTRING);
BBINT brl_io_MaxIO_DeletePath_i_S(BBSTRING);
typedef BBBYTE* (*brl_io_MaxIO_OpenWrite_pb_S_f)(BBSTRING);
BBBYTE* brl_io_MaxIO_OpenWrite_pb_S(BBSTRING);
typedef BBINT (*brl_io_MaxIO_Close_i_pb_f)(BBBYTE*);
BBINT brl_io_MaxIO_Close_i_pb(BBBYTE*);
typedef BBINT (*brl_io_MaxIO_MkDir_i_S_f)(BBSTRING);
BBINT brl_io_MaxIO_MkDir_i_S(BBSTRING);
typedef BBSTRING (*brl_io_MaxIO_GetLastError_S_f)();
BBSTRING brl_io_MaxIO_GetLastError_S();
struct BBClass_brl_io_MaxIO {
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
	brl_io_MaxIO_Init_v_f f_Init_v;
	brl_io_MaxIO_DeInit_i_f f_DeInit_i;
	brl_io_MaxIO_Mount_i_SSi_f f_Mount_i_SSi;
	brl_io_MaxIO_MountIncbin_i_SSi_f f_MountIncbin_i_SSi;
	brl_io_MaxIO_GetBaseDir_S_f f_GetBaseDir_S;
	brl_io_MaxIO_GetPrefDir_S_SS_f f_GetPrefDir_S_SS;
	brl_io_MaxIO_SetWriteDir_i_S_f f_SetWriteDir_i_S;
	brl_io_MaxIO_Stat_i_SvTSMaxIO_Stat_f f_Stat_i_SvTSMaxIO_Stat;
	brl_io_MaxIO_DeletePath_i_S_f f_DeletePath_i_S;
	brl_io_MaxIO_OpenWrite_pb_S_f f_OpenWrite_pb_S;
	brl_io_MaxIO_Close_i_pb_f f_Close_i_pb;
	brl_io_MaxIO_MkDir_i_S_f f_MkDir_i_S;
	brl_io_MaxIO_GetLastError_S_f f_GetLastError_S;
};

struct brl_io_MaxIO_obj {
	struct BBClass_brl_io_MaxIO* clas;
};
extern struct BBClass_brl_io_MaxIO brl_io_MaxIO;
extern BBINT brl_io_MaxIO_ioInitialized;

#endif
