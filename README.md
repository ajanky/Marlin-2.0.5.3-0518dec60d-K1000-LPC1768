# Marlin-2.0.5.3-0518dec60d-K1000-LPC1768
 Marlin Branch for KONG1000

 This is the current Marlin Release 2.0.5.3 with Config for the KONG1000 large format 3D printer
 and its LPC1768 based 32bit Controller.

 It includes modifications in marlin_core for setup und G28 for setting the HOMING CYCLE procedure to 
 combine the four Z Stepper endstops into one endstop signal.
 It also replaces the HAL/U8G2 I2C routines to work with the 128x54 OLED module.
