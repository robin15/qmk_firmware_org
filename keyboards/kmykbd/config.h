/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

// GCC include 'config.h" sequence in qmk_firmware/keyboards/komy/
//   -include keyboards/komy/config.h
//   -include keyboards/komy/rev?/config.h
//   -include keyboards/komy/rev?/keymaps/MAPNAME/config.h
//   XXXX.c

#include <serial_config.h>

// GCC include search path in qmk_firmare/keyboards/komy/
//    #include "..." search starts here:
//    #include <...> search starts here:
//     keyboards/komy/rev?/keymaps/MAPNAME
//     keyboards/komy
//     keyboards/komy/rev?
//     .
//     ./tmk_core
//     ......

// MACRO and FUNCTION are features that are depreciated.
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
