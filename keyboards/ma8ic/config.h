// Copyright 2023 kazme-egawa (@kazme-egawa)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 10 // Double rows for split keyboards. ma8ic has 5, so define 10
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { F7, C7, C6, B5, B4, D7, D6, D4 }
#define MATRIX_ROW_PINS_RIGHT { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS_RIGHT { F7, C7, C6, B5, B4, D7, D6, D4 }

#define SOFT_SERIAL_PIN D2

#define OLED_FONT_H "lib/glcdfont.c"

#define RGB_DI_PIN D3
#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_SPLIT { 32, 37 }
#define RGB_MATRIX_LED_COUNT 69

// #    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #    define ENABLE_RGB_MATRIX_DIGITAL_RAIN

#    define RGB_MATRIX_KEYPRESSES
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #    define ENABLE_RGB_MATRIX_SPLASH
// #    define ENABLE_RGB_MATRIX_MULTISPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
// #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

#define SPLIT_LAYER_STATE_ENABLE
#define EE_HANDS
#define SPLIT_USB_DETECT

// To squeeze firmware size
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
