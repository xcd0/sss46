
#include "sss46.h"

void keyboard_post_init_kb(void) {
	debug_enable   = true;
	debug_matrix   = true;
	debug_keyboard = true;
	debug_mouse    = true;
	keyboard_post_init_user();
}

