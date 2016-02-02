//Colosseum.h

#include <iostream>
#include <string>
#include <Pokemon.h>
#include <Dice.h>

class Colosseum
{

  private:
    Dice d20;
    Dice d6;

  public:
    Colosseum()
    {
      Dice d20 = new Dice(20);
      Dice d6 = new Dice(6);
    }

    void userBuild(Pokemon& p)
    {
      std::cout << "Please name your Pokemon:" << 
    }
}
