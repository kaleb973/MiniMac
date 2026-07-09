#include "MiniMac.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    // Normal orientation. Use OLED_ROTATION_180 if mounted upside down.
    return OLED_ROTATION_0; 
}
#endif