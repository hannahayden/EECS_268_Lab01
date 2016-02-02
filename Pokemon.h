/*
File:Pokemon.h
Author: Hanna Hayden
Date: 2/2/16
Description: Header file of Pokemon class
*/

#
#include <string>
#include "Dice.h"

class Pokemon
{
  private:
    int m_hp;
    int m_attackLevel;
    int m_defenseLevel;
    std::string m_name;
    Dice d20;
    Dice d6;

  public:
    Pokemon();
    
    bool attack(Pokemon& opponent);
    
    void userBuild();
    
    void setHP(int myHP);
    int getHP();
    
    void setAttackLevel(int attackLevel);
    int getAttackLevel();
    
    void setDefenseLevel(int defenseLevel);
    int getDefenseLevel();
    
    void setName(std:: string name);
    std:: string getName();
    
};

#endif

    