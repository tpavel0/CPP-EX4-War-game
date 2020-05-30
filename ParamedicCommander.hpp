#include "Soldier.hpp"

class ParamedicCommander : public  Soldier {
	public:
		ParamedicCommander(int t){
		hp = maxHP = 200;
		damage = 0;
		team = t;
	}

};
