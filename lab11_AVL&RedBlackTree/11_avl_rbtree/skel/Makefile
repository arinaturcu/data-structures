CC = gcc
CFLAGS = -g -Wall -Wextra

.PHONY:
all:	task1 task2
	
run:	task1
	./task1

run_2:	task2
	./task2

task1:	src/task1.c src/avl.c
	$(CC) $(CFLAGS) -o $@ $^

task2: src/task2.c src/rb_tree.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:
clean:
	-rm task1 task2

