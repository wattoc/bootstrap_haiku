#include <brl.mod/system.mod/.bmx/system.bmx.release.haiku.x64.h>
static BBString _s5={
	&bbStringClass,
	0x630e16dddc93fd68,
	1,
	{35}
};
static BBString _s1={
	&bbStringClass,
	0xddba93593654bdf4,
	8,
	{37,72,58,37,77,58,37,83}
};
static BBString _s0={
	&bbStringClass,
	0x9684e37ad4f7c585,
	8,
	{37,100,32,37,98,32,37,89}
};
static BBString _s3={
	&bbStringClass,
	0x3a8cd628477d43f,
	5,
	{102,105,108,101,58}
};
static BBString _s2={
	&bbStringClass,
	0x5efafec4ff0488c5,
	5,
	{104,116,116,112,58}
};
static BBString _s4={
	&bbStringClass,
	0x6dcda8603d4a895c,
	6,
	{104,116,116,112,115,58}
};
BBINT brl_system__busy=0;
BBINT brl_system_PollSystem(){
	if(brl_system__busy!=0){
		return 0;
	}
	brl_system__busy=1;
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	(((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_Poll((struct brl_system_driver_TSystemDriver_obj*)bbt_);
	brl_system__busy=0;
	return 0;
}
BBINT brl_system_WaitSystem(){
	if(brl_system__busy!=0){
		return 0;
	}
	brl_system__busy=1;
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	(((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_Wait((struct brl_system_driver_TSystemDriver_obj*)bbt_);
	brl_system__busy=0;
	return 0;
}
BBSTRING brl_system_CurrentDate(BBSTRING bbt__format){
	BBARRAY bbt_time=bbArrayNew1D("i", 256);
	BBARRAY bbt_buff=bbArrayNew1D("b", 256);
	time_((BBBYTE*)BBARRAYDATA(bbt_time,1));
	strftime_(((BBBYTE*)BBARRAYDATA(bbt_buff,1)),256,bbt__format,localtime_((BBBYTE*)BBARRAYDATA(bbt_time,1)));
	return bbStringFromCString((BBBYTE*)BBARRAYDATA(bbt_buff,1));
}
BBSTRING brl_system_CurrentTime(){
	BBARRAY bbt_time=bbArrayNew1D("i", 256);
	BBARRAY bbt_buff=bbArrayNew1D("b", 256);
	time_((BBBYTE*)BBARRAYDATA(bbt_time,1));
	strftime_(((BBBYTE*)BBARRAYDATA(bbt_buff,1)),256,&_s1,localtime_((BBBYTE*)BBARRAYDATA(bbt_time,1)));
	return bbStringFromCString((BBBYTE*)BBARRAYDATA(bbt_buff,1));
}
BBINT brl_system_MoveMouse(BBINT bbt_x,BBINT bbt_y){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	(((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_MoveMouse_ii((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_x,bbt_y);
	return 0;
}
BBINT brl_system_ShowMouse(){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	(((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_SetMouseVisible_i((struct brl_system_driver_TSystemDriver_obj*)bbt_,1);
	return 0;
}
BBINT brl_system_HideMouse(){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	(((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_SetMouseVisible_i((struct brl_system_driver_TSystemDriver_obj*)bbt_,0);
	return 0;
}
BBINT brl_system_Notify(BBSTRING bbt_text,BBINT bbt_serious){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	(((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_Notify_Si((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_text,bbt_serious);
	return 0;
}
BBINT brl_system_Confirm(BBSTRING bbt_text,BBINT bbt_serious){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_Confirm_Si((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_text,bbt_serious);
}
BBINT brl_system_Proceed(BBSTRING bbt_text,BBINT bbt_serious){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_Proceed_Si((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_text,bbt_serious);
}
BBSTRING brl_system_RequestFile(BBSTRING bbt_text,BBSTRING bbt_extensions,BBINT bbt_save_flag,BBSTRING bbt_initial_path){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_RequestFile_SSiS((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_text,bbt_extensions,bbt_save_flag,bbt_initial_path);
}
BBSTRING brl_system_RequestDir(BBSTRING bbt_text,BBSTRING bbt_initial_path){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_RequestDir_SS((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_text,bbt_initial_path);
}
BBINT brl_system_OpenURL(BBSTRING bbt_url){
	BBSTRING bbt_dev=&bbEmptyString;
	BBSTRING bbt_anchor=&bbEmptyString;
	bbt_dev=bbStringToLower((BBSTRING)bbStringSlice(bbt_url,0,5));
	if((bbStringEquals(bbt_dev, &_s2)!=1 && bbStringEquals(bbt_dev, &_s3)!=1) && bbStringEquals(bbStringToLower((BBSTRING)bbStringSlice(bbt_url,0,6)), &_s4)!=1){
		BBINT bbt_h=bbStringFind((BBSTRING)bbt_url,&_s5,0);
		if(bbt_h>-1){
			bbt_anchor=bbStringSlice(bbt_url,bbt_h,(bbt_url)->length);
			bbt_url=bbStringSlice(bbt_url,0,bbt_h);
		}
		BBSTRING bbt_f=brl_filesystem_RealPath(bbt_url);
		if(brl_filesystem_FileType(bbt_f)!=0){
			bbt_url=bbStringConcat(bbStringConcat(&_s3,bbt_f),bbt_anchor);
		}else{
			bbt_url=bbStringConcat(bbStringConcat(&_s2,bbt_url),bbt_anchor);
		}
	}
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_OpenURL_S((struct brl_system_driver_TSystemDriver_obj*)bbt_,bbt_url);
}
BBINT brl_system_DesktopWidth(){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_DesktopWidth((struct brl_system_driver_TSystemDriver_obj*)bbt_);
}
BBINT brl_system_DesktopHeight(){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_DesktopHeight((struct brl_system_driver_TSystemDriver_obj*)bbt_);
}
BBINT brl_system_DesktopDepth(){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_DesktopDepth((struct brl_system_driver_TSystemDriver_obj*)bbt_);
}
BBINT brl_system_DesktopHertz(){
	struct brl_system_driver_TSystemDriver_obj* bbt_;
	return (((struct brl_system_driver_TSystemDriver_obj*)(bbt_ = brl_system_driver_SystemDriver()))->clas)->m_DesktopHertz((struct brl_system_driver_TSystemDriver_obj*)bbt_);
}
static int __bb_brl_system_system_inited = 0;
int __bb_brl_system_system(){
	if (!__bb_brl_system_system_inited) {
		__bb_brl_system_system_inited = 1;
		GC_add_roots(&brl_system__busy, &brl_system__busy + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_event_event();
		__bb_brl_keycodes_keycodes();
		__bb_brl_filesystem_filesystem();
		_bb_brl_system_driver();
		return 0;
	}
	return 0;
}