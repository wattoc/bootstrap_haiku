#ifndef BRL_LINKEDLIST_LINKEDLIST_BMX_RELEASE_HAIKU_X64_H
#define BRL_LINKEDLIST_LINKEDLIST_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
int __bb_brl_linkedlist_linkedlist();
struct brl_linkedlist_TLink_obj;
struct brl_linkedlist_TListEnum_obj;
struct brl_linkedlist_TList_obj;
void _brl_linkedlist_TLink_New(struct brl_linkedlist_TLink_obj* o);
typedef BBOBJECT (*brl_linkedlist_TLink_Value_m)(struct brl_linkedlist_TLink_obj*);
BBOBJECT _brl_linkedlist_TLink_Value(struct brl_linkedlist_TLink_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TLink_NextLink_m)(struct brl_linkedlist_TLink_obj*);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TLink_NextLink(struct brl_linkedlist_TLink_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TLink_PrevLink_m)(struct brl_linkedlist_TLink_obj*);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TLink_PrevLink(struct brl_linkedlist_TLink_obj*);
typedef BBINT (*brl_linkedlist_TLink_Remove_m)(struct brl_linkedlist_TLink_obj*);
BBINT _brl_linkedlist_TLink_Remove(struct brl_linkedlist_TLink_obj*);
struct BBClass_brl_linkedlist_TLink {
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
	brl_linkedlist_TLink_Value_m m_Value;
	brl_linkedlist_TLink_NextLink_m m_NextLink;
	brl_linkedlist_TLink_PrevLink_m m_PrevLink;
	brl_linkedlist_TLink_Remove_m m_Remove;
};

struct brl_linkedlist_TLink_obj {
	struct BBClass_brl_linkedlist_TLink* clas;
	BBOBJECT _brl_linkedlist_tlink__value;
	struct brl_linkedlist_TLink_obj* _brl_linkedlist_tlink__succ;
	struct brl_linkedlist_TLink_obj* _brl_linkedlist_tlink__pred;
};
extern struct BBClass_brl_linkedlist_TLink brl_linkedlist_TLink;
void _brl_linkedlist_TListEnum_New(struct brl_linkedlist_TListEnum_obj* o);
typedef BBINT (*brl_linkedlist_TListEnum_HasNext_m)(struct brl_linkedlist_TListEnum_obj*);
BBINT _brl_linkedlist_TListEnum_HasNext(struct brl_linkedlist_TListEnum_obj*);
typedef BBOBJECT (*brl_linkedlist_TListEnum_NextObject_m)(struct brl_linkedlist_TListEnum_obj*);
BBOBJECT _brl_linkedlist_TListEnum_NextObject(struct brl_linkedlist_TListEnum_obj*);
struct BBClass_brl_linkedlist_TListEnum {
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
	brl_linkedlist_TListEnum_HasNext_m m_HasNext;
	brl_linkedlist_TListEnum_NextObject_m m_NextObject;
};

