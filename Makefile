objects = Main.o
server : $(objects)
	g++ -o server $(objects)
Main.o : Main.h

clean :
	rm -f server core $(objects)

