include ../../Makefile.common
include ../../$(EROOT)/Makefile.shared

OBJ=obj
OBJNAME=libenet.a
SRC=src
INC=include

CFLAGS=$(BASECFLAGS) $(F_NO_STACK_PROTECTOR)
# for BUILD_ECHOFLAGS:
OURCFLAGS=$(CFLAGS)
CPPFLAGS=-I$(INC) -I$(SRC) -I../../$(EROOT)/include


OBJECTS=$(OBJ)/callbacks.o \
	$(OBJ)/host.o \
	$(OBJ)/list.o \
	$(OBJ)/packet.o \
	$(OBJ)/peer.o \
	$(OBJ)/protocol.o \
	$(OBJ)/compress.o

ifeq ($(PLATFORM),WINDOWS)
    OBJECTS+= $(OBJ)/win32.o
    OBJNAME=libenet_win32.a
    OBJ=obj_win
else
    OBJECTS+= $(OBJ)/unix.o
endif

# OBJECTS=$(SOURCES:%.c=$(OBJ)/%.o)

$(OBJNAME): $(OBJECTS)
	$(BUILD_ECHOFLAGS)
	$(ARCHIVE_STATUS)
	if $(AR) cr $@ $^; then $(ARCHIVE_OK); else $(ARCHIVE_FAILED); fi

$(OBJECTS): $(OBJ)/%.o: $(SRC)/%.c $(INC)/enet/*.h
	-mkdir -p $(OBJ)
	$(COMPILE_STATUS)
	if $(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@; then $(COMPILE_OK); else $(COMPILE_FAILED); fi

ifeq ($(PRETTY_OUTPUT),1)
.SILENT:
endif
.PHONY: clean
clean:
	-rm -f $(OBJECTS) $(OBJNAME)
