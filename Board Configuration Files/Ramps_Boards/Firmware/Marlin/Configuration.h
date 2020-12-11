
/**
 * For directions on how to use this firmware visit http://uf2.th3dstudio.com
 * THIS VERSION IS NOT FOR PRODUCTION USE AT THIS TIME AND ONLY AVAILABLE FOR TESTING PURPOSES
 * NO IMPLIED SUPPORT OR WARRANTY IS PROVIDED WITH THIS FIRMWARE RELEASE
 */
#pragma once
#define CONFIGURATION_H_VERSION 020007

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.

//===========================================================================
// ****************   ARTILLERY PRINTERS 2560 CPU BOARD   *******************
//===========================================================================
//#define ARTILLERY_AL4
//#define SIDEWINDER_X1

// EZABL Probe Mounts
//#define SIDEWINDER_X1_OEM
// The AL4 Printer Carriage is 100% compatible with the Creality printer mounts.
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define EZ300_OEM_MOUNT //Enabling this will set other options for the EZ300 Prototype Printer
//#define CUSTOM_PROBE

// Sidewinder X1 Notes
// NOTE: The Sidewinder X1 is ONLY compatible with our firmware once you have installed the LCD conversion kit
// the stock LCD is not supported due to closed source firmware limitations on it.
// You can get the LCD conversion kit here: https://www.th3dstudio.com/product/evonvo-artillery-sidewinder-x1-lcd-conversion-kit/

// Artillery AL4 Options --------------------------------------------------------
// If you swapped the X, Y, or Z drivers with the TMC2208s you may need to reverse your axis. Uncomment the line for each axis that needs reversing.
// Enabling these options will also set the driver delays/modes to the TMC2208_STANDALONE mode for whatever axis you uncomment it for.
//#define ARTILLERY_AL4_X_AXIS_TMC2208
//#define ARTILLERY_AL4_Y_AXIS_TMC2208
//#define ARTILLERY_AL4_Z_AXIS_TMC2208

// Filament Sensor - EZOut Kit
// If you are using our EZOut filament sensor kit on your machine uncomment the below line.
//#define EZOUT_ENABLE

//===========================================================================
// *****************   CREALITY PRINTERS 2560 CPU BOARD   *******************
//===========================================================================
//#define CR10S
//#define CR10S_MINI
//#define CR10S_S4
//#define CR10S_S5
//#define CR10_V2
//#define CR10S_PRO
//#define CR20 
//#define CRX
//#define ENDER5_PLUS

// NOTE: Ender 5 Plus, CR-10S Pro, and CRX ONLY work once you have installed our LCD kit. Stock LCD is not supported due to closed source firmware limitations.
// Ender 5 Plus LCD Kit: https://www.th3dstudio.com/product/ender-5-plus-12864-lcd-upgrade-kit/
// CRX LCD Kit: https://www.th3dstudio.com/product/cr-x-12864-lcd-upgrade-kit/
// CR-10S Pro LCD Kit: https://www.th3dstudio.com/product/cr-10s-pro-lcd-ezabl-upgrade-kit/

// EZABL Probe Mounts
//#define CR10S_OEM
//#define CR10S_PRO_OEM
//#define CR10V2_OEM
//#define CR20_OEM
//#define ENDER5_PLUS_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

// Filament Sensor - EZOut Kit
// If you are using our EZOut filament sensor kit on your machine uncomment the below line.
// For dual extrusion machines the firmware assumes you have a sensor for each extruder
//#define EZOUT_ENABLE

// Filament Sensor - Disable
// If you are having issues with the stock Creality filament sensor (or do not have one) you can disable it with the below feature
//#define DISABLE_FILAMENT_SENSOR

// LCD - Use this to use the CR-10 LCD with the CR-10S Board. Rotate the LCD plug 180
// and plug into EXP1. You will have to force it in but it will fit and work.
//#define CR10LCD_CR10S

// Creality 2560 Silent Board
// If you are using the 2560 based "Silent" board with TMC drivers enable the below setting
//#define CREALITY_SILENT_BOARD

// CR-10S Pro - If you are using the stock Creality ABL probe on the CR-10S Pro uncomment the below line
//#define CR10S_PRO_STOCK_ABL

// Ender 5 Plus - ABL Settings
// By default the Ender 5 Plus comes with a BL Touch. Enabling the ENDER5_PLUS_EZABL or ENDER5_PLUS_NOABL will override the BL Touch setting
// If you are using the stock BL Touch with a non-stock mount enable the CUSTOM_PROBE line above and enter the offsets below for the new mount.
//#define ENDER5_PLUS_EZABL
//#define ENDER5_PLUS_NOABL

