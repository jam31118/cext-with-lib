
compile_flags = -O3 -Wall

targets = main

all: $(targets)

../lib/liblib.a:
	$(MAKE) -C ../obj

main: ../lib/liblib.a ./main.c 
	$(CC) ./main.c -o $@ $(compile_flags) -I../include -L../lib -llib

clean:
	$(RM) -rf $(targets)

clean-all: clean
	$(MAKE) clean -C ../obj

