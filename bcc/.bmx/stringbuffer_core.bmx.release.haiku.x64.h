#ifndef BCC_STRINGBUFFER_CORE_BMX_RELEASE_HAIKU_X64_H
#define BCC_STRINGBUFFER_CORE_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.release.haiku.x64.h>
#include "stringbuffer_common.bmx.release.haiku.x64.h"
int _bb_bcc_stringbuffer_core();
struct _m_stringbuffer_core_TStringBuffer_obj;
struct _m_stringbuffer_core_TSplitBuffer_obj;
struct _m_stringbuffer_core_TSplitBufferEnum_obj;
void __m_stringbuffer_core_TStringBuffer_New(struct _m_stringbuffer_core_TStringBuffer_obj* o);
void __m_stringbuffer_core_TStringBuffer_New_i(struct _m_stringbuffer_core_TStringBuffer_obj* o,BBINT bbt_initialCapacity);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_New_i_ObjectNew(BBClass * clas,BBINT bbt_initialCapacity);
void __m_stringbuffer_core_TStringBuffer_Delete(struct _m_stringbuffer_core_TStringBuffer_obj* o);
BBSTRING __m_stringbuffer_core_TStringBuffer_ToString(struct _m_stringbuffer_core_TStringBuffer_obj* o);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S_f)(BBSTRING);
struct _m_stringbuffer_core_TStringBuffer_obj* _m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S(BBSTRING);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_Length_m)(struct _m_stringbuffer_core_TStringBuffer_obj*);
BBINT __m_stringbuffer_core_TStringBuffer_Length(struct _m_stringbuffer_core_TStringBuffer_obj*);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_Capacity_m)(struct _m_stringbuffer_core_TStringBuffer_obj*);
BBINT __m_stringbuffer_core_TStringBuffer_Capacity(struct _m_stringbuffer_core_TStringBuffer_obj*);
typedef void (*_m_stringbuffer_core_TStringBuffer_SetLength_i_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
void __m_stringbuffer_core_TStringBuffer_SetLength_i(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Append_S_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Append_S(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_AppendObject_TObject_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBOBJECT);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendObject_TObject(struct _m_stringbuffer_core_TStringBuffer_obj*,BBOBJECT);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_AppendCString_pb_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBBYTE*);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendCString_pb(struct _m_stringbuffer_core_TStringBuffer_obj*,BBBYTE*);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_AppendUTF8String_pb_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBBYTE*);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendUTF8String_pb(struct _m_stringbuffer_core_TStringBuffer_obj*,BBBYTE*);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_AppendShorts_psi_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSHORT*,BBINT);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendShorts_psi(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSHORT*,BBINT);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_AppendChar_i_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_AppendChar_i(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_Find_Si_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING,BBINT);
BBINT __m_stringbuffer_core_TStringBuffer_Find_Si(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING,BBINT);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_FindLast_Si_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING,BBINT);
BBINT __m_stringbuffer_core_TStringBuffer_FindLast_Si(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING,BBINT);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Trim_m)(struct _m_stringbuffer_core_TStringBuffer_obj*);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Trim(struct _m_stringbuffer_core_TStringBuffer_obj*);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Replace_SS_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING,BBSTRING);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Replace_SS(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING,BBSTRING);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_StartsWith_S_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
BBINT __m_stringbuffer_core_TStringBuffer_StartsWith_S(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_EndsWith_S_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
BBINT __m_stringbuffer_core_TStringBuffer_EndsWith_S(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_CharAt_i_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
BBINT __m_stringbuffer_core_TStringBuffer_CharAt_i(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
typedef BBINT (*_m_stringbuffer_core_TStringBuffer_Contains_S_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
BBINT __m_stringbuffer_core_TStringBuffer_Contains_S(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Join_aS_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBARRAY);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Join_aS(struct _m_stringbuffer_core_TStringBuffer_obj*,BBARRAY);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_ToLower_m)(struct _m_stringbuffer_core_TStringBuffer_obj*);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_ToLower(struct _m_stringbuffer_core_TStringBuffer_obj*);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_ToUpper_m)(struct _m_stringbuffer_core_TStringBuffer_obj*);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_ToUpper(struct _m_stringbuffer_core_TStringBuffer_obj*);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Remove_ii_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBINT);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Remove_ii(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBINT);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_RemoveCharAt_i_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_RemoveCharAt_i(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Insert_iS_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBSTRING);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Insert_iS(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBSTRING);
typedef struct _m_stringbuffer_core_TStringBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Reverse_m)(struct _m_stringbuffer_core_TStringBuffer_obj*);
struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_TStringBuffer_Reverse(struct _m_stringbuffer_core_TStringBuffer_obj*);
typedef void (*_m_stringbuffer_core_TStringBuffer_SetCharAt_ii_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBINT);
void __m_stringbuffer_core_TStringBuffer_SetCharAt_ii(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBINT);
typedef BBSTRING (*_m_stringbuffer_core_TStringBuffer_Substring_ii_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBINT);
BBSTRING __m_stringbuffer_core_TStringBuffer_Substring_ii(struct _m_stringbuffer_core_TStringBuffer_obj*,BBINT,BBINT);
typedef struct _m_stringbuffer_core_TSplitBuffer_obj* (*_m_stringbuffer_core_TStringBuffer_Split_S_m)(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
struct _m_stringbuffer_core_TSplitBuffer_obj* __m_stringbuffer_core_TStringBuffer_Split_S(struct _m_stringbuffer_core_TStringBuffer_obj*,BBSTRING);
struct BBClass__m_stringbuffer_core_TStringBuffer {
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
	_m_stringbuffer_core_TStringBuffer_Create_TTStringBuffer_S_f f_Create_TTStringBuffer_S;
	_m_stringbuffer_core_TStringBuffer_Length_m m_Length;
	_m_stringbuffer_core_TStringBuffer_Capacity_m m_Capacity;
	_m_stringbuffer_core_TStringBuffer_SetLength_i_m m_SetLength_i;
	_m_stringbuffer_core_TStringBuffer_Append_S_m m_Append_S;
	_m_stringbuffer_core_TStringBuffer_AppendObject_TObject_m m_AppendObject_TObject;
	_m_stringbuffer_core_TStringBuffer_AppendCString_pb_m m_AppendCString_pb;
	_m_stringbuffer_core_TStringBuffer_AppendUTF8String_pb_m m_AppendUTF8String_pb;
	_m_stringbuffer_core_TStringBuffer_AppendShorts_psi_m m_AppendShorts_psi;
	_m_stringbuffer_core_TStringBuffer_AppendChar_i_m m_AppendChar_i;
	_m_stringbuffer_core_TStringBuffer_Find_Si_m m_Find_Si;
	_m_stringbuffer_core_TStringBuffer_FindLast_Si_m m_FindLast_Si;
	_m_stringbuffer_core_TStringBuffer_Trim_m m_Trim;
	_m_stringbuffer_core_TStringBuffer_Replace_SS_m m_Replace_SS;
	_m_stringbuffer_core_TStringBuffer_StartsWith_S_m m_StartsWith_S;
	_m_stringbuffer_core_TStringBuffer_EndsWith_S_m m_EndsWith_S;
	_m_stringbuffer_core_TStringBuffer_CharAt_i_m m_CharAt_i;
	_m_stringbuffer_core_TStringBuffer_Contains_S_m m_Contains_S;
	_m_stringbuffer_core_TStringBuffer_Join_aS_m m_Join_aS;
	_m_stringbuffer_core_TStringBuffer_ToLower_m m_ToLower;
	_m_stringbuffer_core_TStringBuffer_ToUpper_m m_ToUpper;
	_m_stringbuffer_core_TStringBuffer_Remove_ii_m m_Remove_ii;
	_m_stringbuffer_core_TStringBuffer_RemoveCharAt_i_m m_RemoveCharAt_i;
	_m_stringbuffer_core_TStringBuffer_Insert_iS_m m_Insert_iS;
	_m_stringbuffer_core_TStringBuffer_Reverse_m m_Reverse;
	_m_stringbuffer_core_TStringBuffer_SetCharAt_ii_m m_SetCharAt_ii;
	_m_stringbuffer_core_TStringBuffer_Substring_ii_m m_Substring_ii;
	_m_stringbuffer_core_TStringBuffer_Split_S_m m_Split_S;
};

struct _m_stringbuffer_core_TStringBuffer_obj {
	struct BBClass__m_stringbuffer_core_TStringBuffer* clas;
	BBBYTE* __m_stringbuffer_core_tstringbuffer_buffer;
};
extern struct BBClass__m_stringbuffer_core_TStringBuffer _m_stringbuffer_core_TStringBuffer;
extern BBINT _m_stringbuffer_core_TStringBuffer_initialCapacity;
void __m_stringbuffer_core_TSplitBuffer_New(struct _m_stringbuffer_core_TSplitBuffer_obj* o);
void __m_stringbuffer_core_TSplitBuffer_Delete(struct _m_stringbuffer_core_TSplitBuffer_obj* o);
typedef BBINT (*_m_stringbuffer_core_TSplitBuffer_Length_m)(struct _m_stringbuffer_core_TSplitBuffer_obj*);
BBINT __m_stringbuffer_core_TSplitBuffer_Length(struct _m_stringbuffer_core_TSplitBuffer_obj*);
typedef BBSTRING (*_m_stringbuffer_core_TSplitBuffer_Text_i_m)(struct _m_stringbuffer_core_TSplitBuffer_obj*,BBINT);
BBSTRING __m_stringbuffer_core_TSplitBuffer_Text_i(struct _m_stringbuffer_core_TSplitBuffer_obj*,BBINT);
typedef BBARRAY (*_m_stringbuffer_core_TSplitBuffer_ToArray_m)(struct _m_stringbuffer_core_TSplitBuffer_obj*);
BBARRAY __m_stringbuffer_core_TSplitBuffer_ToArray(struct _m_stringbuffer_core_TSplitBuffer_obj*);
typedef struct _m_stringbuffer_core_TSplitBufferEnum_obj* (*_m_stringbuffer_core_TSplitBuffer_ObjectEnumerator_m)(struct _m_stringbuffer_core_TSplitBuffer_obj*);
struct _m_stringbuffer_core_TSplitBufferEnum_obj* __m_stringbuffer_core_TSplitBuffer_ObjectEnumerator(struct _m_stringbuffer_core_TSplitBuffer_obj*);
struct BBClass__m_stringbuffer_core_TSplitBuffer {
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
	_m_stringbuffer_core_TSplitBuffer_Length_m m_Length;
	_m_stringbuffer_core_TSplitBuffer_Text_i_m m_Text_i;
	_m_stringbuffer_core_TSplitBuffer_ToArray_m m_ToArray;
	_m_stringbuffer_core_TSplitBuffer_ObjectEnumerator_m m_ObjectEnumerator;
};

struct _m_stringbuffer_core_TSplitBuffer_obj {
	struct BBClass__m_stringbuffer_core_TSplitBuffer* clas;
	struct _m_stringbuffer_core_TStringBuffer_obj* __m_stringbuffer_core_tsplitbuffer_buffer;
	BBBYTE* __m_stringbuffer_core_tsplitbuffer_splitptr;
};
extern struct BBClass__m_stringbuffer_core_TSplitBuffer _m_stringbuffer_core_TSplitBuffer;
void __m_stringbuffer_core_TSplitBufferEnum_New(struct _m_stringbuffer_core_TSplitBufferEnum_obj* o);
typedef BBINT (*_m_stringbuffer_core_TSplitBufferEnum_HasNext_m)(struct _m_stringbuffer_core_TSplitBufferEnum_obj*);
BBINT __m_stringbuffer_core_TSplitBufferEnum_HasNext(struct _m_stringbuffer_core_TSplitBufferEnum_obj*);
typedef BBOBJECT (*_m_stringbuffer_core_TSplitBufferEnum_NextObject_m)(struct _m_stringbuffer_core_TSplitBufferEnum_obj*);
BBOBJECT __m_stringbuffer_core_TSplitBufferEnum_NextObject(struct _m_stringbuffer_core_TSplitBufferEnum_obj*);
struct BBClass__m_stringbuffer_core_TSplitBufferEnum {
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
	_m_stringbuffer_core_TSplitBufferEnum_HasNext_m m_HasNext;
	_m_stringbuffer_core_TSplitBufferEnum_NextObject_m m_NextObject;
};

struct _m_stringbuffer_core_TSplitBufferEnum_obj {
	struct BBClass__m_stringbuffer_core_TSplitBufferEnum* clas;
	BBINT __m_stringbuffer_core_tsplitbufferenum_index;
	BBINT __m_stringbuffer_core_tsplitbufferenum_length;
	struct _m_stringbuffer_core_TSplitBuffer_obj* __m_stringbuffer_core_tsplitbufferenum_buffer;
};
extern struct BBClass__m_stringbuffer_core_TSplitBufferEnum _m_stringbuffer_core_TSplitBufferEnum;

#endif
