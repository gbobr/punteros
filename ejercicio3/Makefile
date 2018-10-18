TARGET = ejercicio3
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall

.PHONY: default all clean

default: $(TARGET)
all: default

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

test: $(TARGET)
	./$(TARGET) < test/input.txt | awk 'BEGIN{f=0} {if(f) print; if($$1=="#SALIDA#") f=1;}' > output.txt
	diff test/expected.txt output.txt

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -Wall $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)
	-rm -f output.txt
