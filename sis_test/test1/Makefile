.PHONY : clean
CC = gcc
CFLAGS = -g -Wall
LIBS = -lm

C_SOURCES = $(shell find . -name "*.c")
C_OBJS = $(patsubst %.c,%.o,$(wildcard $(C_SOURCES)))
OBJS = $(C_OBJS)
EXEC = "myexe"


all: $(EXEC)

%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC) $(LIBS)

clean:
	@rm -vfr $(OBJS)