struct brl_linkedlist_TListEnum_obj {
	struct BBClass_brl_linkedlist_TListEnum* clas;
	struct brl_linkedlist_TLink_obj* _brl_linkedlist_tlistenum__link;
};
extern struct BBClass_brl_linkedlist_TListEnum brl_linkedlist_TListEnum;
void _brl_linkedlist_TList_New(struct brl_linkedlist_TList_obj* o);
void _brl_linkedlist_TList_Delete(struct brl_linkedlist_TList_obj* o);
typedef BBINT (*brl_linkedlist_TList__pad_m)(struct brl_linkedlist_TList_obj*);
BBINT _brl_linkedlist_TList__pad(struct brl_linkedlist_TList_obj*);
typedef BBINT (*brl_linkedlist_TList_Clear_m)(struct brl_linkedlist_TList_obj*);
BBINT _brl_linkedlist_TList_Clear(struct brl_linkedlist_TList_obj*);
typedef BBINT (*brl_linkedlist_TList_IsEmpty_m)(struct brl_linkedlist_TList_obj*);
BBINT _brl_linkedlist_TList_IsEmpty(struct brl_linkedlist_TList_obj*);
typedef BBINT (*brl_linkedlist_TList_Contains_TObject_m)(struct brl_linkedlist_TList_obj*,BBOBJECT);
BBINT _brl_linkedlist_TList_Contains_TObject(struct brl_linkedlist_TList_obj*,BBOBJECT);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_AddFirst_TObject_m)(struct brl_linkedlist_TList_obj*,BBOBJECT);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_AddFirst_TObject(struct brl_linkedlist_TList_obj*,BBOBJECT);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_AddLast_TObject_m)(struct brl_linkedlist_TList_obj*,BBOBJECT);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_AddLast_TObject(struct brl_linkedlist_TList_obj*,BBOBJECT);
typedef BBOBJECT (*brl_linkedlist_TList_First_m)(struct brl_linkedlist_TList_obj*);
BBOBJECT _brl_linkedlist_TList_First(struct brl_linkedlist_TList_obj*);
typedef BBOBJECT (*brl_linkedlist_TList_Last_m)(struct brl_linkedlist_TList_obj*);
BBOBJECT _brl_linkedlist_TList_Last(struct brl_linkedlist_TList_obj*);
typedef BBOBJECT (*brl_linkedlist_TList_RemoveFirst_m)(struct brl_linkedlist_TList_obj*);
BBOBJECT _brl_linkedlist_TList_RemoveFirst(struct brl_linkedlist_TList_obj*);
typedef BBOBJECT (*brl_linkedlist_TList_RemoveLast_m)(struct brl_linkedlist_TList_obj*);
BBOBJECT _brl_linkedlist_TList_RemoveLast(struct brl_linkedlist_TList_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_FirstLink_m)(struct brl_linkedlist_TList_obj*);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_FirstLink(struct brl_linkedlist_TList_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_LastLink_m)(struct brl_linkedlist_TList_obj*);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_LastLink(struct brl_linkedlist_TList_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink_m)(struct brl_linkedlist_TList_obj*,BBOBJECT,struct brl_linkedlist_TLink_obj*);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink(struct brl_linkedlist_TList_obj*,BBOBJECT,struct brl_linkedlist_TLink_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_InsertAfterLink_TObjectTTLink_m)(struct brl_linkedlist_TList_obj*,BBOBJECT,struct brl_linkedlist_TLink_obj*);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_InsertAfterLink_TObjectTTLink(struct brl_linkedlist_TList_obj*,BBOBJECT,struct brl_linkedlist_TLink_obj*);
typedef struct brl_linkedlist_TLink_obj* (*brl_linkedlist_TList_FindLink_TObject_m)(struct brl_linkedlist_TList_obj*,BBOBJECT);
struct brl_linkedlist_TLink_obj* _brl_linkedlist_TList_FindLink_TObject(struct brl_linkedlist_TList_obj*,BBOBJECT);
typedef BBOBJECT (*brl_linkedlist_TList_ValueAtIndex_i_m)(struct brl_linkedlist_TList_obj*,BBINT);
BBOBJECT _brl_linkedlist_TList_ValueAtIndex_i(struct brl_linkedlist_TList_obj*,BBINT);
typedef BBINT (*brl_linkedlist_TList_Count_m)(struct brl_linkedlist_TList_obj*);
BBINT _brl_linkedlist_TList_Count(struct brl_linkedlist_TList_obj*);
typedef BBINT (*brl_linkedlist_TList_Remove_TObject_m)(struct brl_linkedlist_TList_obj*,BBOBJECT);
BBINT _brl_linkedlist_TList_Remove_TObject(struct brl_linkedlist_TList_obj*,BBOBJECT);
typedef BBINT (*brl_linkedlist_TList_Swap_TTList_m)(struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*);
BBINT _brl_linkedlist_TList_Swap_TTList(struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TList_obj*);
typedef struct brl_linkedlist_TList_obj* (*brl_linkedlist_TList_Copy_m)(struct brl_linkedlist_TList_obj*);
struct brl_linkedlist_TList_obj* _brl_linkedlist_TList_Copy(struct brl_linkedlist_TList_obj*);
typedef BBINT (*brl_linkedlist_TList_Reverse_m)(struct brl_linkedlist_TList_obj*);
BBINT _brl_linkedlist_TList_Reverse(struct brl_linkedlist_TList_obj*);
typedef struct brl_linkedlist_TList_obj* (*brl_linkedlist_TList_Reversed_m)(struct brl_linkedlist_TList_obj*);
struct brl_linkedlist_TList_obj* _brl_linkedlist_TList_Reversed(struct brl_linkedlist_TList_obj*);
typedef BBINT (*brl_linkedlist_TList_Sort_iF_TObjectTObject_i__m)(struct brl_linkedlist_TList_obj*,BBINT,BBINT(* bbt_compareFunc)(BBOBJECT,BBOBJECT));
BBINT _brl_linkedlist_TList_Sort_iF_TObjectTObject_i_(struct brl_linkedlist_TList_obj*,BBINT,BBINT(* bbt_compareFunc)(BBOBJECT,BBOBJECT));
typedef struct brl_linkedlist_TListEnum_obj* (*brl_linkedlist_TList_ObjectEnumerator_m)(struct brl_linkedlist_TList_obj*);
struct brl_linkedlist_TListEnum_obj* _brl_linkedlist_TList_ObjectEnumerator(struct brl_linkedlist_TList_obj*);
typedef BBARRAY (*brl_linkedlist_TList_ToArray_m)(struct brl_linkedlist_TList_obj*);
BBARRAY _brl_linkedlist_TList_ToArray(struct brl_linkedlist_TList_obj*);
typedef struct brl_linkedlist_TList_obj* (*brl_linkedlist_TList_FromArray_TTList_aTObject_f)(BBARRAY);
struct brl_linkedlist_TList_obj* brl_linkedlist_TList_FromArray_TTList_aTObject(BBARRAY);
typedef BBINT (*brl_linkedlist_TList_RemoveLink_TTLink_m)(struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TLink_obj*);
BBINT _brl_linkedlist_TList_RemoveLink_TTLink(struct brl_linkedlist_TList_obj*,struct brl_linkedlist_TLink_obj*);
struct BBClass_brl_linkedlist_TList {
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
	brl_linkedlist_TList__pad_m m__pad;
	brl_linkedlist_TList_Clear_m m_Clear;
	brl_linkedlist_TList_IsEmpty_m m_IsEmpty;
	brl_linkedlist_TList_Contains_TObject_m m_Contains_TObject;
	brl_linkedlist_TList_AddFirst_TObject_m m_AddFirst_TObject;
	brl_linkedlist_TList_AddLast_TObject_m m_AddLast_TObject;
	brl_linkedlist_TList_First_m m_First;
	brl_linkedlist_TList_Last_m m_Last;
	brl_linkedlist_TList_RemoveFirst_m m_RemoveFirst;
	brl_linkedlist_TList_RemoveLast_m m_RemoveLast;
	brl_linkedlist_TList_FirstLink_m m_FirstLink;
	brl_linkedlist_TList_LastLink_m m_LastLink;
	brl_linkedlist_TList_InsertBeforeLink_TObjectTTLink_m m_InsertBeforeLink_TObjectTTLink;
	brl_linkedlist_TList_InsertAfterLink_TObjectTTLink_m m_InsertAfterLink_TObjectTTLink;
	brl_linkedlist_TList_FindLink_TObject_m m_FindLink_TObject;
	brl_linkedlist_TList_ValueAtIndex_i_m m_ValueAtIndex_i;
	brl_linkedlist_TList_Count_m m_Count;
	brl_linkedlist_TList_Remove_TObject_m m_Remove_TObject;
	brl_linkedlist_TList_Swap_TTList_m m_Swap_TTList;
	brl_linkedlist_TList_Copy_m m_Copy;
	brl_linkedlist_TList_Reverse_m m_Reverse;
	brl_linkedlist_TList_Reversed_m m_Reversed;
	brl_linkedlist_TList_Sort_iF_TObjectTObject_i__m m_Sort_iF_TObjectTObject_i_;
	brl_linkedlist_TList_ObjectEnumerator_m m_ObjectEnumerator;
	brl_linkedlist_TList_ToArray_m m_ToArray;
	brl_linkedlist_TList_FromArray_TTList_aTObject_f f_FromArray_TTList_aTObject;
	brl_linkedlist_TList_RemoveLink_TTLink_m m_RemoveLink_TTLink;
};