// Ender 5 - Leadscrew Setting
// If you have the new Ender 5/5 Pro Model that has the new 800steps/mm Z leadscrew uncomment the below option to set the correct steps/mm
//#define ENDER5_NEW_LEADSCREW

//===========================================================================
// ******************   SUNLU PRINTERS 2560 CPU BOARD   *********************
//===========================================================================
//#define SUNLU_S8

// EZABL Probe Mounts
//#define SUNLU_S8_OEM
//#define CUSTOM_PROBE

//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

//===========================================================================
// EZABL Advanced Settings
//===========================================================================

// If you want more or less EZABL probe points change the number below (only used if EZABL enabled)
// Default is 3 which gives you 3x3 grid for a total of 9 points. STICK WITH ODD NUMBERS
#define EZABL_POINTS 3

// If you want to change how far in or out the probe senses change EZABL_PROBE_EDGE value below. This also sets the edge inset value for MANUAL_MESH_LEVELING.
// Most Machines - 35
// Binder Clips? - 50
#define EZABL_PROBE_EDGE 35

// If you have issues with your machine running the faster probe setting disable the #define EZABL_FASTPROBE below.
// NOTE: Most machines will work with the fast probe enabled. Use M48 to verify accuracy.
#define EZABL_FASTPROBE

// Superfast probing - Only works with the EZABL Pro Sensors
//#define EZABL_SUPERFASTPROBE

// Heaters will stay on during probing - only use if directed to by support. Do not use on AC beds.
//#define HEATERS_ON_DURING_PROBING

// Does your machine make weird noises/vibrations when it is probing the mesh? Enable this to slow down the speed between probe points.
//#define SLOWER_PROBE_MOVES

//================================================================================
// IF YOU HAVE A CUSTOM PROBE MOUNT OR ONE THAT IS NOT PRE-SUPPORTED UNCOMMENT THE
// CUSTOM_PROBE OPTION IN YOUR PRINTER SECTION AND ENTER YOUR PROBE LOCATION BELOW
//================================================================================
#if ENABLED(CUSTOM_PROBE)
  /**
  * Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *
  * In the following example the X and Y offsets are both positive:
  *
  *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
  *
  *     +-- BACK ---+
  *     |           |
  *   L |    (+) P  | R <-- probe (10,10)
  *   E |           | I
  *   F | (-) N (+) | G <-- nozzle (0,0)
  *   T |           | H
  *     |    (-)    | T
  *     |           |
  *     O-- FRONT --+
  *   (0,0)
  *
  * Specify a Probe position as { X, Y, Z }
  * Do NOT enter an number for the Z position in here. Store your offset in EEPROM.
  * 
  * When is the offset POSITIVE?
  * If the probe is right of the nozzle the offset on X is POSITIVE
  * If the probe is behind of the nozzle the offset on Y is POSITIVE
  * 
  * When is the offset NEGATIVE?
  * If the probe is left of the nozzle the offset on X is NEGATIVE
  * If the probe is in front of the nozzle the offset on Y is NEGATIVE
  */
  #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
#endif


//===========================================================================
//******************** EXTRA FEATURES AND TWEAKS ****************************
//===========================================================================

// EXTRUDER SETTINGS -------------------------------
// Use to set custom esteps and/or reverse your E Motor direction if you are installing an extruder that needs the direction reversed.
// If you reversed the wiring on your E motor already (like the Bondtech Guide says to do) then you do not need to reverse it in the firmware here.

// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
// This option sets the esteps from the CUSTOM_ESTEPS_VALUE line below.
// If you need to reverse the e motor direction also enabled the REVERSE_E_MOTOR_DIRECTION option.
// Example EStep Values: TH3D Aluminum Extruder - 95 ESteps, TH3D Tough Extruder - 463 ESteps, BMG Extruder - 415 ESteps
// When installing a Tough Extruder or E3D Titan or Bondtech that is Geared you likely need to enable the REVERSE_E_MOTOR_DIRECTION option
//#define CUSTOM_ESTEPS
#define CUSTOM_ESTEPS_VALUE 463
//#define REVERSE_E_MOTOR_DIRECTION

// FILAMENT SENSOR UNLOAD SETTINGS -----------------
// If you have a filament sensor that is physically mounted to the machine you can enable MOUNTED_FILAMENT_SENSOR to set the unload length to 0 to prevent filament from backing up in the sensor by uncommenting MOUNTED_FILAMENT_SENSOR 
//#define MOUNTED_FILAMENT_SENSOR

