OBJ = main.o Animal.o Bird.o Chicken.o Cat.o Pig.o Control.o UI.o

t06:	$(OBJ) 
	g++ -o t06 $(OBJ) 

main.o:	main.cc Animal.h Chicken.h 
	g++ -c main.cc

Animal.o:	Animal.cc Animal.h
	g++ -c Animal.cc

Bird.o:	Bird.cc Bird.h Animal.h
	g++ -c Bird.cc

Chicken.o:	Chicken.cc Chicken.h Bird.h
	g++ -c Chicken.cc

Cat.o:	Cat.cc Cat.h Animal.h
	g++ -c Cat.cc

Pig.o:	Pig.cc Pig.h Animal.h
	g++ -c Pig.cc

Control.o: Control.cc Control.h
	   g++ -c Control.cc

UI.o:      UI.cc UI.h
	   g++ -c UI.cc

clean:
	rm -f $(OBJ) t06
