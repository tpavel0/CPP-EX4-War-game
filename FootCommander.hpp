#include "Soldier.hpp"

class FootCommander : public  Soldier {
	public:
		explicit FootCommander(int t){
		hp = maxHP = 150;
		damage = 20;
		team = t;
	}




};
