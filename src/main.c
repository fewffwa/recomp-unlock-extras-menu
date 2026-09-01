#include "modding.h"
#include "ultra64.h"
#include "enums.h"
#include "common_structs.h"

extern Maps current_map;
void setFlag(s16 flagIndex, u8 newValue, u8 flagType);

RECOMP_CALLBACK("*", recomp_on_init()) void unlock_extras_menu(void) {
    for (int i=0; i<0x2B, i++;){
	setFlag(i, TRUE, FLAG_TYPE_GLOBAL);
    }
}