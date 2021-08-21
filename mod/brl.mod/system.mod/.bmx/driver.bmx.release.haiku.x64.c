#include "driver.bmx.release.haiku.x64.h"
static BBString _s1={
	&bbStringClass,
	0xe614048644413867,
	38,
	{46,32,83,121,115,116,101,109,32,100,114,105,118,101,114,32,97
	,108,114,101,97,100,121,32,99,111,110,102,105,103,117,114,101
	,100,32,97,115,32}
};
static BBString _s0={
	&bbStringClass,
	0x537f7430240ee69b,
	18,
	{67,97,110,110,111,116,32,105,110,105,116,105,97,108,105,115,101
	,32}
};
static BBString _s2={
	&bbStringClass,
	0x9b8b42580c14bde1,
	60,
	{78,111,32,83,121,115,116,101,109,32,68,114,105,118,101,114,32
	,105,110,115,116,97,108,108,101,100,46,32,77,97,121,98,101
	,32,73,109,112,111,114,116,32,66,82,76,46,83,121,115,116
	,101,109,68,101,102,97,117,108,116,32,63}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct brl_system_driver_TSystemDriver_obj* brl_system_driver__Driver=(struct brl_system_driver_TSystemDriver_obj*)(&bbNullObject);
void _brl_system_driver_TSystemDriver_New(struct brl_system_driver_TSystemDriver_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_system_driver_TSystemDriver;
}
BBSTRING _brl_system_driver_TSystemDriver_Name(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
	return &bbEmptyString;
}
void _brl_system_driver_TSystemDriver_Poll(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
}
void _brl_system_driver_TSystemDriver_Wait(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
}
void _brl_system_driver_TSystemDriver_MoveMouse_ii(struct brl_system_driver_TSystemDriver_obj* o,BBINT bbt_x,BBINT bbt_y){
	brl_blitz_NullMethodError();
}
void _brl_system_driver_TSystemDriver_SetMouseVisible_i(struct brl_system_driver_TSystemDriver_obj* o,BBINT bbt_visible){
	brl_blitz_NullMethodError();
}
void _brl_system_driver_TSystemDriver_Notify_Si(struct brl_system_driver_TSystemDriver_obj* o,BBSTRING bbt_text,BBINT bbt_serious){
	brl_blitz_NullMethodError();
}
BBINT _brl_system_driver_TSystemDriver_Confirm_Si(struct brl_system_driver_TSystemDriver_obj* o,BBSTRING bbt_text,BBINT bbt_serious){
	brl_blitz_NullMethodError();
	return 0;
}
BBINT _brl_system_driver_TSystemDriver_Proceed_Si(struct brl_system_driver_TSystemDriver_obj* o,BBSTRING bbt_text,BBINT bbt_serious){
	brl_blitz_NullMethodError();
	return 0;
}
BBSTRING _brl_system_driver_TSystemDriver_RequestFile_SSiS(struct brl_system_driver_TSystemDriver_obj* o,BBSTRING bbt_text,BBSTRING bbt_exts,BBINT bbt_save,BBSTRING bbt_file){
	brl_blitz_NullMethodError();
	return &bbEmptyString;
}
BBSTRING _brl_system_driver_TSystemDriver_RequestDir_SS(struct brl_system_driver_TSystemDriver_obj* o,BBSTRING bbt_text,BBSTRING bbt_path){
	brl_blitz_NullMethodError();
	return &bbEmptyString;
}
BBINT _brl_system_driver_TSystemDriver_OpenURL_S(struct brl_system_driver_TSystemDriver_obj* o,BBSTRING bbt_url){
	brl_blitz_NullMethodError();
	return 0;
}
BBINT _brl_system_driver_TSystemDriver_DesktopWidth(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
BBINT _brl_system_driver_TSystemDriver_DesktopHeight(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
BBINT _brl_system_driver_TSystemDriver_DesktopDepth(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
BBINT _brl_system_driver_TSystemDriver_DesktopHertz(struct brl_system_driver_TSystemDriver_obj* o){
	brl_blitz_NullMethodError();
	return 0;
}
BBSTRING _brl_system_driver_TSystemDriver_ToString(struct brl_system_driver_TSystemDriver_obj* o){
	return ((struct brl_system_driver_TSystemDriver_obj*)o)->clas->m_Name((struct brl_system_driver_TSystemDriver_obj*)o);
}
struct BBDebugScope_2 brl_system_driver_TSystemDriver_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TSystemDriver",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_system_driver_TSystemDriver_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"ToString",
			"()$",
			.var_address=(void*)&_brl_system_driver_TSystemDriver_ToString
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_system_driver_TSystemDriver brl_system_driver_TSystemDriver={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_system_driver_TSystemDriver_scope,
	sizeof(struct brl_system_driver_TSystemDriver_obj),
	(void (*)(BBOBJECT))_brl_system_driver_TSystemDriver_New,
	bbObjectDtor,
	(BBSTRING (*)(BBOBJECT))_brl_system_driver_TSystemDriver_ToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,_brl_system_driver_TSystemDriver_Name
	,_brl_system_driver_TSystemDriver_Poll
	,_brl_system_driver_TSystemDriver_Wait
	,_brl_system_driver_TSystemDriver_MoveMouse_ii
	,_brl_system_driver_TSystemDriver_SetMouseVisible_i
	,_brl_system_driver_TSystemDriver_Notify_Si
	,_brl_system_driver_TSystemDriver_Confirm_Si
	,_brl_system_driver_TSystemDriver_Proceed_Si
	,_brl_system_driver_TSystemDriver_RequestFile_SSiS
	,_brl_system_driver_TSystemDriver_RequestDir_SS
	,_brl_system_driver_TSystemDriver_OpenURL_S
	,_brl_system_driver_TSystemDriver_DesktopWidth
	,_brl_system_driver_TSystemDriver_DesktopHeight
	,_brl_system_driver_TSystemDriver_DesktopDepth
	,_brl_system_driver_TSystemDriver_DesktopHertz
};

void _brl_system_driver_IWrappedSystemDriver_New(struct brl_system_driver_IWrappedSystemDriver_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_system_driver_IWrappedSystemDriver;
}
void _brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver(struct brl_system_driver_IWrappedSystemDriver_obj* o,struct brl_system_driver_TSystemDriver_obj* bbt_driver){
	brl_blitz_NullMethodError();
}
struct brl_system_driver_TSystemDriver_obj* _brl_system_driver_IWrappedSystemDriver_GetDriver(struct brl_system_driver_IWrappedSystemDriver_obj* o){
	brl_blitz_NullMethodError();
	return (struct brl_system_driver_TSystemDriver_obj*)(&bbNullObject);
}
struct BBDebugScope_2 brl_system_driver_IWrappedSystemDriver_scope ={
	BBDEBUGSCOPE_USERINTERFACE,
	"IWrappedSystemDriver",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"SetDriver",
			"(:TSystemDriver)",
			.var_address=(void*)&_brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"GetDriver",
			"():TSystemDriver",
			.var_address=(void*)&_brl_system_driver_IWrappedSystemDriver_GetDriver
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_system_driver_IWrappedSystemDriver brl_system_driver_IWrappedSystemDriver={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_system_driver_IWrappedSystemDriver_scope,
	sizeof(struct brl_system_driver_IWrappedSystemDriver_obj),
	(void (*)(BBOBJECT))_brl_system_driver_IWrappedSystemDriver_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,_brl_system_driver_IWrappedSystemDriver_SetDriver_TTSystemDriver
	,_brl_system_driver_IWrappedSystemDriver_GetDriver
};

const struct BBInterface brl_system_driver_IWrappedSystemDriver_ifc = { &brl_system_driver_IWrappedSystemDriver, (const char *) "IWrappedSystemDriver" };
void brl_system_driver_InitSystemDriver(struct brl_system_driver_TSystemDriver_obj* bbt_driver){
	if(((BBObject*)brl_system_driver__Driver)!= &bbNullObject){
		if(((BBObject*)((struct brl_system_driver_IWrappedSystemDriver_obj*)bbInterfaceDowncast(bbt_driver,&brl_system_driver_IWrappedSystemDriver_ifc)))!= &bbNullObject){
			struct brl_system_driver_IWrappedSystemDriver_obj* bbt_;
			((struct brl_system_driver_IWrappedSystemDriver_methods*)(bbObjectInterface((struct brl_system_driver_IWrappedSystemDriver_obj*)(bbt_ = ((struct brl_system_driver_IWrappedSystemDriver_obj*)bbInterfaceDowncast(bbt_driver,&brl_system_driver_IWrappedSystemDriver_ifc))), &brl_system_driver_IWrappedSystemDriver_ifc)))->m_SetDriver_TTSystemDriver((struct brl_system_driver_IWrappedSystemDriver_obj*)bbt_,(struct brl_system_driver_TSystemDriver_obj*)brl_system_driver__Driver);
		}else{
			bbExThrow((BBObject *)bbStringConcat(bbStringConcat(bbStringConcat(&_s0,(bbt_driver)->clas->ToString((struct brl_system_driver_TSystemDriver_obj*)bbt_driver)),&_s1),(brl_system_driver__Driver)->clas->ToString((struct brl_system_driver_TSystemDriver_obj*)brl_system_driver__Driver)));
		}
	}
	brl_system_driver__Driver=(struct brl_system_driver_TSystemDriver_obj*)bbt_driver;
}
struct brl_system_driver_TSystemDriver_obj* brl_system_driver_SystemDriver(){
	if(!(((BBObject*)brl_system_driver__Driver)!= &bbNullObject)){
		bbExThrow((BBObject *)&_s2);
	}
	return (struct brl_system_driver_TSystemDriver_obj*)brl_system_driver__Driver;
}
static int _bb_brl_system_driver_inited = 0;
int _bb_brl_system_driver(){
	if (!_bb_brl_system_driver_inited) {
		_bb_brl_system_driver_inited = 1;
		GC_add_roots(&brl_system_driver__Driver, &brl_system_driver__Driver + 1);
		__bb_brl_blitz_blitz();
		bbObjectRegisterType((BBCLASS)&brl_system_driver_TSystemDriver);
		bbObjectRegisterInterface((BBInterface *)&brl_system_driver_IWrappedSystemDriver_ifc);
		return 0;
	}
	return 0;
}