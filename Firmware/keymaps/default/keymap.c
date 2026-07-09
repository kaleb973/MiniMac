#include QMK_KEYBOARD_H

// Define custom keycode names for email macros
enum custom_keycodes {
    EM_1 = SAFE_RANGE,
    EM_2,
    EM_3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ├───────────┼───────────┼───────────┼───────────┤
     * │    CUT    │ CLIP_HIST │   FIND    │   PSCR    │
     * ├───────────┼───────────┼───────────┼───────────┤
     * │   COPY    │  EMAIL1   │  EMAIL2   │  EMAIL3   │
     * ├───────────┼───────────┼───────────┼───────────┤
     * │   PASTE   │ PREV_TAB  │ NEXT_TAB  │ TAB_REVIV │
     * ├───────────┼───────────┼───────────┼───────────┤
     * │   UNDO    │ CLOSE_TAB │ PLAIN_PST │    PWR    │
     * └───────────┴───────────┴───────────┴───────────┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_CUT,     LWIN(KC_V),         KC_FIND,            KC_PRINT_SCREEN,
        KC_COPY,    EM_1,               EM_2,               EM_3,
        KC_PASTE,   LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),       LCTL(LSFT(KC_T)),
        KC_UNDO,    LCTL(LSFT(KC_V)),   LCTL(KC_W),         KC_PWR
    )
};

// Logic to intercept keypress events and output target strings
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