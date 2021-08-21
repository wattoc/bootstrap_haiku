#include "common.bmx.release.haiku.x64.h"
static BBString _s1={
	&bbStringClass,
	0xf1246dec78a245bd,
	1,
	{48}
};
static BBString _s3={
	&bbStringClass,
	0x5f9f5a52cdd755d3,
	1,
	{49}
};
static BBString _s5={
	&bbStringClass,
	0x727734649dc0245c,
	1,
	{50}
};
static BBString _s7={
	&bbStringClass,
	0x1b4d50646ca9ae0c,
	1,
	{51}
};
static BBString _s2={
	&bbStringClass,
	0x3815426981207f8b,
	9,
	{68,73,82,69,67,84,79,82,89}
};
static BBString _s6={
	&bbStringClass,
	0xb6cd05510dd81c2,
	5,
	{79,84,72,69,82}
};
static BBString _s0={
	&bbStringClass,
	0xb4a35c0f006aac03,
	7,
	{82,69,71,85,76,65,82}
};
static BBString _s4={
	&bbStringClass,
	0x6b9ee895ea08ec60,
	7,
	{83,89,77,76,73,78,75}
};
struct BBDebugScope_9{int kind; const char *name; BBDebugDecl decls[10]; };
void _brl_io_common_SMaxIO_Stat_New(struct brl_io_common_SMaxIO_Stat* o) {
	o->_brl_io_common_smaxio_stat__filetype = 0;
}
struct brl_io_common_SMaxIO_Stat brl_io_common_SMaxIO_Stat_New_ObjectNew() {
	struct brl_io_common_SMaxIO_Stat o = {0,0,0,0,0,0};
	_brl_io_common_SMaxIO_Stat_New(&o);
	return o;
}
BBINT _brl_io_common_SMaxIO_Stat_Compare_i_vTSMaxIO_Stat(struct brl_io_common_SMaxIO_Stat* o,struct brl_io_common_SMaxIO_Stat* bbt_o1){
	BBINT bbt_cmp=0;
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare5(o->_brl_io_common_smaxio_stat__filesize ,(*bbt_o1)._brl_io_common_smaxio_stat__filesize );
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare5(o->_brl_io_common_smaxio_stat__modtime ,(*bbt_o1)._brl_io_common_smaxio_stat__modtime );
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare5(o->_brl_io_common_smaxio_stat__createtime ,(*bbt_o1)._brl_io_common_smaxio_stat__createtime );
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare5(o->_brl_io_common_smaxio_stat__accesstime ,(*bbt_o1)._brl_io_common_smaxio_stat__accesstime );
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare3((o->_brl_io_common_smaxio_stat__filetype ),((*bbt_o1)._brl_io_common_smaxio_stat__filetype ));
	if(bbt_cmp!=0){
		return bbt_cmp;
	}
	bbt_cmp=brl_blitz_DefaultComparator_Compare3(o->_brl_io_common_smaxio_stat__readonly ,(*bbt_o1)._brl_io_common_smaxio_stat__readonly );
	return bbt_cmp;
}
struct BBDebugScope_9 brl_io_common_SMaxIO_Stat_scope ={
	BBDEBUGSCOPE_USERSTRUCT,
	"SMaxIO_Stat",
	{
		{
			BBDEBUGDECL_FIELD,
			"_filesize",
			"l",
			.field_offset=offsetof(struct brl_io_common_SMaxIO_Stat,_brl_io_common_smaxio_stat__filesize)
		},
		{
			BBDEBUGDECL_FIELD,
			"_modtime",
			"l",
			.field_offset=offsetof(struct brl_io_common_SMaxIO_Stat,_brl_io_common_smaxio_stat__modtime)
		},
		{
			BBDEBUGDECL_FIELD,
			"_createtime",
			"l",
			.field_offset=offsetof(struct brl_io_common_SMaxIO_Stat,_brl_io_common_smaxio_stat__createtime)
		},
		{
			BBDEBUGDECL_FIELD,
			"_accesstime",
			"l",
			.field_offset=offsetof(struct brl_io_common_SMaxIO_Stat,_brl_io_common_smaxio_stat__accesstime)
		},
		{
			BBDEBUGDECL_FIELD,
			"_filetype",
			"/EMaxIOFileType",
			.field_offset=offsetof(struct brl_io_common_SMaxIO_Stat,_brl_io_common_smaxio_stat__filetype)
		},
		{
			BBDEBUGDECL_FIELD,
			"_readonly",
			"i",
			.field_offset=offsetof(struct brl_io_common_SMaxIO_Stat,_brl_io_common_smaxio_stat__readonly)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&_brl_io_common_SMaxIO_Stat_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()@SMaxIO_Stat",
			.var_address=(void*)&_brl_io_common_SMaxIO_Stat_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Compare",
			"(@SMaxIO_Stat)i",
			.var_address=(void*)&_brl_io_common_SMaxIO_Stat_Compare_i_vTSMaxIO_Stat
		},
		BBDEBUGDECL_END
	}
};
struct BBEnumbrl_io_common_EMaxIOFileType{
	const char * name;
	char * type;
	char * atype;
	int flags;
	int length;
	void * values;
	BBString * names[4];
};
struct BBDebugScope brl_io_common_EMaxIOFileType_scope ={
	BBDEBUGSCOPE_USERENUM,
	"EMaxIOFileType",
	{
		{
			BBDEBUGDECL_GLOBAL,
			"REGULAR",
			"/EMaxIOFileType",
			.const_value=&_s1
		},
		{
			BBDEBUGDECL_GLOBAL,
			"DIRECTORY",
			"/EMaxIOFileType",
			.const_value=&_s3
		},
		{
			BBDEBUGDECL_GLOBAL,
			"SYMLINK",
			"/EMaxIOFileType",
			.const_value=&_s5
		},
		{
			BBDEBUGDECL_GLOBAL,
			"OTHER",
			"/EMaxIOFileType",
			.const_value=&_s7
		},
		BBDEBUGDECL_END
	}
};
BBINT brl_io_common_EMaxIOFileType_values[4] = {0,1,2,3};
struct BBEnumbrl_io_common_EMaxIOFileType brl_io_common_EMaxIOFileType_BBEnum = {
	"EMaxIOFileType",
	"i",
	"/EMaxIOFileType",
	0,
	4,
	&brl_io_common_EMaxIOFileType_values,
	{&_s0,&_s2,&_s4,&_s6}
};
BBEnum * brl_io_common_EMaxIOFileType_BBEnum_impl;
BBSTRING brl_io_common_EMaxIOFileType_ToString(BBINT ordinal) {
	return bbEnumToString_i(brl_io_common_EMaxIOFileType_BBEnum_impl, ordinal);
}
BBINT brl_io_common_EMaxIOFileType_TryConvert(BBINT ordinalValue, BBINT * ordinalResult) {
	return bbEnumTryConvert_i(brl_io_common_EMaxIOFileType_BBEnum_impl, ordinalValue, ordinalResult);
}
BBINT brl_io_common_DefaultComparator_Compare(struct brl_io_common_SMaxIO_Stat* bbt_o1,struct brl_io_common_SMaxIO_Stat* bbt_o2){
	return _brl_io_common_SMaxIO_Stat_Compare_i_vTSMaxIO_Stat((struct brl_io_common_SMaxIO_Stat*)&*bbt_o1,bbt_o2);
}
static int _bb_brl_io_common_inited = 0;
int _bb_brl_io_common(){
	if (!_bb_brl_io_common_inited) {
		_bb_brl_io_common_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_pub_physfs_physfs();
		brl_io_common_EMaxIOFileType_BBEnum_impl = &brl_io_common_EMaxIOFileType_BBEnum;
		bbObjectRegisterStruct((BBDebugScope *)&brl_io_common_SMaxIO_Stat_scope);
		bbEnumRegister((BBEnum *)brl_io_common_EMaxIOFileType_BBEnum_impl, (BBDebugScope *)&brl_io_common_EMaxIOFileType_scope);
		return 0;
	}
	return 0;
}