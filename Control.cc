#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

#include "defs.h"
#include "Control.h"
#include "Bird.h"
#include "Chicken.h"
#include "Cat.h"
#include "Pig.h"

Control::Control(){
 numAnimals = 0;
 

}


void Control::addBird(string name){

  barn[numAnimals++] = new Bird(name);
  numAnimals++;
	 
}

void addChicken(string name){

  barn[numAnimals++] = new Chicken(name);
  numAnimals++;
	 
}

void addCat(string name){

  barn[numAnimals++] = new Cat(name);
  numAnimals++;
	 
}

void addPig(string name){

  barn[numAnimals++] = new Pig(name);
  numAnimals++;
	 
}
