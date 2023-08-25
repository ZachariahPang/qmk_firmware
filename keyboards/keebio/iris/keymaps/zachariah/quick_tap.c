uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(KC_BSPC):
            return TAPPING_TERM;
        default:
            return QUICK_TAP_TERM;
    }
}