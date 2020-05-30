#include "Soldier.hpp"

class Paramedic : public  Soldier {
	public:
		Paramedic(int t){
		hp = maxHP = 100;
		damage = 0;
		team = t;
	}


};
