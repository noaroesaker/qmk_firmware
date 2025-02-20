#include "keymap_norwegian.h"

#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _RAISE 1
#define _LOWER 2
#define _ADJUST 3
#define _HWCONFIG 4

//layer navigation
#define CL_LO     MO(_LOWER)              // change layer to LOWER
#define CL_HW     MO(_HWCONFIG)           // change layer to HWCONFIG

#define DEL_RA    LT(_RAISE, KC_DEL)      // short DELETE long change layer to RAISE
#define ENT_AD    LT(_ADJUST, KC_ENT)     // short ENTER long change layer to ADJUST
//layer navigation

//dumb way of fixing layout for norwegian
#define NO_OE     NO_OSTR                 // Ø //
#define NO_AA     NO_ARNG                 // Å //

#define KC_STAR   NO_ASTR                 // * //

#define KC_LAROW  NO_LABK                 // < //
#define KC_RAROW  NO_RABK                 // > //
//dumb way of fixing layout for norwegian

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_DEFAULT] = LAYOUT (
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        NO_PIPE,  NO_1  ,  NO_2  ,  NO_3  ,  NO_4  ,  NO_5  ,                                              NO_6  ,  NO_7  ,  NO_8  ,  NO_9  ,  NO_0  , NO_PLUS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB ,  NO_Q  ,  NO_W  ,  NO_E  ,  NO_R  ,  NO_T  , NO_DIAE,                           NO_QUOT,  NO_Y,    NO_U  ,  NO_I  ,  NO_O  ,  NO_P  ,  NO_AA ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LCTL,  NO_A  ,  NO_S  ,  NO_D  ,  NO_F  ,  NO_G  , NO_LCBR,                           NO_RCBR,  NO_H,    NO_J  ,  NO_K  ,  NO_L  ,  NO_OE ,  NO_AE ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT,  NO_Z  ,  NO_X  ,  NO_C  ,  NO_V  ,  NO_B  ,_______ ,  CL_HW ,          CL_HW ,_______ ,  NO_N  ,  NO_M  , NO_COMM, NO_DOT , NO_MINS, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
         CL_LO , KC_LGUI,_______ , KC_LALT,      KC_ESC ,     KC_BSPC, DEL_RA ,         ENT_AD , KC_SPC ,     KC_ALGR,      KC_LEFT,  KC_UP , KC_DOWN, KC_RGHT
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
    [_RAISE] = LAYOUT (
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        NO_TILD,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,                                              KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 , KC_F10 , KC_STAR,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ , KC_PGUP, KC_HOME,  KC_UP , KC_END , NO_SLSH, NO_ACUT,                           NO_GRV , NO_BSLS,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ , KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,KC_LAROW, NO_LBRC,                           NO_RBRC,KC_RAROW,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ , KC_TRNS,        _______ ,_______ ,_______ , NO_MICR,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
        KC_TRNS,_______ ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,    _______ ,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
    [_LOWER] = LAYOUT (
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______ , KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                                             KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ , KC_HOME,  KC_UP , KC_END , KC_PGUP,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ , KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ , KC_TRNS,        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
        KC_TRNS,_______ ,_______ ,_______ ,     _______ ,     KC_SPC , KC_ENT ,        _______ ,_______ ,    _______ ,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
    [_ADJUST] = LAYOUT (
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______ , KC_F21 , KC_F22 , KC_F23 , KC_F24 ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ , KC_TRNS,        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,    _______ ,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
};

//maybe changing color on split in the future
/*
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _RAISE:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _LOWER:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case _ADJUST:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}
*/
