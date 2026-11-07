#pragma once
// remappr — board-level overrides go here.
// Matrix pins, diode direction, processor/bootloader and USB identity
// are data-driven in keyboard.json; add only extras config.h must
// carry (e.g. #define WS2812_SPI_DRIVER SPID2).

#pragma once

// remappr — Vial security identity.
#define VIAL_KEYBOARD_UID {0x3C, 0x91, 0x5E, 0x07, 0xA2, 0x44, 0xD8, 0x1F}

#define VIAL_UNLOCK_COMBO_ROWS {0, 1}
#define VIAL_UNLOCK_COMBO_COLS {0, 2}
