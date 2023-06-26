bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(KC_BSPC):
            return false;
        default:
            return true;
    }
}