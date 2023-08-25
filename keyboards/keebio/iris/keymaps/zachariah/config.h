/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C
#define EE_HANDS

// https://precondition.github.io/home-row-mods#tap-hold-configuration-settings
#define TAPPING_TERM 155
#define IGNORE_MOD_TAP_INTERRUPT
#define QUICK_TAP_TERM 0
#define QUICK_TAP_TERM_PER_KEY

// Mouse
#define MK_3_SPEED
#define MK_C_OFFSET_1 16

// lighting
#define RGBLIGHT_SLEEP
#define RGBLIGHT_DEFAULT_HUE 127