// If you have a direct drive machine with a filament sensor uncomment DIRECT_DRIVE_PRINTER to decrease the unload length from 100mm to 20mm
//#define DIRECT_DRIVE_PRINTER

// THERMISTOR SETTINGS -----------------------------

// If you are using an E3D V6 Hotend (or Hemera) with their cartridge thermistor (not glass version) uncomment the below line.
//#define V6_HOTEND

// If you are using a Tough Hotend from TH3D or any thermistors TH3D sells for your hotend uncomment the below line.
//#define TH3D_HOTEND_THERMISTOR

// If you are using a known hotend thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_HOTEND_THERMISTOR_VALUE
//#define KNOWN_HOTEND_THERMISTOR
//#define KNOWN_HOTEND_THERMISTOR_VALUE X

// If you have a hotend and thermistor capable of over 290C you can set the max temp value below.
// Setting this higher than 290C on a stock or traditional thermistor will damage it. Refer to your thermistor documentation to see what max temp is.
//#define HIGH_TEMP_THERMISTOR
#define HIGH_TEMP_THERMISTOR_TEMP 350

// BED THERMISTOR SETTINGS -------------------------

// If you are using a thermistor TH3D sells for your bed uncomment the below line.
//#define TH3D_BED_THERMISTOR

// If you are using a Keenovo with SSR and the Keenovo temperature sensor uncomment the below line.
//#define KEENOVO_TEMPSENSOR

// If you are using a known bed thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_BED_THERMISTOR_VALUE
//#define KNOWN_BED_THERMISTOR
//#define KNOWN_BED_THERMISTOR_VALUE X

// If you are using an AC bed with a standalone controller (Keenovo) uncomment the below line to disable the heated bed in the firmware
//#define AC_BED

// MISC --------------------------------------------

// If you have a 5015 fan that whines when under 100% speed uncomment the below line.
//#define FAN_FIX

// Use your own printer name - Uncomment both lines
//#define CUSTOM_PRINTER_NAME
//#define USER_PRINTER_NAME "CHANGE ME"

// If your printer is homing to the endstops hard uncomment this to change the homing speed/divisor to make it less aggressive.
//#define SLOWER_HOMING

//===========================================================================
//****************** COMMUNITY REQUESTED FEATURES ***************************
//===========================================================================

// HOME OFFSET ADJUSTMENT --------------------------
// If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST line below and enter your
// custom XY offsets. This is provided for convenience and is unsupported with included product support.
// How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
// the build plate and then put those as NEGATIVE values below, positive values will NOT work (move your endstops to fix a positve offset).
//#define HOME_ADJUST
#define X_HOME_LOCATION -10
#define Y_HOME_LOCATION -10

// LINEAR ADVANCE ----------------------------------
// See here on how to use Linear Advance: http://marlinfw.org/docs/features/lin_advance.html
//#define LINEAR_ADVANCE
// Change the K Value here or use M900 KX.XX in your starting code (recommended).
#define LINEAR_ADVANCE_K 0

// BL TOUCH ----------------------------------------
// If you want to use the BL-Touch uncomment the 2 lines below and set your servo pin.
// You also need to uncomment #define CUSTOM_PROBE above and then enter in your offsets above in the CUSTOM PROBE section.
//#define BLTOUCH
// Here is where you set your servo pin.
//#define SERVO0_PIN 11

// MANUAL MESH LEVELING ----------------------------
// If you want to use manual mesh leveling you can enable the below option. This is for generating a MANUAL mesh WITHOUT a probe. To change the mesh inset value change the EZABL_PROBE_EDGE setting above.
// Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html 
// NOTE: If you want to automate the leveling process our EZABL kits do this for you. Check them out here: http://EZABL.TH3DStudio.com
//#define MANUAL_MESH_LEVELING

// POWER LOSS RECOVERY -----------------------------
// Continue after Power-Loss feature will store the current state to the SD Card at the start of each layer
// during SD printing. If this is found at bootup it will ask you if you want to resume the print.
//
// NOTE: This feature causes excessive wear on your SD card.
//#define POWER_LOSS_RECOVERY

//===========================================================================
// **********************  END CONFIGURATION SETTINGS   *********************
//===========================================================================

/**
 * ****************************DO NOT TOUCH ANYTHING BELOW THIS COMMENT**************************
 * Core machine settings are below. Do NOT modify these unless you understand what you are doing.
 */

/**
 * Machine Configuration Settings
 */

