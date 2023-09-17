#pragma once

// customizations pnf
#ifdef RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#else
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif


#define AUTO_SHIFT_TIMEOUT 175
// #define NO_AUTO_SHIFT_SPECIAL // e.g. won't shift for ,<

#define COMBO_TERM 25        // how quickly all combo keys must be pressed in succession to trigger
#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
#define COMBO_HOLD_TERM 175  // how long at least one of the combo keys must be held to trigger

// #define MK_KINETIC_SPEED  // kinetic ~ uhk
#define MK_COMBINED // enable acceleration keys
