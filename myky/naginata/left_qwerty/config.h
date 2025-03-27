// Copyright 2024 Sota Horiguchi (@ImSota)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
//#define EE_HANDS
#define MASTER_LEFT

//rp2040ボードで起動時にコールドスタックする事象に対する対応
#define SPLIT_USB_TIMEOUT 5000 // default 2000
#define SPLIT_USB_TIMEOUT_POLL 25 // default 10

#define PERMISSIVE_HOLD // 別のキーが押されたとき、TAPPING_TERM以内にキーを離してしまっても、Hold扱いにする
// #define RETRO_TAPPING // TAPPING_TERMを過ぎて何も他に押されずに離しても、TAP扱い(cad等でCtrl+ホイール操作などがあるため、Hold時はCtrlとして機能させたいためオフ)

// RGB MATRIX 設定--------------------------------------------------
// #define SPLIT_LAYER_STATE_ENABLE
// #define SPLIT_TRANSPORT_MIRROR
// #define DRIVER_LED_TOTAL 54
// // #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 250 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
// #define RGB_MATRIX_DEFAULT_HUE 125 // Sets the default hue value, if none has been set
// #define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
// #define RGB_MATRIX_DEFAULT_VAL 100 // Sets the default brightness value, if none has been set

// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #define RGB_MATRIX_TYPING_HEATMAP_SPREAD 32
// #define RGB_MATRIX_TYPING_HEATMAP_AREA_LIMIT 16
// #define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 25

// #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE

// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP// Sets the default mode, if none has been set
// -----------------------------------------------------------------


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT