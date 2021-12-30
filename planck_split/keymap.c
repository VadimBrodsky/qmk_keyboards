#include QMK_KEYBOARD_H
#include "muse.h"

enum planck_layers {
  _BASE,
  _L1,
  _L2,
  _L3
};

enum planck_keycodes {
  BASE = SAFE_RANGE,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* L0
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |      |      |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   A  |   S  |D /Alt|F /CMD|   G  |      |      |   H  |J /CMD|K /Alt|   L  |   ;  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |      |      |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |SPACE |SHIFT |             | CTRL |  L1  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_L0] = LAYOUT_planck_grid(
    KC_Q,    KC_W,    KC_E,        KC_R,        KC_T,         _______, _______, KC_Y,         KC_U,         KC_I,        KC_O,    KC_P,
    KC_A,    KC_S,    ALT_T(KC_D), GUI_T(KC_F), KC_G,         _______, _______, KC_H,         GUI_T(KC_J),  ALT_T(KC_K), KC_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,        KC_V,        KC_B,         _______, _______, KC_N,         KC_M,         KC_COMM,     KC_DOT,  KC_SLSH,
    _______, _______, _______,     KC_SPC,      OSM(KC_LSFT), _______, _______, OSM(KC_RCTL), TO(L1),       _______,     _______, _______
),

/* L1
 * ,-----------------------------------------------------------------------------------.
 * | ESC  |  !   |  @   |  #   |  $   |      |      |  %   |  ^   |  &   |   *  | BSPC |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TAB  |  "   |  `   |  =   |  ~   |      |      |  \   |  [   |  ]   |   |  | ENTR |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  '   |      |      |      |      |      |  (   |  {   |  }   |   )  |  L2  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  L0  |SHIFT |             | CTRL |  L3  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[_L1] = LAYOUT_planck_grid(
    KC_ESC,   KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,       _______, _______, KC_PERC,      KC_CIRC,  KC_AMPR, KC_ASTR, KC_BSPC,
    KC_TAB,   KC_DQUO,  KC_GRV,  KC_EQL,  KC_TILD,      _______, _______, KC_NO,        KC_NO,    KC_NO,   KC_NO,   KC_ENT,
    KC_NO,    KC_QUOT,  KC_NO,   KC_NO,   KC_NO ,       _______, _______, KC_NO,        KC_NO,    KC_NO,   KC_NO,   TO(L2),
    _______, _______, _______,   TO(L0),  OSM(KC_LSFT), _______, _______, OSM(KC_RCTL), TO(L3),   _______, _______, _______
),


/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |      | Left | Down |  Up  |Right |      |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  [   |      |      |      |      |      | Home |PgDown| PgUp | End  |      |  ]   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_grid(
    KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
    KC_LCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_BSLS,
    KC_LBRC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_RBRC,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * | Reset|      |Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|TermOn|TermOf|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Brite |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_grid(
    RESET,   KC_NO,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK,  DVORAK,  PLOVER,  _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______,
    BACKLIT, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
        #ifdef KEYBOARD_planck_rev5
          writePinLow(E6);
        #endif
      } else {
        unregister_code(KC_RSFT);
        #ifdef KEYBOARD_planck_rev5
          writePinHigh(E6);
        #endif
      }
      return false;
      break;
    case PLOVER:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          stop_all_notes();
          PLAY_SONG(plover_song);
        #endif
        layer_off(_RAISE);
        layer_off(_LOWER);
        layer_off(_ADJUST);
        layer_on(_PLOVER);
        if (!eeconfig_is_enabled()) {
            eeconfig_init();
        }
        keymap_config.raw = eeconfig_read_keymap();
        keymap_config.nkro = 1;
        eeconfig_update_keymap(keymap_config.raw);
      }
      return false;
      break;
    case EXT_PLV:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(plover_gb_song);
        #endif
        layer_off(_PLOVER);
      }
      return false;
      break;
  }
  return true;
}

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_PGUP);
      #endif
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0: {
#ifdef AUDIO_ENABLE
            static bool play_sound = false;
#endif
            if (active) {
#ifdef AUDIO_ENABLE
                if (play_sound) { PLAY_SONG(plover_song); }
#endif
                layer_on(_ADJUST);
            } else {
#ifdef AUDIO_ENABLE
                if (play_sound) { PLAY_SONG(plover_gb_song); }
#endif
                layer_off(_ADJUST);
            }
#ifdef AUDIO_ENABLE
            play_sound = true;
#endif
            break;
        }
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
