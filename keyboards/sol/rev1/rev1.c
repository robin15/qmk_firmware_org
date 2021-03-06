#include "sol.h"

#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    //led_set_user(usb_led);
}
#endif

#ifdef RGB_MATRIX_ENABLE
  const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
	// Left Hand Mapped Left to Right
    { {  0 | (0 << 4) }, {   0,  0 }, 1},
    { {  0 | (1 << 4) }, {  22,  0 }, 0},
    { {  0 | (2 << 4) }, {  37,  0 }, 0},
    { {  0 | (3 << 4) }, {  37,  0 }, 0},
    { {  0 | (4 << 4) }, {  67,  0 }, 0},
    { {  0 | (5 << 4) }, {  82,  0 }, 0},
    { {  0 | (6 << 4) }, { 104,  0 }, 1},
    { {  1 | (0 << 4) }, {   0, 16 }, 1},
    { {  1 | (1 << 4) }, {  22, 16 }, 0},
    { {  1 | (2 << 4) }, {  37, 16 }, 0},
    { {  1 | (3 << 4) }, {  37, 16 }, 0},
    { {  1 | (4 << 4) }, {  67, 16 }, 0},
    { {  1 | (5 << 4) }, {  82, 16 }, 0},
    { {  1 | (6 << 4) }, { 104, 16 }, 1},
    { {  2 | (0 << 4) }, {   0, 32 }, 1},
    { {  2 | (1 << 4) }, {  22, 32 }, 0},
    { {  2 | (2 << 4) }, {  37, 32 }, 0},
    { {  2 | (3 << 4) }, {  37, 32 }, 0},
    { {  2 | (4 << 4) }, {  67, 32 }, 0},
    { {  2 | (5 << 4) }, {  82, 32 }, 0},
    { {  2 | (6 << 4) }, { 104, 32 }, 1},
    { {  3 | (0 << 4) }, {   0, 48 }, 1},
    { {  3 | (1 << 4) }, {  22, 48 }, 0},
    { {  3 | (2 << 4) }, {  37, 48 }, 0},
    { {  3 | (3 << 4) }, {  37, 48 }, 0},
    { {  3 | (4 << 4) }, {  67, 48 }, 0},
    { {  3 | (5 << 4) }, {  82, 48 }, 0},
    { {  3 | (6 << 4) }, { 104, 48 }, 1},
    { {  4 | (0 << 4) }, {   0, 64 }, 1},
    { {  4 | (1 << 4) }, {  22, 64 }, 1},
    { {  4 | (2 << 4) }, {  37, 64 }, 1},
    { {  4 | (3 << 4) }, {  37, 64 }, 1},
    { {  4 | (4 << 4) }, {  67, 64 }, 1},
	// These two control the 4 LEDs in the thumb cluster
	// Top keys are {  4 | (5 << 4) & {  4 | (6 << 4)
    { {  5 | (5 << 4) }, {  89, 45 }, 1},
    { {  5 | (6 << 4) }, {  97, 55 }, 1},
	// Left Hand Mapped Right to Left
    { {  6 | (0 << 4) }, { 224,  0 }, 1},
    { {  6 | (1 << 4) }, { 202,  0 }, 0},
    { {  6 | (2 << 4) }, { 187,  0 }, 0},
    { {  6 | (3 << 4) }, { 172,  0 }, 0},
    { {  6 | (4 << 4) }, { 157,  0 }, 0},
    { {  6 | (5 << 4) }, { 142,  0 }, 0},
    { {  6 | (6 << 4) }, { 120,  0 }, 1},
    { {  7 | (0 << 4) }, { 224, 16 }, 1},
    { {  7 | (1 << 4) }, { 202, 16 }, 0},
    { {  7 | (2 << 4) }, { 187, 16 }, 0},
    { {  7 | (3 << 4) }, { 172, 16 }, 0},
    { {  7 | (4 << 4) }, { 157, 16 }, 0},
    { {  7 | (5 << 4) }, { 142, 16 }, 0},
    { {  7 | (6 << 4) }, { 120, 16 }, 1},
    { {  8 | (0 << 4) }, { 224, 32 }, 1},
    { {  8 | (1 << 4) }, { 202, 32 }, 0},
    { {  8 | (2 << 4) }, { 187, 32 }, 0},
    { {  8 | (3 << 4) }, { 172, 32 }, 0},
    { {  8 | (4 << 4) }, { 157, 32 }, 0},
    { {  8 | (5 << 4) }, { 142, 32 }, 0},
    { {  8 | (6 << 4) }, { 120, 32 }, 1},
    { {  9 | (0 << 4) }, { 224, 48 }, 1},
    { {  9 | (1 << 4) }, { 202, 48 }, 0},
    { {  9 | (2 << 4) }, { 187, 48 }, 0},
    { {  9 | (3 << 4) }, { 172, 48 }, 0},
    { {  9 | (4 << 4) }, { 157, 48 }, 0},
    { {  9 | (5 << 4) }, { 142, 48 }, 0},
    { {  9 | (6 << 4) }, { 120, 48 }, 1},
    { { 10 | (0 << 4) }, { 224, 64 }, 1},
    { { 10 | (1 << 4) }, { 202, 64 }, 1},
    { { 10 | (2 << 4) }, { 187, 64 }, 1},
    { { 10 | (3 << 4) }, { 172, 64 }, 1},
    { { 10 | (4 << 4) }, { 157, 64 }, 1},
	// These two control the 4 LEDs in the thumb cluster
	// Top keys are { 10 | (5 << 4) & { 10 | (6 << 4)
    { { 11 | (5 << 4) }, { 135, 45 }, 1},
    { { 11 | (6 << 4) }, { 127, 55 }, 1}
  };
#endif

void matrix_init_kb(void) {
	matrix_init_user();
};

