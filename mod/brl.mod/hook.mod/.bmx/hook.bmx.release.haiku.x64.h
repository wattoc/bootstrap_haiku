#ifndef BRL_HOOK_HOOK_BMX_RELEASE_HAIKU_X64_H
#define BRL_HOOK_HOOK_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
int __bb_brl_hook_hook();
struct brl_hook_THook_obj;
void _brl_hook_THook_New(struct brl_hook_THook_obj* o);
struct BBClass_brl_hook_THook {
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
};

struct brl_hook_THook_obj {
	struct BBClass_brl_hook_THook* clas;
	struct brl_hook_THook_obj* _brl_hook_thook_succ;
	BBINT _brl_hook_thook_priority;
	BBOBJECT(* _brl_hook_thook_func)(BBINT,BBOBJECT,BBOBJECT);
	BBOBJECT _brl_hook_thook_context;
};
extern struct BBClass_brl_hook_THook brl_hook_THook;
BBINT brl_hook_AllocHookId();
BBINT brl_hook_AddHook(BBINT bbt_id,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT),BBOBJECT bbt_context,BBINT bbt_priority);
BBOBJECT brl_hook_RunHooks(BBINT bbt_id,BBOBJECT bbt_data);
BBINT brl_hook_RemoveHook(BBINT bbt_id,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT),BBOBJECT bbt_context);

#endif
