#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 4

// Pins mapped directly from schematic to RP2040 GPIO IDs
#define MATRIX_COL_PINS { GP26, GP27, GP28, GP29 }
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP4 }
#define DIODE_DIRECTION COL2ROW

// OLED SSD1306 Configuration via I2C
#define OLED_DISPLAY_128X32
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6  
#define I2C1_SCL_PIN GP7