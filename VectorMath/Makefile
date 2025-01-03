CC = g++
CFLAGS = -I../include
LDFLAGS = -L../lib
LIB = ../lib/libvector_math.a
OBJ = vector_math.o
SRC = vector_math.cpp

# Default target
all: $(LIB)

$(LIB): $(OBJ)
	ar rcs $@ $^

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC) -o $@

clean:
	rm -f $(OBJ) $(LIB)
