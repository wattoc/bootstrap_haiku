#include "bmk_cores_haiku.bmx.release.haiku.x64.h"
static BBINT _m_bmk_cores_haiku_GetCoreCount_count;
BBINT _m_bmk_cores_haiku_GetCoreCount(){
	static int __m_bmk_cores_haiku_GetCoreCount_count_inited = 0;
	if (!__m_bmk_cores_haiku_GetCoreCount_count_inited) {
		__m_bmk_cores_haiku_GetCoreCount_count_inited = 1;
		_m_bmk_cores_haiku_GetCoreCount_count = 0;
	};
	if(!(_m_bmk_cores_haiku_GetCoreCount_count!=0)){
		_m_bmk_cores_haiku_GetCoreCount_count=bmx_get_system_info_cpu_count();
	}
	return _m_bmk_cores_haiku_GetCoreCount_count;
}
static int _bb_bmk_bmk_cores_haiku_inited = 0;
int _bb_bmk_bmk_cores_haiku(){
	if (!_bb_bmk_bmk_cores_haiku_inited) {
		_bb_bmk_bmk_cores_haiku_inited = 1;
		GC_add_roots(&_m_bmk_cores_haiku_GetCoreCount_count, &_m_bmk_cores_haiku_GetCoreCount_count + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_filesystem_filesystem();
		return 0;
	}
	return 0;
}