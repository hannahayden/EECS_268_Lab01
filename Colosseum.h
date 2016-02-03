//Colosseum.h

#ifndef COLOSSEUM_H
#define COLOSSEUM_H

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Dice.h"

class Colosseum
{

  private:
    Dice d20;
    Dice d6;

  public:
    Colosseum();

    void userBuild(Pokemon& p);
};

#endif