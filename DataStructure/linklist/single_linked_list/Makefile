
TARGET			= single_link_list

OBJECTS  		= main.c single_linked_list.c


#LIBS			= lib$(LIB_1_NAME).a libmemmgr.a libgbengine.a libtimer.a


#CROSS_COMPILE	= arm-linux-
CROSS_COMPILE   = 
AS				= $(CROSS_COMPILE)as
AR				= $(CROSS_COMPILE)ar
CC				= $(CROSS_COMPILE)gcc
CPP				= $(CC) -E
LD				= $(CROSS_COMPILE)ld
NM				= $(CROSS_COMPILE)nm
CINCS			= -I./  
CFLAGS			= -Wall -O3 -g
LINCS			= -L.
LDFLAGS			= -lm

MAKE_OPTIONS	=

$(TARGET): $(OBJECTS)
	@ echo "Generating $(TARGET)"
	@ $(CC) -o $(TARGET) $(OBJECTS) $(LINCS) $(LDFLAGS) $(CINCS) $(CFLAGS)

#$(DYNAMIC_TARGET): $(OBJECTS)
#	@ echo "Generating $(DYNAMIC_TARGET)"
#	@ $(CC) -o $(DYNAMIC_TARGET) $(OBJECTS) $(CFLAGS) $(LDFLAGS) $(LINCS)
#$(DYNAMIC_TARGET): $(OBJECTS)
#	 $(CC) -o $(DYNAMIC_TARGET) $(OBJECTS) $(CFLAGS) $(LDFLAGS) $(LINCS)

	
# lib$(LIB_0_NAME).a:
# 	make $(MAKE_OPTIONS) -C $(LIB_0_DIR)

# lib$(LIB_1_NAME).a:
# 	make $(MAKE_OPTIONS) -C $(LIB_1_DIR)

# libmemmgr.a:
# 	make -C $(MEMMGR_DIR)
# 	make dynamic -C $(MEMMGR_DIR)

# libgbengine.a:
# 	make -C $(GBENGINE_DIR)
# 	make dynamic -C $(GBENGINE_DIR)

# libtimer.a:
# 	make -C $(TIMER_DIR)
# 	make dynamic -C $(TIMER_DIR)

.SUFFIXES: .c

.c.o:
	@ echo "Compiling $*.c"
	@ $(CC) $(CFLAGS) $(CINCS) -c $*.c -o $(OBJECTS)

# profile: CFLAGS += -D__USE_PROFILE__
# profile: MAKE_OPTIONS += profile
# profile: $(TARGET)

# frame_profile: CFLAGS += -D__USE_PROFILE__
# frame_profile: MAKE_OPTIONS += frame_profile
# frame_profile: $(TARGET)

debug: CFLAGS += -D_DEBUG
debug: MAKE_OPTIONS += debug
debug: $(TARGET)

# static_pic: 
# 			make clean_obj -C $(LIB_0_DIR)
# 			make static_pic -C $(LIB_0_DIR)
# static_pic: $(TARGET)

#dynamic: 
		#make clean_obj -C $(LIB_0_DIR)
		#make dynamic -C $(LIB_0_DIR)
# dynamic: $(DYNAMIC_TARGET)

clean:
	#make clean -C $(LIB_0_DIR)
	rm  $(TARGET) $(OBJECTS)

# cleanall:
# 	make clean -C $(LIB_0_DIR)
# 	make clean -C $(LIB_1_DIR)
# 	make clean -C $(MEMMGR_DIR)
# 	make clean -C $(GBENGINE_DIR)
# 	make clean -C $(TIMER_DIR)
# 	$(RM) $(TARGET) $(OBJECTS)
