
TARGET			= queue

OBJECTS  		= main.c queue.c

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

.SUFFIXES: .c

.c.o:
	@ echo "Compiling $*.c"
	@ $(CC) $(CFLAGS) $(CINCS) -c $*.c -o $(OBJECTS)

clean:
	rm  $(TARGET)
