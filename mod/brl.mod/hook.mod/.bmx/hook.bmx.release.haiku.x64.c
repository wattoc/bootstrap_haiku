#include <brl.mod/hook.mod/.bmx/hook.bmx.release.haiku.x64.h>
static BBString _s0={
	&bbStringClass,
	0xcc6253b9560e16a1,
	17,
	{84,111,111,32,109,97,110,121,32,104,111,111,107,32,105,100,115
}
};
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
BBARRAY brl_hook_hooks;
static BBINT brl_hook_AllocHookId_id;
void _brl_hook_THook_New(struct brl_hook_THook_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_hook_THook;
	o->_brl_hook_thook_succ = (struct brl_hook_THook_obj*)(&bbNullObject);
	o->_brl_hook_thook_priority = 0;
	o->_brl_hook_thook_func = (&brl_blitz_NullFunctionError);
	o->_brl_hook_thook_context = (BBOBJECT)(&bbNullObject);
}
struct BBDebugScope_5 brl_hook_THook_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"THook",
	{
		{
			BBDEBUGDECL_FIELD,
			"succ",
			":THook",
			.field_offset=offsetof(struct brl_hook_THook_obj,_brl_hook_thook_succ)
		},
		{
			BBDEBUGDECL_FIELD,
			"priority",
			"i",
			.field_offset=offsetof(struct brl_hook_THook_obj,_brl_hook_thook_priority)
		},
		{
			BBDEBUGDECL_FIELD,
			"func",
			"(i,:Object,:Object):Object",
			.field_offset=offsetof(struct brl_hook_THook_obj,_brl_hook_thook_func)
		},
		{
			BBDEBUGDECL_FIELD,
			"context",
			":Object",
			.field_offset=offsetof(struct brl_hook_THook_obj,_brl_hook_thook_context)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()i",
			.var_address=(void*)&_brl_hook_THook_New
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_hook_THook brl_hook_THook={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_hook_THook_scope,
	sizeof(struct brl_hook_THook_obj),
	(void (*)(BBOBJECT))_brl_hook_THook_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct brl_hook_THook_obj,_brl_hook_thook_context) - offsetof(struct brl_hook_THook_obj,_brl_hook_thook_succ) + sizeof(BBOBJECT)
	,0
	,offsetof(struct brl_hook_THook_obj,_brl_hook_thook_succ)
};

BBINT brl_hook_AllocHookId(){
	static int _brl_hook_AllocHookId_id_inited = 0;
	if (!_brl_hook_AllocHookId_id_inited) {
		_brl_hook_AllocHookId_id_inited = 1;
		brl_hook_AllocHookId_id = -1;
	};
	brl_hook_AllocHookId_id+=1;
	if(brl_hook_AllocHookId_id>255){
		bbExThrow((BBObject *)&_s0);
	}
	return brl_hook_AllocHookId_id;
}
BBINT brl_hook_AddHook(BBINT bbt_id,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT),BBOBJECT bbt_context,BBINT bbt_priority){
	struct brl_hook_THook_obj* bbt_t=(struct brl_hook_THook_obj*)(struct brl_hook_THook_obj*)bbObjectNew((BBClass *)&brl_hook_THook);
	bbt_t->_brl_hook_thook_priority =bbt_priority;
	bbt_t->_brl_hook_thook_func =bbt_func;
	bbt_t->_brl_hook_thook_context =(BBOBJECT)bbt_context;
	struct brl_hook_THook_obj* bbt_pred=(struct brl_hook_THook_obj*)(&bbNullObject);
	struct brl_hook_THook_obj* bbt_hook=(struct brl_hook_THook_obj*)((struct brl_hook_THook_obj**)BBARRAYDATA(brl_hook_hooks,1))[((BBUINT)bbt_id)];
	while(((BBObject*)bbt_hook)!= &bbNullObject){
		if(bbt_priority>bbt_hook->_brl_hook_thook_priority ){
			break;
		}
		bbt_pred=(struct brl_hook_THook_obj*)bbt_hook;
		bbt_hook=(struct brl_hook_THook_obj*)bbt_hook->_brl_hook_thook_succ ;
	}
	if(((BBObject*)bbt_pred)!= &bbNullObject){
		bbt_t->_brl_hook_thook_succ =(struct brl_hook_THook_obj*)bbt_pred->_brl_hook_thook_succ ;
		bbt_pred->_brl_hook_thook_succ =(struct brl_hook_THook_obj*)bbt_t;
	}else{
		bbt_t->_brl_hook_thook_succ =(struct brl_hook_THook_obj*)((struct brl_hook_THook_obj**)BBARRAYDATA(brl_hook_hooks,1))[((BBUINT)bbt_id)];
		((struct brl_hook_THook_obj**)BBARRAYDATA(brl_hook_hooks,1))[((BBUINT)bbt_id)]=(struct brl_hook_THook_obj*)bbt_t;
	}
	return 0;
}
BBOBJECT brl_hook_RunHooks(BBINT bbt_id,BBOBJECT bbt_data){
	struct brl_hook_THook_obj* bbt_hook=(struct brl_hook_THook_obj*)((struct brl_hook_THook_obj**)BBARRAYDATA(brl_hook_hooks,1))[((BBUINT)bbt_id)];
	while(((BBObject*)bbt_hook)!= &bbNullObject){
		bbt_data=(BBOBJECT)bbt_hook->_brl_hook_thook_func(bbt_id,(BBOBJECT)bbt_data,(BBOBJECT)bbt_hook->_brl_hook_thook_context );
		bbt_hook=(struct brl_hook_THook_obj*)bbt_hook->_brl_hook_thook_succ ;
	}
	return (BBOBJECT)bbt_data;
}
BBINT brl_hook_RemoveHook(BBINT bbt_id,BBOBJECT(* bbt_func)(BBINT,BBOBJECT,BBOBJECT),BBOBJECT bbt_context){
	struct brl_hook_THook_obj* bbt_pred=(struct brl_hook_THook_obj*)(&bbNullObject);
	struct brl_hook_THook_obj* bbt_hook=(struct brl_hook_THook_obj*)((struct brl_hook_THook_obj**)BBARRAYDATA(brl_hook_hooks,1))[((BBUINT)bbt_id)];
	while((((BBObject*)bbt_hook)!= &bbNullObject) && ((bbt_hook->_brl_hook_thook_func !=bbt_func) || (bbt_hook->_brl_hook_thook_context !=bbt_context))){
		bbt_pred=(struct brl_hook_THook_obj*)bbt_hook;
		bbt_hook=(struct brl_hook_THook_obj*)bbt_hook->_brl_hook_thook_succ ;
	}
	if(!(((BBObject*)bbt_hook)!= &bbNullObject)){
		return 0;
	}
	if(((BBObject*)bbt_pred)!= &bbNullObject){
		bbt_pred->_brl_hook_thook_succ =(struct brl_hook_THook_obj*)bbt_hook->_brl_hook_thook_succ ;
	}else{
		((struct brl_hook_THook_obj**)BBARRAYDATA(brl_hook_hooks,1))[((BBUINT)bbt_id)]=(struct brl_hook_THook_obj*)bbt_hook->_brl_hook_thook_succ ;
	}
	return 0;
}
static int __bb_brl_hook_hook_inited = 0;
int __bb_brl_hook_hook(){
	if (!__bb_brl_hook_hook_inited) {
		__bb_brl_hook_hook_inited = 1;
		GC_add_roots(&brl_hook_hooks, &brl_hook_AllocHookId_id + 1);
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_hook_THook);
		brl_hook_hooks=bbArrayNew1D(":THook", 256);
		return 0;
	}
	return 0;
}