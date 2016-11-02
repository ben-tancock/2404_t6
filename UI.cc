#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

#include "defs.h"
#include "Control.h"
#include "UI.h"
#include "Bird.h"
#include "Chicken.h"
#include "Cat.h"
#include "Pig.h"

UI::UI(){}


void addBird(string& name){ // pass in string, call from within control, 
  //string name;
  //for (int i=0; i<num; i++) {
    cout << "Name " << i+1 << ":  ";
    cin.ignore();
    getline(cin, name);
    //Control.addBird(name);
 // }	 
}

/*void addChicken(int num){

  barn[numAnimals++] = new Chicken(name);
  numAnimals++;
	 
}

void addCat(int num){

  barn[numAnimals++] = new Cat(name);
  numAnimals++;
	 
}

void addPig(int num){

  barn[numAnimals++] = new Pig(name);
  numAnimals++;
	 
}*/
