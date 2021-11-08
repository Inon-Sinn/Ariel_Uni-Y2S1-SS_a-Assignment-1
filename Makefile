CC=gcc
AR=ar
FLAGS= -Wall -g


all: 


mains:


maindrec:


maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so



loops: libclassloops.a

loopd: libclassloops.so 

recursives:


recursived:


libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs  libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o


basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c


main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so maindloop
