/*
File: Colosseum.cpp
Author: Hanna Hayden
Date: 2/2/16
Description: Colosseum code
*/

#include <iostream>

bool Pokemon::attack(const Pokemon& attacker, Pokemon& defender)
{
    int attackBonus = d20.roll();
    std::cout << this-> m_name << " rolls an attack bonus of: " << attackBonus << std.endl;
    int defenseBonus = d20.roll();
    std::cout << attacker.getName() << " rolls a defense bonus of: " << defenseBonus << std.endl;
    if((this->attackLevel+attackBonus)>(attacker.getDefenseLevel()+defenseBonus))
    {
        std::cout << "The attack hits! 3-D6 damage being dealt... " << std::endl;
        int roll1 = d6.roll();
        int roll2 = d6.roll();
        int roll3 = d6.roll();
        int damage = roll1+roll2+roll3;
        std::cout << "The rolls are "<< roll1 << ", " << roll2 << ", and " << roll3 <<", totaling " << damage << " damage!" << std::endl;
        if((attacker.getHP()-damage)<1)
        {
            std::cout << defender.getName() << " has been defeated!!" << std::endl;
            return true;
        }
        else
        {
            opponent.setHP(opponent.getHP-damage);
            return false;
        }
    }
    else
    {
        std::cout << "The attack missed!" << std::endl;
        return false;
    }
}

void Pokemon::userBuild();
{
    std::cout << "Please name your Pokemon: ";
        std::string userName;
        std::cin >> userName;
        m_name = userName;
        
        bool ifValid = false;
        while(!ifValid)
        {
            std::cout <<"How many hit points will it have? (1-50)";
            int userHP;
            std::cin >> userHP;
            if(userHP>0 && userHP<51)
            {
                m_hp = userHP;
                ifValid = true;
            }
            else
            {
                std::cout << "The value must be between 1 and 50. Please try again!" << std::endl;
            }
        }
        
        ifValid = false;
        std::cout << "Next, split 50 points between attack level and defense level." << std::endl;
        std::cout << "Enter your attack level (1-49): ";
        while(!ifValid)
        {
            int userAttackLevel;
            std::cin >> userAttackLevel;
            if(userAttackLevel>0 && userAttackLevel<50)
            {
                m_attackLevel = userAttackLevel;
                ifValid = true;
            }
            else
            {
                std::cout << "The value must be between 1 and 49. Please try again!" <<std::endl;
            }
        }
        ifValid = false;
        std::cout << "Enter your defense level (1-" << (50-m_attackLevel) << "): ";
        while(!ifValid)
        {
            int userDefenseLevel;
            std::cin >> userDefenseLevel;
            if(userDefenseLevel>0 && userDefenseLevel<=(50-attackLevel))
            {
                defenseLevel = userDefenseLevel;
                ifValid = true;
            }
            else
            {
                std::cout << "The value must be between 1 and " << (50-attackLevel) << ".";
            }
        }
}

void play(Pokemon& p1, Pokemon& p2)
{
    Dice d2;
    d2 = Dice(2);
        
    std::cout << "Player 1 will flip a coin to determine play order. Heads goes first: " << std::endl;
    if(d2.roll()>1)
    {
        std:: << "Player 1 flipped a heads to go first!" << std::endl;
        pokemon1 = firstPokemon;
        pokemon2 = secondPokemon;
    }
    else
    {
        std::<< "Player 1 flipped a tails to go second." << std::endl;
        pokemon1 = secondPokemon;
        pokemon2 = firstPokemon;
    }
    
    bool isGameOver = false;
    int round = 1;
    
   
     while(!isGameOver)
    {
        std::cout << "Round " << round << "!" <<std::endl;
        std::cout << pokemon1.getName() << " is attacking " <<pokemon2.getName() << std::endl;
        isGameOver = pokemon1.attack(pokemon2);
        
        if(!isGameOver)
        {
            std::cout << pokemon2.getName() << " is attacking " <<pokemon1.getName() <<std::end1;
            isGameOver = pokemon2.attack(pokemon1);
        }
        round++;
        if(round>10 && !isGameOver)
        {
            std::cout << "Both Pokemon are still standing! It's a draw." <<std::endl;
            isGameOver = true;
        }
    }
    
    return 0;
}





























