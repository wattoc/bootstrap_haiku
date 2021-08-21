#include <brl.mod/io.mod/.bmx/io.bmx.release.haiku.x64.h>
static BBString _s0={
	&bbStringClass,
	0x904f4971650aa072,
	21,
	{77,97,120,73,79,32,110,111,116,32,105,110,105,116,105,97,108
	,105,122,101,100}
};
static BBString _s2={
	&bbStringClass,
	0x3c3bd93c4b0f8c2c,
	14,
	{78,111,32,73,110,99,98,105,110,32,102,111,114,32}
};
static BBString _s1={
	&bbStringClass,
	0x63f3cba6903f3817,
	8,
	{105,110,99,98,105,110,58,58}
};
struct BBDebugScope_15{int kind; const char *name; BBDebugDecl decls[16]; };
void _brl_io_MaxIO_New(struct brl_io_MaxIO_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &brl_io_MaxIO;
}
void brl_io_MaxIO_Init_v(){
	if(!(brl_io_MaxIO_ioInitialized!=0)){
		if(!(bmx_PHYSFS_init()!=0)){
			bbExThrow((BBObject *)bmx_PHYSFS_getLastError());
		}
	}
	brl_io_MaxIO_ioInitialized=1;
}
BBINT brl_io_MaxIO_DeInit_i(){
	if(brl_io_MaxIO_ioInitialized!=0){
		brl_io_MaxIO_ioInitialized=0;
		return PHYSFS_deinit();
	}
	return 0;
}
BBINT brl_io_MaxIO_Mount_i_SSi(BBSTRING bbt_newDir,BBSTRING bbt_mountPoint,BBINT bbt_appendToPath){
	if(bbStringStartsWith((BBSTRING)bbt_newDir,&_s1)!=0){
		return brl_io_MaxIO_MountIncbin_i_SSi(bbStringSlice(bbt_newDir,8,(bbt_newDir)->length),bbt_mountPoint,bbt_appendToPath);
	}
	return bmx_PHYSFS_mount(bbt_newDir,bbt_mountPoint,bbt_appendToPath);
}
BBINT brl_io_MaxIO_MountIncbin_i_SSi(BBSTRING bbt_newDir,BBSTRING bbt_mountPoint,BBINT bbt_appendToPath){
	return bmx_PHYSFS_mountMemory(bbIncbinPtr(bbt_newDir),bbIncbinLen(bbt_newDir),bbt_newDir,bbt_mountPoint,bbt_appendToPath);
}
BBSTRING brl_io_MaxIO_GetBaseDir_S(){
	return bmx_PHYSFS_getBaseDir();
}
BBSTRING brl_io_MaxIO_GetPrefDir_S_SS(BBSTRING bbt_org,BBSTRING bbt_app){
	return bmx_PHYSFS_getPrefDir(bbt_org,bbt_app);
}
BBINT brl_io_MaxIO_SetWriteDir_i_S(BBSTRING bbt_newDir){
	return bmx_PHYSFS_setWriteDir(bbt_newDir);
}
BBINT brl_io_MaxIO_Stat_i_SvTSMaxIO_Stat(BBSTRING bbt_filename,struct brl_io_common_SMaxIO_Stat* bbt__stat){
	return bmx_PHYSFS_stat(bbt_filename,bbt__stat);
}
BBINT brl_io_MaxIO_DeletePath_i_S(BBSTRING bbt_path){
	return bmx_PHYSFS_delete(bbt_path);
}
BBBYTE* brl_io_MaxIO_OpenWrite_pb_S(BBSTRING bbt_path){
	return bmx_PHYSFS_openWrite(bbt_path);
}
BBINT brl_io_MaxIO_Close_i_pb(BBBYTE* bbt_filePtr){
	return PHYSFS_close(bbt_filePtr);
}
BBINT brl_io_MaxIO_MkDir_i_S(BBSTRING bbt_dirName){
	return bmx_PHYSFS_mkdir(bbt_dirName);
}
BBSTRING brl_io_MaxIO_GetLastError_S(){
	return bmx_PHYSFS_getLastError();
}
BBINT brl_io_MaxIO_ioInitialized;
struct BBDebugScope_15 brl_io_MaxIO_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"MaxIO",
	{
		{
			BBDEBUGDECL_GLOBAL,
			"ioInitialized",
			"i",
			.var_address=(void*)&brl_io_MaxIO_ioInitialized
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_io_MaxIO_New
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Init",
			"()",
			.var_address=(void*)&brl_io_MaxIO_Init_v
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"DeInit",
			"()i",
			.var_address=(void*)&brl_io_MaxIO_DeInit_i
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Mount",
			"($,$,i)i",
			.var_address=(void*)&brl_io_MaxIO_Mount_i_SSi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"MountIncbin",
			"($,$,i)i",
			.var_address=(void*)&brl_io_MaxIO_MountIncbin_i_SSi
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"GetBaseDir",
			"()$",
			.var_address=(void*)&brl_io_MaxIO_GetBaseDir_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"GetPrefDir",
			"($,$)$",
			.var_address=(void*)&brl_io_MaxIO_GetPrefDir_S_SS
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"SetWriteDir",
			"($)i",
			.var_address=(void*)&brl_io_MaxIO_SetWriteDir_i_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Stat",
			"($,@SMaxIO_Stat)i",
			.var_address=(void*)&brl_io_MaxIO_Stat_i_SvTSMaxIO_Stat
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"DeletePath",
			"($)i",
			.var_address=(void*)&brl_io_MaxIO_DeletePath_i_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"OpenWrite",
			"($)*b",
			.var_address=(void*)&brl_io_MaxIO_OpenWrite_pb_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"Close",
			"(*b)i",
			.var_address=(void*)&brl_io_MaxIO_Close_i_pb
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"MkDir",
			"($)i",
			.var_address=(void*)&brl_io_MaxIO_MkDir_i_S
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"GetLastError",
			"()$",
			.var_address=(void*)&brl_io_MaxIO_GetLastError_S
		},
		BBDEBUGDECL_END
	}
};
struct BBClass_brl_io_MaxIO brl_io_MaxIO={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&brl_io_MaxIO_scope,
	sizeof(struct brl_io_MaxIO_obj),
	(void (*)(BBOBJECT))_brl_io_MaxIO_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,brl_io_MaxIO_Init_v
	,brl_io_MaxIO_DeInit_i
	,brl_io_MaxIO_Mount_i_SSi
	,brl_io_MaxIO_MountIncbin_i_SSi
	,brl_io_MaxIO_GetBaseDir_S
	,brl_io_MaxIO_GetPrefDir_S_SS
	,brl_io_MaxIO_SetWriteDir_i_S
	,brl_io_MaxIO_Stat_i_SvTSMaxIO_Stat
	,brl_io_MaxIO_DeletePath_i_S
	,brl_io_MaxIO_OpenWrite_pb_S
	,brl_io_MaxIO_Close_i_pb
	,brl_io_MaxIO_MkDir_i_S
	,brl_io_MaxIO_GetLastError_S
};

static int __bb_brl_io_io_inited = 0;
int __bb_brl_io_io(){
	if (!__bb_brl_io_io_inited) {
		__bb_brl_io_io_inited = 1;
		GC_add_roots(&brl_io_MaxIO_ioInitialized, &brl_io_MaxIO_ioInitialized + 1);
		__bb_brl_blitz_blitz();
		_bb_brl_io_common();
		bbObjectRegisterType((BBCLASS)&brl_io_MaxIO);
		brl_io_MaxIO_ioInitialized=0;
		brl_io_MaxIO_ioInitialized=0;
		return 0;
	}
	return 0;
}