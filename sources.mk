include Drivers/sources.mk

SRC_DIR = Drivers/src/
SRC_DIR_ALT = src/
EXCLUDE=$(subst Drivers/src/APPL.c,,${SRCS})

SRCS_ALT = $(EXCLUDE) \
			$(SRC_DIR_ALT)Alt_Appl.c \
			$(SRC_DIR_ALT)Gpio_User.c 