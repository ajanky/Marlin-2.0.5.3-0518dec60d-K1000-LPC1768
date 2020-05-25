/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once



#define BOARD_INFO_NAME   "KONG 32 bit Board"
#define BOARD_WEBSITE_URL "3bots.de"


#define LED_PIN            P4_28   // MSG1 Used as a status indicator
#define MSG1               P4_28   // MSG1 Used as a status indicator
#define MSG2               P2_11   // MSG2 (was HBed2)
#define LED2_PIN           -1
#define LED3_PIN           -1
#define LED4_PIN           -1

//
// Servos
//
#define SERVO0_PIN         -1   // J8-3 (low jitter)
#define SERVO1_PIN         -1   // J8-4
#define SERVO2_PIN         -1   // J8-5
#define SERVO3_PIN         -1   // J8-6

//
// Limit Switches - Not Interrupt Capable
//
#define X_MIN_PIN          P1_24   // 10k pullup to 3.3V, 1K series
#define X_MAX_PIN          -1   // 10k pullup to 3.3V, 1K series
#define Y_MIN_PIN          P1_26   // 10k pullup to 3.3V, 1K series
#define Y_MAX_PIN          -1   // 10k pullup to 3.3V, 1K series
#define Z_MIN_PIN          P1_28   // The original Mks Sbase DIO19 has a 10k pullup to 3.3V or 5V, 1K series, so when using a Zprobe we must use DIO41 (J8 P1.22)
#define Z_MAX_PIN          P1_29   //  10k pullup to 3.3V, 1K series

#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  P1_29   // ZPRB
#endif

//
// Steppers
//
#define X_STEP_PIN         P2_01
#define X_DIR_PIN          P0_11
#define X_ENABLE_PIN       P0_10

#define Y_STEP_PIN         P2_02
#define Y_DIR_PIN          P0_20
#define Y_ENABLE_PIN       P0_19

#define Y2_STEP_PIN        P1_20
#define Y2_DIR_PIN         P1_19
#define Y2_ENABLE_PIN      P1_18

#define Z_STEP_PIN         P2_03
#define Z_DIR_PIN          P0_22
#define Z_ENABLE_PIN       P0_21

#define E0_STEP_PIN        P2_00
#define E0_DIR_PIN         P0_05
#define E0_ENABLE_PIN      P0_04

#define E1_STEP_PIN        P2_08
#define E1_DIR_PIN         P2_13
#define E1_ENABLE_PIN      P4_29

//
// Temperature Sensors
// 3.3V max when defined as an analog input
//
#define TEMP_BED_PIN        P0_24_A1 
#define TEMP_0_PIN          P0_23_A0
#define TEMP_1_PIN          P0_25_A2
#define TEMP_2_PIN          P0_26_A3

//
// Heaters / Fans
//
#define HEATER_BED_PIN     P2_07
#define HEATER_0_PIN       P2_05
#define HEATER_1_PIN       P2_04
#define HEATER_BED2_PIN    P2_11
#ifndef FAN_PIN
  #define FAN_PIN          P2_06
  #define FAN2_PIN         P1_27
#endif

//
// KONG SPECIFIC Pins
//
#define HOMCYC              P1_21
#define S_ERR               P1_22
#define FILA_ERR            P1_23
#define EMGC                P2_12
#define SHOCK               P1_25
#define BEEPER_PIN          P1_31
#define KILL_PIN            -1
#define SDA 				        P0_27
#define SCL				          P0_28
//
#if ENABLED(NEWPANEL)
 #define BTN_ENC            P1_30
 #define BTN_EN1            P3_25
 #define BTN_EN2            P3_26
#endif
//
#if ENABLED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER) || ENABLED(ANET_FULL_GRAPHICS_LCD)
  // Pin definitions for the Anet A6 Full Graphics display and the RepRapDiscount Full Graphics
  // display using an adapter board  // https://go.aisler.net/benlye/anet-lcd-adapter/pcb
  // See below for alternative pin definitions for use with https://www.thingiverse.com/thing:2103748

  #define LCD_PINS_RS        P0_16  // CS
  #define LCD_PINS_ENABLE    P0_18  // MOSI
  #define LCD_PINS_D4        P0_15  // SCLK
  #define BTN_EN1            P3_25
  #define BTN_EN2            P3_26
  #define BTN_ENC            P1_30

  #ifndef ST7920_DELAY_1
    #define ST7920_DELAY_1 DELAY_NS(0)
  #endif
  #ifndef ST7920_DELAY_2
    #define ST7920_DELAY_2 DELAY_NS(63)
  #endif
  #ifndef ST7920_DELAY_3
    #define ST7920_DELAY_3 DELAY_NS(125)
  #endif
  #define STD_ENCODER_PULSES_PER_STEP 4
  #define STD_ENCODER_STEPS_PER_MENU_ITEM 1
#endif
//
// Misc. Functions
//
#define PS_ON_PIN          -1   // TH3 Connector
