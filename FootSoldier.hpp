#include "Soldier.hpp"

class FootSoldier : public  Soldier {
	public:
		explicit FootSoldier(int t){
		hp = maxHP = 100;
		damage = 10;
		team = t;
	}
};
