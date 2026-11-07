#pragma once
// remappr — board-level overrides go here.
// Matrix pins, diode direction, processor/bootloader and USB identity
// are data-driven in keyboard.json; add only extras config.h must
// carry (e.g. #define WS2812_SPI_DRIVER SPID2).

#pragma once

// remappr — Vial security identity.
#define VIAL_KEYBOARD_UID {0x14, 0x39, 0x5E, 0x83, 0xA8, 0xCD, 0xF2, 0x17}

// No unlock combo — keymap is exposed without unlocking.
#define VIAL_INSECURE