struct brl_linkedlist_TList_obj {
	struct BBClass_brl_linkedlist_TList* clas;
	struct brl_linkedlist_TLink_obj* _brl_linkedlist_tlist__head;
	BBINT _brl_linkedlist_tlist__count;
};
extern struct BBClass_brl_linkedlist_TList brl_linkedlist_TList;
BBINT brl_linkedlist_CompareObjects(BBOBJECT bbt_o1,BBOBJECT bbt_o2);
struct brl_linkedlist_TList_obj* brl_linkedlist_CreateList();
BBINT brl_linkedlist_ClearList(struct brl_linkedlist_TList_obj* bbt_list);
BBINT brl_linkedlist_CountList(struct brl_linkedlist_TList_obj* bbt_list);
BBINT brl_linkedlist_ListIsEmpty(struct brl_linkedlist_TList_obj* bbt_list);
BBINT brl_linkedlist_ListContains(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value);
BBINT brl_linkedlist_SortList(struct brl_linkedlist_TList_obj* bbt_list,BBINT bbt_ascending,BBINT(* bbt_compareFunc)(BBOBJECT,BBOBJECT));
struct brl_linkedlist_TList_obj* brl_linkedlist_ListFromArray(BBARRAY bbt_arr);
BBARRAY brl_linkedlist_ListToArray(struct brl_linkedlist_TList_obj* bbt_list);
BBINT brl_linkedlist_SwapLists(struct brl_linkedlist_TList_obj* bbt_list_x,struct brl_linkedlist_TList_obj* bbt_list_y);
BBINT brl_linkedlist_ReverseList(struct brl_linkedlist_TList_obj* bbt_list);
struct brl_linkedlist_TLink_obj* brl_linkedlist_ListFindLink(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value);
BBINT brl_linkedlist_ListRemoveLink(struct brl_linkedlist_TList_obj* bbt_list,struct brl_linkedlist_TLink_obj* bbt_link);
struct brl_linkedlist_TLink_obj* brl_linkedlist_ListAddLast(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value);
BBOBJECT brl_linkedlist_ListGetFirst(struct brl_linkedlist_TList_obj* bbt_list);
BBOBJECT brl_linkedlist_ListGetLast(struct brl_linkedlist_TList_obj* bbt_list);
struct brl_linkedlist_TLink_obj* brl_linkedlist_ListAddFirst(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value);
BBOBJECT brl_linkedlist_ListRemoveFirst(struct brl_linkedlist_TList_obj* bbt_list);
BBOBJECT brl_linkedlist_ListRemoveLast(struct brl_linkedlist_TList_obj* bbt_list);
BBINT brl_linkedlist_ListRemove(struct brl_linkedlist_TList_obj* bbt_list,BBOBJECT bbt_value);

#endif