// Artillery Printers Settings
#if ENABLED(SIDEWINDER_X1) || ENABLED(ARTILLERY_AL4)
  #if ENABLED(EZ300_OEM_MOUNT) && ENABLED(ARTILLERY_AL4)
    #define ARTILLERY_AL4_X_AXIS_TMC2208
    #define ARTILLERY_AL4_Y_AXIS_TMC2208
    #define EZOUT_ENABLE
    #define CUSTOM_ESTEPS
    #define CUSTOM_ESTEPS_VALUE 463
    #define REVERSE_E_MOTOR_DIRECTION
    #define CUSTOM_PRINTER_NAME
    #define USER_PRINTER_NAME "TH3D EZ300"
  #endif

  #define SERIAL_PORT 0
  #define SPACE_SAVER_2560

  #define STOCK_MKS_PRINTER
  #define DIRECT_DRIVE_PRINTER

  #if ENABLED(SIDEWINDER_X1)
    #define RGB_LIGHTS
    #define RGB_LED
    #define RGB_LED_R_PIN 5
    #define RGB_LED_G_PIN 4
    #define RGB_LED_B_PIN 6
    #define PRINTER_EVENT_LEDS
  #endif

  #if ENABLED(EZ300_OEM_MOUNT) && ENABLED(ARTILLERY_AL4)
    #define RGB_LIGHTS
    #define NEOPIXEL_LED
    #define NEOPIXEL_TYPE   NEO_GRB
    #define NEOPIXEL_PIN    19
    #define NEOPIXEL_PIXELS 3
    #define NEOPIXEL_IS_SEQUENTIAL
    #define NEOPIXEL_BRIGHTNESS 255
    #define PRINTER_EVENT_LEDS
  #endif

  #define BAUDRATE 250000
  
  #if ENABLED(SIDEWINDER_X1)
    #define MKS_MINI_12864
  #endif

  #if ENABLED(ARTILLERY_AL4)
    #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    #define REVERSE_ENCODER_DIRECTION
  #endif

  #define DEFAULT_LCD_CONTRAST 150

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_GEN_L
  #endif

  #if ENABLED(SIDEWINDER_X1)
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 463 }
    #endif
  #endif

  #if ENABLED(ARTILLERY_AL4)
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 400, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 400, 95 }
    #endif
  #endif

  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          1000
  #define DEFAULT_RETRACT_ACCELERATION  1000
  #define DEFAULT_TRAVEL_ACCELERATION   1000

  #define CLASSIC_JERK
  #if ENABLED(CLASSIC_JERK)
    #define DEFAULT_XJERK 10.0
    #define DEFAULT_YJERK 10.0
    #define DEFAULT_ZJERK  0.3
  #endif

  #define DEFAULT_EJERK    5.0

  #define EXTRUDERS 1

  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #if ENABLED(ARTILLERY_AL4)
    #define Z_MAX_POS 300
  #else
    #define Z_MAX_POS 400
  #endif
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG

  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
  
  #if NONE(V6_HOTEND, TH3D_HOTEND_THERMISTOR, KNOWN_HOTEND_THERMISTOR)
    #define TEMP_SENSOR_0 1
  #else
    #if ENABLED(EZBOARD_PT100)
      #define TEMP_SENSOR_0 20
    #elif ENABLED(V6_HOTEND)
      #define TEMP_SENSOR_0 5
    #elif ENABLED(KNOWN_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 KNOWN_HOTEND_THERMISTOR_VALUE
    #elif ENABLED(TH3D_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 1
    #endif
  #endif
  
  #define TEMP_SENSOR_1 0 
  #define TEMP_SENSOR_2 0
  #define TEMP_SENSOR_3 0
  #define TEMP_SENSOR_4 0
  #define TEMP_SENSOR_5 0
  #define TEMP_SENSOR_6 0
  #define TEMP_SENSOR_7 0
  
  #if NONE(TH3D_BED_THERMISTOR, KEENOVO_TEMPSENSOR, KNOWN_BED_THERMISTOR, AC_BED)
    #define TEMP_SENSOR_BED 1
  #else
    #if ENABLED(AC_BED)
      #define TEMP_SENSOR_BED 0
    #elif ENABLED(KNOWN_BED_THERMISTOR)
      #define TEMP_SENSOR_BED KNOWN_BED_THERMISTOR_VALUE
    #elif ENABLED(TH3D_BED_THERMISTOR)
      #define TEMP_SENSOR_BED 1
    #elif ENABLED(KEENOVO_TEMPSENSOR)
      #define TEMP_SENSOR_BED 11
    #endif
  #endif
  
  #define TEMP_SENSOR_PROBE 0
  #define TEMP_SENSOR_CHAMBER 0

  #define ENDSTOPPULLUPS

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #if ENABLED(SIDEWINDER_X1)
    #define X_DRIVER_TYPE TMC2130_STANDALONE
    #define Y_DRIVER_TYPE TMC2130_STANDALONE
    #define Z_DRIVER_TYPE TMC2130_STANDALONE
    #define E0_DRIVER_TYPE TMC2130_STANDALONE
  #endif

  #if ENABLED(ARTILLERY_AL4)
    #if ENABLED(ARTILLERY_AL4_X_AXIS_TMC2208)
      #define X_DRIVER_TYPE  TMC2208_STANDALONE
    #else
      #define X_DRIVER_TYPE  A4988
    #endif
    
    #if ENABLED(ARTILLERY_AL4_Y_AXIS_TMC2208)
      #define Y_DRIVER_TYPE  TMC2208_STANDALONE
    #else
      #define Y_DRIVER_TYPE  A4988
    #endif
    
    #if ENABLED(ARTILLERY_AL4_Z_AXIS_TMC2208)
      #define Z_DRIVER_TYPE  TMC2208_STANDALONE
    #else
      #define Z_DRIVER_TYPE  A4988
    #endif
    #define E0_DRIVER_TYPE A4988
  #endif
    
  #define ENDSTOP_INTERRUPTS_FEATURE

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #if ENABLED(ARTILLERY_AL4_X_AXIS_TMC2208)
    #define INVERT_X_DIR true
  #else
    #define INVERT_X_DIR false
  #endif
  
  #if ENABLED(ARTILLERY_AL4_Y_AXIS_TMC2208)
    #define INVERT_Y_DIR true
  #else
    #define INVERT_Y_DIR false
  #endif
  
  #if ENABLED(ARTILLERY_AL4_Z_AXIS_TMC2208)
    #define INVERT_Z_DIR false
  #else
    #define INVERT_Z_DIR true
  #endif
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false
  #define INVERT_E6_DIR false
  #define INVERT_E7_DIR false

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #if ENABLED(SIDEWINDER_X1) || ENABLED(EZOUT_ENABLE)
    #define FILAMENT_RUNOUT_SENSOR
  #endif

  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #define FIL_RUNOUT_STATE     LOW       // Pin state indicating that filament is NOT present.
    #define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
    //#define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.
    #define FIL_RUNOUT_PIN 2                // Sidewinder X1 stock sensor on X+

    // Set one or more commands to execute on filament runout.
    // (After 'M412 H' Marlin will ask the host to handle the process.)
    #define FILAMENT_RUNOUT_SCRIPT "M600"

    // After a runout is detected, continue printing this length of filament
    // before executing the runout script. Useful for a sensor at the end of
    // a feed tube. Requires 4 bytes SRAM per sensor, plus 4 bytes overhead.
    #define FILAMENT_RUNOUT_DISTANCE_MM 5

    #ifdef FILAMENT_RUNOUT_DISTANCE_MM
      // Enable this option to use an encoder disc that toggles the runout pin
      // as the filament moves. (Be sure to set FILAMENT_RUNOUT_DISTANCE_MM
      // large enough to avoid false positives.)
      //#define FILAMENT_MOTION_SENSOR
    #endif
  #endif

