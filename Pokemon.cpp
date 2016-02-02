/*
File: Pokemon.cpp
Author: Hanna Hayden
Date: 2/2/16
Description: Implements Pokemon class
*/

#include "Pokemon.h"

Pokemon::Pokemon()
{
    m_hp = 0;
    m_attackLevel = 0;
    m_defenseLevel = 0;
    m_name = "";
    d20 = Dice(20);
    d6 = Dice(6);
    
}

void reduceHP(int amount)
{
    m_hp = m_hp-amount;
}
    

void Pokemon::setHP(int myHP)
{
    m_hp = myHP;
}

int Pokemon::getHP() const
{
    return m_hp;
}

void Pokemon::setAttackLevel(int myAttackLevel)
{
    m_attackLevel = myAttackLevel;
}
        
int Pokemon::getAttackLevel() const
{
    return m_attackLevel;
}

void Pokemon::setDefenseLevel(int myDefenseLevel)
{
    m_defenseLevel = myDefenseLevel;
}

int Pokemon::getDefenseLevel() const
{
    return m_defenseLevel;
}

void Pokemon::setName(std::string myName)
{
    this->name = myName;
}

std::string Pokemon::getName() const
{
    return this->name;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        