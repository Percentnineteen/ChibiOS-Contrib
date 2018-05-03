# List of all the board related files.
BOARDSRC = ${CHIBIOS_CONTRIB}/os/hal/boards/ADAFRUIT_BLUEFRUIT_NRF52832/board.c

# Required include directories
BOARDINC = ${CHIBIOS_CONTRIB}/os/hal/boards/ADAFRUIT_BLUEFRUIT_NRF52832

# Flash
JLINK_DEVICE    = nrf52
JLINK_PRE_FLASH = w4 4001e504 1
#JLINK_ERASE_ALL = w4 4001e504 2\nw4 4001e50c 1\nsleep 100
JLINK_PIN_RESET = w4 40000544 1

