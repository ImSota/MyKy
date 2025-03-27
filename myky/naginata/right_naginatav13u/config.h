// Copyright 2024 Sota Horiguchi (@ImSota)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
//#define EE_HANDS
#define MASTER_RIGHT

//rp2040ボードで起動時にコールドスタックする事象に対する対応
#define SPLIT_USB_TIMEOUT 5000 // default 2000
#define SPLIT_USB_TIMEOUT_POLL 25 // default 10

// Tri-layerでどのレイヤー番号をそれぞれに当てはめるか変更（naginataが1なのでずらす必要あり）
# define TRI_LAYER_LOWER_LAYER 2
# define TRI_LAYER_UPPER_LAYER 3
# define TRI_LAYER_ADJUST_LAYER 4

#define PERMISSIVE_HOLD // 別のキーが押されたとき、TAPPING_TERM以内にキーを離してしまっても、Hold扱いにする
// #define RETRO_TAPPING // TAPPING_TERMを過ぎて何も他に押されずに離しても、TAP扱い(cad等でCtrl+ホイール操作などがあるため、Hold時はCtrlとして機能させたいためオフ)

//薙刀式設定用-------------------------------------------------------
#define NAGINATA_TATEGAKI
#define NAGINATA_YOKOGAKI

#define NAGINATA_EDIT_WIN // JP106
#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE

// #define NAGINATA_EDIT_MAC // US101
// Macはunicode入力を使わない
// #define MAC_LIVE_CONVERSION // Macでライブ変換をオンにしている場合

// #define NAGINATA_EDIT_LINUX
// #define UNICODE_SELECTED_MODES UC_LNX

// #define NAGINATA_KOUCHI_SHIFT // シフトを後置でも有効にする
//--------------------------------------------------------------------

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