#pragma once

#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define SPLIT_TRANSPORT_MIRROR

#define EE_HANDS

#define PREVENT_STUCK_MODIFIERS

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE

#undef RGBLED_NUM
#define RGBLED_NUM 10
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#define ENCODERS_PAD_A            { C6 }
#define ENCODERS_PAD_B            { F4 }
#define ENCODERS_PAD_A_RIGHT      { C6 }
#define ENCODERS_PAD_B_RIGHT      { F4 }
#define ENCODER_RESOLUTIONS       { 2 }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }
