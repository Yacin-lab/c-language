CC = gcc
CFLAGS = -Wall -g
OBJ = main.o stack.o
TARGET = stack_app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c stack.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)
