#include "Soldier.hpp"

class SniperCommander : public  Soldier {
	public:
		Sniper(int t){
		hp = maxHP = 120;
		damage = 100;
		team = t;
	}

};
