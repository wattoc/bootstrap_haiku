#ifndef BRL_EVENT_EVENT_BMX_RELEASE_HAIKU_X64_H
#define BRL_EVENT_EVENT_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include <brl.mod/hook.mod/.bmx/hook.bmx.release.haiku.x64.h>
int __bb_brl_event_event();
struct brl_event_TEvent_obj;
extern BBINT brl_event_EmitEventHook;
void _brl_event_TEvent_New(struct brl_event_TEvent_obj* o);
BBSTRING _brl_event_TEvent_ToString(struct brl_event_TEvent_obj* o);
typedef void (*brl_event_TEvent_Emit_m)(struct brl_event_TEvent_obj*);
void _brl_event_TEvent_Emit(struct brl_event_TEvent_obj*);
typedef struct brl_event_TEvent_obj* (*brl_event_TEvent_Create_TTEvent_iTObjectiiiiTObject_f)(BBINT,BBOBJECT,BBINT,BBINT,BBINT,BBINT,BBOBJECT);
struct brl_event_TEvent_obj* brl_event_TEvent_Create_TTEvent_iTObjectiiiiTObject(BBINT,BBOBJECT,BBINT,BBINT,BBINT,BBINT,BBOBJECT);
typedef BBINT (*brl_event_TEvent_AllocUserId_i_f)();
BBINT brl_event_TEvent_AllocUserId_i();
typedef void (*brl_event_TEvent_RegisterId_v_iS_f)(BBINT,BBSTRING);
void brl_event_TEvent_RegisterId_v_iS(BBINT,BBSTRING);
typedef BBSTRING (*brl_event_TEvent_DescriptionForId_S_i_f)(BBINT);
BBSTRING brl_event_TEvent_DescriptionForId_S_i(BBINT);
struct BBClass_brl_event_TEvent {
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
	brl_event_TEvent_Emit_m m_Emit;
	brl_event_TEvent_Create_TTEvent_iTObjectiiiiTObject_f f_Create_TTEvent_iTObjectiiiiTObject;
	brl_event_TEvent_AllocUserId_i_f f_AllocUserId_i;
	brl_event_TEvent_RegisterId_v_iS_f f_RegisterId_v_iS;
	brl_event_TEvent_DescriptionForId_S_i_f f_DescriptionForId_S_i;
};

struct brl_event_TEvent_obj {
	struct BBClass_brl_event_TEvent* clas;
	BBINT _brl_event_tevent_id;
	BBOBJECT _brl_event_tevent_source;
	BBINT _brl_event_tevent_data;
	BBINT _brl_event_tevent_mods;
	BBINT _brl_event_tevent_x;
	BBINT _brl_event_tevent_y;
	BBOBJECT _brl_event_tevent_extra;
};
extern struct BBClass_brl_event_TEvent brl_event_TEvent;
extern BBSTRING brl_event_TEvent__regids;
void brl_event_EmitEvent(struct brl_event_TEvent_obj* bbt_event);
struct brl_event_TEvent_obj* brl_event_CreateEvent(BBINT bbt_id,BBOBJECT bbt_source,BBINT bbt_data,BBINT bbt_mods,BBINT bbt_x,BBINT bbt_y,BBOBJECT bbt_extra);
BBINT brl_event_AllocUserEventId(BBSTRING bbt_description);

#endif
