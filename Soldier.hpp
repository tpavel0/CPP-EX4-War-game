#pragma once
#include <stdlib.h>
#include <iostream>

class Soldier{
    public:
    int hp;
	int maxHP;
    int damage;
    int team;

	Soldier(){}
    Soldier(int HP, int dmg, int t) : hp(HP), maxHP(HP), damage(dmg), team(t){} 

    int getHp(){
	    return hp;
    }
    int getDamge(){
	    return damage;
    }
    int getTeam(){ 
	    return team;
    }
	
    void attack(Soldier s);

};
