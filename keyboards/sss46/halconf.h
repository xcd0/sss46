#pragma once
#include_next <halconf.h>

#undef HAL_USE_SIO
#define HAL_USE_SIO TRUE
#undef PAL_USE_CALLBACKS
#define PAL_USE_CALLBACKS TRUE
