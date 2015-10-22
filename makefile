lowerfunc: lowerfunc.o lowermain.o
	cc -o lowerfunc lowerfunc.o lowermain.o

lowerfunc.o: lowerfunc.c lowerfunc.h
	cc -c lowerfunc.c

lowermain.o: lowermain.c lowerfunc.h
	cc -c lowermain.c

clean:
	rm *.o
	rm lowerfunc
