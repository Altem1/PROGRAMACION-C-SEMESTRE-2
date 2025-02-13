CC = bcc32c 
SPACE = 
EXEC_DIR = bin
TARGET = $(TARGET)

all:
	$(CC) $(TARGET).c
	mkdir -p $(EXEC_DIR)
	mv $(TARGET).exe $(TARGET).tds $(EXEC_DIR)