
include_dir = ../include
objects = add.o log.o
targets = $(objects) ../lib/liblib.a

compile_flags = -O3 -Wall -I$(include_dir)

all: $(targets)

add.o: ./add.c $(include_dir)/add.h
	$(CC) $< -c -o $@ $(compile_flags)

log.o: ./log.c $(include_dir)/log.h
	$(CC) $< -c -o $@ $(compile_flags)

../lib/liblib.a: $(objects)
	$(AR) rcs $@ $^

clean:
	$(RM) -rf $(targets)