#endif
// End Artillery Printer Settings 

// Creality 2560 Printer Settings
#if ENABLED(CR10S) || ENABLED(CR10_V2) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5) || ENABLED(ENDER3_DUALBOARD) || ENABLED(CR20) || ENABLED(ENDER5_DUALBOARD) || ENABLED(CRX) || ENABLED(CR10S_PRO) || ENABLED(CRX) || ENABLED(ENDER5_PLUS)

  #if ENABLED(ENDER5_PLUS)
    #if DISABLED(ENDER5_PLUS_NOABL) && DISABLED(ENDER5_PLUS_EZABL)
      #define BLTOUCH
      #define SERVO0_PIN 11
      #if DISABLED(CUSTOM_PROBE)
        #define NOZZLE_TO_PROBE_OFFSET { -44, -9, 0 }
      #endif
    #endif  
    #if DISABLED(ENDER5_PLUS_NOABL)
      #define ABL_ENABLE
    #endif
  #endif

  #if ENABLED(ENDER5_NEW_LEADSCREW) || ENABLED(ENDER5_PLUS)
    #define CREALITY_Z_STEPS 800
  #else
    #define CREALITY_Z_STEPS 400
  #endif

  #define SERIAL_PORT 0
  #define SPACE_SAVER_2560

  #define BAUDRATE 115200
  
  #if ENABLED(CR10LCD_CR10S) || ENABLED(ENDER3_DUALBOARD) || ENABLED(ENDER5_DUALBOARD)
    #define CR10_STOCKDISPLAY
  #elif ENABLED(CR20)
    #define MINIPANEL
  #else
    #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
    #if ENABLED(CRX) || ENABLED(CR10S_PRO) || ENABLED(ENDER5_PLUS)
      #define REVERSE_ENCODER_DIRECTION
    #endif
  #endif

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_CREALITY
  #endif

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, CUSTOM_ESTEPS_VALUE }
  #else
    #if ENABLED(CR10S_PRO)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 140 }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, CREALITY_Z_STEPS, 95 }
    #endif
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          1000
  #define DEFAULT_RETRACT_ACCELERATION  1000
  #define DEFAULT_TRAVEL_ACCELERATION   1000

  #define CLASSIC_JERK
  #if ENABLED(CLASSIC_JERK)
    #if ENABLED(CR10S_S4) || ENABLED(CR10S_S5)
      #define DEFAULT_XJERK 5.0
      #define DEFAULT_YJERK 5.0
    #else
      #define DEFAULT_XJERK 7.0
      #define DEFAULT_YJERK 7.0
    #endif
    #define DEFAULT_ZJERK  0.3
  #endif

  #define DEFAULT_EJERK    5.0

  #if ENABLED(CRX) || ENABLED(ENDER5_DUALBOARD) || ENABLED(ENDER3_DUALBOARD)
    #define EXTRUDERS 2
  #else
    #define EXTRUDERS 1
  #endif

  #if ENABLED(CR10S) || ENABLED(CRX) || ENABLED(CR10_V2) || ENABLED(CR10S_PRO)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(CR10S_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
  #endif
  
  #if ENABLED(CR20)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250
  #endif

  #if ENABLED(ENDER5_PLUS)
    #define X_BED_SIZE 350
    #define Y_BED_SIZE 350
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(ENDER3_DUALBOARD)
		#if ENABLED(ENDER_XTENDER_400)
			#define X_BED_SIZE 400
			#define Y_BED_SIZE 400
			#define Z_MAX_POS 250
		#elif ENABLED(ENDER_XTENDER_400XL)
			#define X_BED_SIZE 400
			#define Y_BED_SIZE 400
			#define Z_MAX_POS 500
		#elif ENABLED(ENDER_XTENDER_XL)
			#define X_BED_SIZE 235
			#define Y_BED_SIZE 235
			#define Z_MAX_POS 500
		#else
			#define X_BED_SIZE 235
			#define Y_BED_SIZE 235
			#define Z_MAX_POS 250
		#endif
  #endif
  
  #if ENABLED(ENDER5_DUALBOARD)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #if ENABLED(CRX)
      #define X_MIN_POS 0
      #define Y_MIN_POS -8
    #else
      #define X_MIN_POS 0
      #define Y_MIN_POS 0
    #endif
  #endif

  #if ENABLED(ENDER5_PLUS)
    #define USE_XMAX_PLUG
    #define USE_YMAX_PLUG
    #define USE_ZMIN_PLUG
  #else
    #define USE_XMIN_PLUG
    #define USE_YMIN_PLUG
    #define USE_ZMIN_PLUG
  #endif
  
  #if ENABLED(ENDER5_PLUS)
    #define X_HOME_DIR 1
    #define Y_HOME_DIR 1
    #define Z_HOME_DIR -1
  #else
    #define X_HOME_DIR -1
    #define Y_HOME_DIR -1
    #define Z_HOME_DIR -1
  #endif

  #if ENABLED(CRX)
    #define SINGLENOZZLE
  #endif
  
  #if NONE(V6_HOTEND, TH3D_HOTEND_THERMISTOR, KNOWN_HOTEND_THERMISTOR)
    #define TEMP_SENSOR_0 1
  #else
    #if ENABLED(EZBOARD_PT100)
      #define TEMP_SENSOR_0 20
    #elif ENABLED(V6_HOTEND)
      #define TEMP_SENSOR_0 5
    #elif ENABLED(KNOWN_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 KNOWN_HOTEND_THERMISTOR_VALUE
    #elif ENABLED(TH3D_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 1
    #endif
  #endif
  
  #define TEMP_SENSOR_1 0 
  #define TEMP_SENSOR_2 0
  #define TEMP_SENSOR_3 0
  #define TEMP_SENSOR_4 0
  #define TEMP_SENSOR_5 0
  #define TEMP_SENSOR_6 0
  #define TEMP_SENSOR_7 0
  
  #if NONE(TH3D_BED_THERMISTOR, KEENOVO_TEMPSENSOR, KNOWN_BED_THERMISTOR, AC_BED)
    #define TEMP_SENSOR_BED 1
  #else
    #if ENABLED(AC_BED)
      #define TEMP_SENSOR_BED 0
    #elif ENABLED(KNOWN_BED_THERMISTOR)
      #define TEMP_SENSOR_BED KNOWN_BED_THERMISTOR_VALUE
    #elif ENABLED(TH3D_BED_THERMISTOR)
      #define TEMP_SENSOR_BED 1
    #elif ENABLED(KEENOVO_TEMPSENSOR)
      #define TEMP_SENSOR_BED 11
    #endif
  #endif
  
  #define TEMP_SENSOR_PROBE 0
  #define TEMP_SENSOR_CHAMBER 0

  #define ENDSTOPPULLUPS

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #if ENABLED(CR10_V2) || ENABLED(CREALITY_SILENT_BOARD) || ENABLED(CR10S_PRO)
    #define X_DRIVER_TYPE TMC2208_STANDALONE
    #define Y_DRIVER_TYPE TMC2208_STANDALONE
    #define Z_DRIVER_TYPE TMC2208_STANDALONE
    #define E0_DRIVER_TYPE TMC2208_STANDALONE
  #else
    #define X_DRIVER_TYPE A4988
    #define Y_DRIVER_TYPE A4988
    #define Z_DRIVER_TYPE A4988
    #define E0_DRIVER_TYPE A4988
  #endif
  
  #define ENDSTOP_INTERRUPTS_FEATURE

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #define INVERT_X_DIR false
  
  #if ENABLED(CRX) || ENABLED(CR10S_PRO)
    #define INVERT_Y_DIR true
  #else
    #define INVERT_Y_DIR false
  #endif
  
  #if ENABLED(ENDER5_DUALBOARD) || ENABLED(ENDER5_PLUS)
    #define INVERT_Z_DIR false
  #else
    #define INVERT_Z_DIR true
  #endif
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
  #if ENABLED(CRX)
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E1_DIR false
    #else
      #define INVERT_E1_DIR true
    #endif
  #else
    #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
      #define INVERT_E1_DIR true
    #else
      #define INVERT_E1_DIR false
    #endif
  #endif

  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false
  #define INVERT_E6_DIR false
  #define INVERT_E7_DIR false

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #if DISABLED(DISABLE_FILAMENT_SENSOR)
    #if ENABLED(CRX) && DISABLED(EZOUT_ENABLE)
      // do nothing
    #elif ENABLED(CR20) && DISABLED(EZOUT_ENABLE)
      // do nothing
    #else
      #define FILAMENT_RUNOUT_SENSOR
    #endif
  #endif
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    
    #if ENABLED(CRX)
      #define NUM_RUNOUT_SENSORS   2          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #else
      #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #endif
    
    #if (ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5)) && DISABLED(EZOUT_ENABLE)
      #define FIL_RUNOUT_STATE     HIGH        // Pin state indicating that filament is NOT present.
    #else
      #define FIL_RUNOUT_STATE     LOW        // Pin state indicating that filament is NOT present.
    #endif

    #define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
    //#define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.
    #define FIL_RUNOUT_PIN 2                // Creality CR10 V2/CR10S Series stock sensor

    // Set one or more commands to execute on filament runout.
    // (After 'M412 H' Marlin will ask the host to handle the process.)
    #define FILAMENT_RUNOUT_SCRIPT "M600"

    // After a runout is detected, continue printing this length of filament
    // before executing the runout script. Useful for a sensor at the end of
    // a feed tube. Requires 4 bytes SRAM per sensor, plus 4 bytes overhead.
    #define FILAMENT_RUNOUT_DISTANCE_MM 5

    #ifdef FILAMENT_RUNOUT_DISTANCE_MM
      // Enable this option to use an encoder disc that toggles the runout pin
      // as the filament moves. (Be sure to set FILAMENT_RUNOUT_DISTANCE_MM
      // large enough to avoid false positives.)
      //#define FILAMENT_MOTION_SENSOR
    #endif
  #endif

