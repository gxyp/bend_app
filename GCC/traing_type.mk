
LIBTRAINGSREEN   = project/mt2523_hdk/apps/lyyh/src/traing_type

C_FILES  += $(LIBTRAINGSREEN)/traing_type_screen.c \
			$(LIBTRAINGSREEN)/traing_3km.c \
		    $(LIBTRAINGSREEN)/traing_running.c \
		    $(LIBTRAINGSREEN)/traing_swim.c
		    
CFLAGS  += -I$(SOURCE_DIR)/project/mt2523_hdk/apps/lyyh/inc/traing_type
