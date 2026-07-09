#include QMK_KEYBOARD_H

// Define custom keycode names for email macros
enum custom_keycodes {
    EM_1 = SAFE_RANGE,
    EM_2,
    EM_3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───────┬───────┬───────┬───────┐
     * │  CUT  │   B   │ FIND  │ PSCR  │
     * ├───────┼───────┼───────┼───────┤
     * │ COPY  │ EMAIL1│ EMAIL2│ EMAIL3│
     * ├───────┼───────┼───────┼───────┤
     * │ PASTE │   J   │   K   │   L   │
     * ├───────┼───────┼───────┼───────┤
     * │ UNDO  │   N   │   O   │  PWR  │
     * └───────┴───────┴───────┴───────┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_CUT,     KC_B,   KC_FIND,   KC_PSCR,
        KC_COPY,    EM_1,   EM_2,      EM_3,
        KC_PASTE,   KC_J,   KC_K,      KC_L,
        KC_UNDO,    KC_N,   KC_O,      KC_PWR
    )
};

// Logic to intercept the keypress and type out the email strings
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case EM_1:
                SEND_STRING("kalebhailu8@gmail.com");
                return false;
            case EM_2:
                SEND_STRING("khailu973@gmail.com");
                return false;
            case EM_3:
                SEND_STRING("7122587959@student.cms.k12.nc.us");
                return false;
        }
    }
    return true;
}