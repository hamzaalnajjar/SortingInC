CC = gcc
CFLAGS = -Wall -g
TARGET = memorymanager

all: $(TARGET)

$(TARGET): main.o memorymanager.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o memorymanager.o

main.o: main.c memorymanager.h
	$(CC) $(CFLAGS) -c main.c

memorymanager.o: memorymanager.c memorymanager.h
	$(CC) $(CFLAGS) -c memorymanager.c

clean:
	rm -f *.o $(TARGET)
