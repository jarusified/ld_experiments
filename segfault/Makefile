CFLAGS= -Wall -fPIC 
LIBS= -ldl

all: segv_handler.so

segv_handler.so : segv_handler.o
	ld -shared -o $@ $^ $(LIBS)

clean: 
	/bin/rm -f *.o 
