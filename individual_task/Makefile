CC=gcc
CFILE=task.c
TARGET=task

all:$(TARGET).exe $(TARGET)

task: task.c
	$(CC) -g -o $(TARGET) $(CFILE)

task.exe: task.o
	$(CC) -o $(TARGET).exe $(TARGET).o

clean:
	rm task $(TARGET).o $(TARGET).exe
