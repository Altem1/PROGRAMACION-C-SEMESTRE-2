CC = gcc
SPACE = 
EXEC_DIR = bin
TARGET = $(TARGET)

all:
	$(CC) $(TARGET).c -o $(TARGET)
	chmod +x $(TARGET)
	mkdir -p $(EXEC_DIR)
	mv $(TARGET) $(EXEC_DIR)/

clean:
	rm -f $(EXEC_DIR)/$(TARGET)