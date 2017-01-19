####################################
CC			= gcc
CXX 		= g++
CFLAGS		= -g -Wall
CXXFLAGS	= $(CFLAGS)
LIBS		= -lm
INCPATH		=
DIR			= $(shell pwd)
#####################################
C_SOURCES	= main.c
C_OBJS		= main.o
EXEC		= ninenine
#####################################
.PHONY : clean clea_all
#####################################
%.o:%.c
	$(CC) -c $(CFLAGS) $(INCPATH) $< -o $@
$(EXEC):$(C_OBJS)
	$(CC) $(C_OBJS) -o $(EXEC) $(LIBS)
#####################################
clean:
	@rm -vfr $(C_OBJS)
	@rm -vfr ./*.o

