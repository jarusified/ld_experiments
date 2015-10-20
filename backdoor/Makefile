CFLAGS=-Wall -fPIC -O2
LIBS=-ldl
all: backdoor.so

backdoor.so: backdoor.o
	ld -shared -o $@ $^ $(LIBS)
clean:
	/bin/rm -f *.o *.so *~

