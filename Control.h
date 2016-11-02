#ifndef CONTROL_H
#define CONTROL_H

#include "defs.h"
#include "Animal.h"
#include <string>


class Control
{
  public:
    Control();
    void addBird(string);
    void addChicken(string);
    void addPig(string);
    void addCat(string);
    void dance();
    int numAnimals;
    void initData();
    Animal* barn[MAX_ANIMALS];

  protected:
    
  private:
   
};

#endif
