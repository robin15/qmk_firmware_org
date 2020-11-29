#ifndef REV1_H
#define REV1_CONFIG_H

#include "../komy.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"

#ifdef RGBLIGHT_ENABLE
//rgb led driver
#include "ws2812.h"
#endif

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_full( \
  L00, L01, L02, L03, L04, L05, L40, L41, L42, L43, L44, L45, \
  L10, L11, L12, L13, L14, L15, L50, L51, L52, L53, L54, L55, \
  L20, L21, L22, L23, L24, L25, L60, L61, L62, L63, L64, L65, \
  L30, L31, L32, L33, L34, L35, L70, L71, L72, L73, L74, L75 \
  ) \
  { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
    { L40, L41, L42, L43, L44, L45 }, \
    { L50, L51, L52, L53, L54, L55 }, \
    { L60, L61, L62, L63, L64, L65 }, \
    { L70, L71, L72, L73, L74, L75 }, \
  }

#define K_N KC_NO

#define LAYOUT_base( \
  L00, L01, L02, L03, L04, L05, L40, L41, L42, L43, L44, L45, L55,   \
  L10,  L11, L12, L13, L14, L15, L50, L51, L52, L53, L54, L65,       \
  L20,   L21, L22, L23, L24, L25, L60, L61, L71, L62, L63, L64, L75, \
  L30, L31,  L32,  L33,        L34,      L35,   L70,  L72, L73, L74  \
  ) \
  LAYOUT_full( \
    L00, L01, L02, L03, L04, L05, L40, L41, L42, L43, L44, L45, \
    L10, L11, L12, L13, L14, L15, L50, L51, L52, L53, L54, L55, \
    L20, L21, L22, L23, L24, L25, L60, L61, L62, L63, L64, L65, \
    L30, L31, L32, L33, L34, L35, L70, L71, L72, L73, L74, L75 \
  )

#endif
