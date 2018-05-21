FLAGS=-O3

CC=gcc-7
#CC=icc

RM=rm -f

EXEC=bucket-sort

all: $(EXEC)

$(EXEC):
	$(CC) $(FLAGS) $(EXEC).c -c -o $(EXEC).o
	$(CC) $(FLAGS) main.c -c -o main.o
	$(CC) $(FLAGS) main.o $(EXEC).o -o $(EXEC)

run:
	./$(EXEC)

clean:
	$(RM) $(EXEC).h.gch
	$(RM) main.o $(EXEC).o $(EXEC)
