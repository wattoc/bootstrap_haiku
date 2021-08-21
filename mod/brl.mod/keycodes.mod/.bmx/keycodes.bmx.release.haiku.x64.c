#include <brl.mod/keycodes.mod/.bmx/keycodes.bmx.release.haiku.x64.h>
static int __bb_brl_keycodes_keycodes_inited = 0;
int __bb_brl_keycodes_keycodes(){
	if (!__bb_brl_keycodes_keycodes_inited) {
		__bb_brl_keycodes_keycodes_inited = 1;
		__bb_brl_blitz_blitz();
		return 0;
	}
	return 0;
}