#include QMK_KEYBOARD_H

// Default layer — 6 keys = F13 → F18
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_1x6(
        KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18
    )
};

// Rotary encoder controls volume
bool encoder_update_user(uint8_t index, bool clockwise) {
    // If you have multiple encoders, you can check `index` and handle each one.
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return false;
}