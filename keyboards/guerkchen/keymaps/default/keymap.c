#include "guerkchen.h"

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
	[0] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_ENTER),
	[1] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
	[2] = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_BSPC),
	[3] = ACTION_TAP_DANCE_DOUBLE(KC_B, KC_SPC),
	[4] = ACTION_TAP_DANCE_DOUBLE(KC_N, KC_SPC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Base */
	TD(1), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, TD(2),     \
	F(2), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(0), \
	F(0), F(5), F(4), F(3), TD(3), TD(4), KC_M, KC_COMMA, F(6), F(1) ),
[1] = KEYMAP( /* NUMs */
	KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,     \
	KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,\
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS ),
[2] = KEYMAP( /* Extras */
	KC_LCTL, KC_LALT, KC_LGUI, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, \
	KC_TAB, KC_TILD, KC_DEL, KC_F, KC_G, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, \
	KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_QUOT, KC_TRNS, KC_TRNS ),
};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_TAP_KEY(1, KC_Z),
	[1] = ACTION_LAYER_TAP_KEY(2, KC_SLASH),
	[2] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_A),
	[3] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_V),
	[4] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_C),
	[5] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_X),
	[6] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_DOT),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
