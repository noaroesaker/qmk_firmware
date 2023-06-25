LTO_ENABLE = no # if firmware size over limit, try this option

HELIX_ROWS = 5
OLED_ENABLE = yes
LOCAL_GLCDFONT = no         # use each keymaps "helixfont.h" insted of "common/glcdfont.c"
LED_BACK_ENABLE = no
LED_UNDERGLOW_ENABLE = no
LED_ANIMATIONS = no
IOS_DEVICE_ENABLE = no      # connect to IOS device (iPad,iPhone)

OLED_SELECT = core
SPLIT_KEYBOARD = yes

# If OLED_ENABLE is 'yes'
#   If OLED_SELECT is 'core', use QMK standard oled_dirver.c.
#   If OLED_SELECT is other than 'core', use helix/local_drivers/ssd1306.c.

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled_display.c
endif

#VIA_ENABLE = yes
#BOOTMAGIC_ENABLE = lite
