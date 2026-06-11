CC     = gcc
SOURCE = main.c
TARGET = fconverter

Q      = @

all:
	$(Q)$(CC) $(SOURCE) -o $(TARGET)
    $(Q)echo " CC    Done."

clean:
	$(Q)rm $(TARGET)
