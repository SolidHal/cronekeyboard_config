#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RCTL, KC_LGUI, LT(1,KC_SPC), KC_RSFT, TT(4), KC_LALT),
	[1] = LAYOUT(KC_ESC, KC_NO, KC_GRV, KC_MINS, KC_EQL, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_BSPC, KC_TAB, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_DOT, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_SCLN, KC_QUOT, KC_SLSH, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_RCTL, KC_LGUI, KC_TRNS, KC_RSFT, TT(4), KC_LALT),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_TOG, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC__VOLUP, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_RCTL, KC_LGUI, KC_NO, KC_NO, KC_TRNS, KC_LALT)
};