#endif
// End Creality 2560 Printer Settings

// Sunlu Printer Settings
#if ENABLED(SUNLU_S8)
  #define SERIAL_PORT 0
  #define SPACE_SAVER_2560

  #define BAUDRATE 115200
  
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define ST7920_DELAY_1 DELAY_NS(0)
  #define ST7920_DELAY_2 DELAY_NS(400)
  #define ST7920_DELAY_3 DELAY_NS(0)

  #define DEFAULT_LCD_CONTRAST 150

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPS_14_EFB
  #endif

  #if ENABLED(CUSTOM_ESTEPS)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #endif

  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 1000, 5000 }

  #define DEFAULT_ACCELERATION          1000
  #define DEFAULT_RETRACT_ACCELERATION  1000
  #define DEFAULT_TRAVEL_ACCELERATION   1000

  #define CLASSIC_JERK
  #if ENABLED(CLASSIC_JERK)
    #define DEFAULT_XJERK 10.0
    #define DEFAULT_YJERK 10.0
    #define DEFAULT_ZJERK  0.3
  #endif

  #define DEFAULT_EJERK    5.0

  #define EXTRUDERS 1

  #define X_BED_SIZE 310
  #define Y_BED_SIZE 310
  #define Z_MAX_POS 400
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_ADJUST_LOCATION
    #define Y_MIN_POS Y_HOME_ADJUST_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG

  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
  
  #if NONE(V6_HOTEND, TH3D_HOTEND_THERMISTOR, KNOWN_HOTEND_THERMISTOR)
    #define TEMP_SENSOR_0 1
  #else
    #if ENABLED(EZBOARD_PT100)
      #define TEMP_SENSOR_0 20
    #elif ENABLED(V6_HOTEND)
      #define TEMP_SENSOR_0 5
    #elif ENABLED(KNOWN_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 KNOWN_HOTEND_THERMISTOR_VALUE
    #elif ENABLED(TH3D_HOTEND_THERMISTOR)
      #define TEMP_SENSOR_0 1
    #endif
  #endif
  
  #define TEMP_SENSOR_1 0 
  #define TEMP_SENSOR_2 0
  #define TEMP_SENSOR_3 0
  #define TEMP_SENSOR_4 0
  #define TEMP_SENSOR_5 0
  #define TEMP_SENSOR_6 0
  #define TEMP_SENSOR_7 0
  
  #if NONE(TH3D_BED_THERMISTOR, KEENOVO_TEMPSENSOR, KNOWN_BED_THERMISTOR, AC_BED)
    #define TEMP_SENSOR_BED 1
  #else
    #if ENABLED(AC_BED)
      #define TEMP_SENSOR_BED 0
    #elif ENABLED(KNOWN_BED_THERMISTOR)
      #define TEMP_SENSOR_BED KNOWN_BED_THERMISTOR_VALUE
    #elif ENABLED(TH3D_BED_THERMISTOR)
      #define TEMP_SENSOR_BED 1
    #elif ENABLED(KEENOVO_TEMPSENSOR)
      #define TEMP_SENSOR_BED 11
    #endif
  #endif
  
  #define TEMP_SENSOR_PROBE 0
  #define TEMP_SENSOR_CHAMBER 0

  #define ENDSTOPPULLUPS

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #define X_DRIVER_TYPE  A4988
  #define Y_DRIVER_TYPE  A4988
  #define Z_DRIVER_TYPE  A4988
  #define E0_DRIVER_TYPE A4988
    
  #define ENDSTOP_INTERRUPTS_FEATURE

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #if ENABLED(REVERSE_E_MOTOR_DIRECTION)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
  
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false
  #define INVERT_E6_DIR false
  #define INVERT_E7_DIR false

  #define FILAMENT_RUNOUT_SENSOR

  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
    #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
    #define FIL_RUNOUT_STATE     LOW       // Pin state indicating that filament is NOT present.
    #define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
    //#define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.
    #define FIL_RUNOUT_PIN 2                // Sunlu stock sensor on MT_DET

    // Set one or more commands to execute on filament runout.
    // (After 'M412 H' Marlin will ask the host to handle the process.)
    #define FILAMENT_RUNOUT_SCRIPT "M600"

    // After a runout is detected, continue printing this length of filament
    // before executing the runout script. Useful for a sensor at the end of
    // a feed tube. Requires 4 bytes SRAM per sensor, plus 4 bytes overhead.
    #define FILAMENT_RUNOUT_DISTANCE_MM 5

    #ifdef FILAMENT_RUNOUT_DISTANCE_MM
      // Enable this option to use an encoder disc that toggles the runout pin
      // as the filament moves. (Be sure to set FILAMENT_RUNOUT_DISTANCE_MM
      // large enough to avoid false positives.)
      //#define FILAMENT_MOTION_SENSOR
    #endif
  #endif

#endif
// End Sunlu Printer Settings

/*
 * All other settings are stored in the Configuration_backend.h file. Do not change unless you know what you are doing.
 */
 
#include "Configuration_backend.h"