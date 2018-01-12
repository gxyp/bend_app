LIBSYSTEMSREEN   = project/mt2523_hdk/apps/lyyh/src/system_screen

C_FILES  += $(LIBSYSTEMSREEN)/system_screen.c \
			$(LIBSYSTEMSREEN)/system_person.c \
			$(LIBSYSTEMSREEN)/system_record.c

CFLAGS  += -I$(SOURCE_DIR)/project/mt2523_hdk/apps/lyyh/inc/system_screen
