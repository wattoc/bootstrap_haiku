#include <pub.mod/physfs.mod/.bmx/physfs.bmx.release.haiku.x64.h>
static int __bb_pub_physfs_physfs_inited = 0;
int __bb_pub_physfs_physfs(){
	if (!__bb_pub_physfs_physfs_inited) {
		__bb_pub_physfs_physfs_inited = 1;
		__bb_brl_blitz_blitz();
		return 0;
	}
	return 0;
}