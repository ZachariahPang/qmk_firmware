bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LALT_T(KC_BSPACE):
            return false;
        // case LGUI_T(KC_BSPACE):
        //     return false;
        default:
            return true;
    }
}