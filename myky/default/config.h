// Copyright 2024 Sota Horiguchi (@ImSota)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
//#define EE_HANDS
#define MASTER_LEFT
#define DYNAMIC_KEYMAP_LAYER_COUNT 7
// #define PRODUCT MyKy //　この設定は新しいqmkでは削除

//rp2040ボードで起動時にコールドスタックする事象に対する対応
#define SPLIT_USB_TIMEOUT 5000 // default 2000
#define SPLIT_USB_TIMEOUT_POLL 25 // default 10
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