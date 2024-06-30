// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_japanese.h"
#include "sss46.h"

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_P1, KC_P2),     ENCODER_CCW_CW(KC_P3, KC_P4) },
    [1] = { ENCODER_CCW_CW(KC_P5, KC_P6),     ENCODER_CCW_CW(KC_P7, KC_P8) },
    [2] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [4] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [5] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif

#define SFT_SPC MT(MOD_LSFT,KC_SPC)
#define CTL_ESC MT(MOD_LCTL,KC_ESC)
#define ALT___A MT(MOD_LALT,KC_A)
#define L3____Q LT(3,KC_Q)
#define L3____F LT(3,KC_F)
#define L2_MHEN LT(2,JP_MHEN)
#define CTL_INS C(KC_INS)
#define SFT_INS S(KC_INS)
#define SG____S   LAG(KC_S) // LSFT + LGUI + S
#define G_____V   LGUI(KC_V) // LGUI + .
#define G___DOT   LGUI(KC_DOT)   // LGUI + V

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		L3____Q, KC_W,    KC_E,    KC_R,    KC_T,    KC_TAB,                     JP_AT,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
		ALT___A, KC_S,    KC_D,    L3____F, KC_G,    KC_MINS,                    JP_COLN, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
		KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    JP_PIPE, MO(1),    MO(1),   JP_BSLS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
		                  _______, L2_MHEN, MO(1),   SFT_SPC, CTL_ESC,  KC_DEL,  KC_BSPC, KC_ENT, JP_HENK, _______
	),
	[1] = LAYOUT(
		KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,                    _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
		JP_EXLM, JP_DQUO, JP_HASH, JP_DLR,  JP_PERC, _______,                    _______, JP_AMPR, JP_QUOT, JP_LPRN, JP_RPRN, JP_SCLN,
		JP_LBRC, JP_RBRC, KC_INS,  CTL_INS, SFT_INS, _______, _______,  _______, _______, JP_LPRN, JP_RPRN, _______, _______, _______,
		                  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
	),
	[2] = LAYOUT(
		_______, _______, _______, _______, _______, QK_BOOT,                    _______, KC_BTN3, KC_WH_D, KC_WH_U, _______, _______,
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,                       KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
		KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,   _______,  _______, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN2,
		                  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
	),
	[3] = LAYOUT(
		_______, G_____V, G___DOT, KC_LGUI, SG____S, _______,                    _______, JP_SLSH, KC_7,    KC_8,    KC_9,    JP_ASTR,
		_______, KC_BSPC, KC_DEL,  _______, _______, _______,                    _______, JP_DOT,  KC_4,    KC_5,    KC_6,    JP_MINS,
		_______, _______, _______, _______, _______, _______, _______,  _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    JP_PLUS,
		                  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
	),
	[4] = LAYOUT(
		_______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
		                  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
	),
	[5] = LAYOUT(
		_______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
		                  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
            )
};
