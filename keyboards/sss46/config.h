#pragma once

//#define MATRIX_ROWS 10
//#define MATRIX_COLS 6
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define ENCODER_MAP_KEY_DELAY 10

/*
// https://www.reddit.com/r/qmk/comments/1akq23k/rp2040_split_halfduplex_serial_help/
// より
#undef SERIAL_USART_FULL_DUPLEX
#undef SERIAL_USART_RX_PIN
#define SELECT_SOFT_SERIAL_SPEED 5
#define SERIAL_PIO_USE_PIO0

*/

// jsonに書いた
//#define SOFT_SERIAL_PIN GP16
#define SERIAL_USART_TX_PIN GP16

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP16
#define SERIAL_USART_RX_PIN GP16
#define SERIAL_DEBUG


// defaultで有効らしい。
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U



#define PERMISSIVE_HOLD
