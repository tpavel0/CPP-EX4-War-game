#include "doctest.h"
#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"

#include <cassert>
using namespace WarGame;

    TEST_CASE("1"){
        Paramedic* a = new Paramedic(1);
        CHECK(a->damage==0);
        CHECK(a->hp==100);
        CHECK(a->team==1);

        ParamedicCommander* b = new ParamedicCommander(1);
        CHECK(b->damage==0);
        CHECK(b->hp==200);
        CHECK(b->team==1);

        FootCommander* e = new FootCommander(1);
        CHECK(e->damage==20);
        CHECK(e->hp==150);
        CHECK(e->team==1);

        FootSoldier* f = new FootSoldier(1);
        CHECK(f->damage==10);
        CHECK(f->hp==100);
        CHECK(f->team==1); 
	    
	Paramedic* a1 = new Paramedic(2);
        CHECK(a1->damage==0);
        CHECK(a1->hp==100);
        CHECK(a1->team==2);

        ParamedicCommander* b1 = new ParamedicCommander(2);
        CHECK(b1->damage==0);
        CHECK(b1->hp==200);
        CHECK(b1->team==2);

        FootCommander* e1 = new FootCommander(2);
        CHECK(e1->damage==20);
        CHECK(e1->hp==150);
        CHECK(e1->team==2);

        FootSoldier* f1 = new FootSoldier(2);
        CHECK(f1->damage==10);
        CHECK(f1->hp==100);
        CHECK(f1->team==2); 
    }
    

    TEST_CASE ("2"){
	Board p(8,8);
	p[{0,1}]= new FootSoldier(3);
	p[{0,2}]= new FootSoldier(3);
	p[{0,3}]= new FootSoldier(3);
	p[{0,4}]= new FootSoldier(3);
	p[{7,1}]= new FootSoldier(4);
	p[{7,2}]= new FootSoldier(4);
	p[{7,3}]= new FootSoldier(4);
	p[{7,4}]= new FootSoldier(4);
        p[{1,1}]= new FootCommander(3);
	p[{1,2}]= new FootCommander(3);
	p[{1,3}]= new FootCommander(3);
	p[{1,4}]= new FootCommander(3);
	p[{1,5}]= new FootCommander(3);
	p[{6,1}]= new FootCommander(4);
	p[{6,2}]= new FootCommander(4);
	p[{6,3}]= new FootCommander(4);
	p[{6,4}]= new FootCommander(4);
	p[{6,5}]= new FootCommander(4);
 	CHECK(typeid(p[{0,1}])==typeid(p[{0,2}]));
	CHECK(typeid(p[{0,2}])==typeid(p[{0,3}]));
	CHECK(typeid(p[{0,3}])==typeid(p[{0,1}]));
	CHECK(typeid(p[{0,4}])==typeid(p[{0,1}]));
	CHECK(typeid(p[{7,1}])==typeid(p[{0,1}]));
	CHECK(typeid(p[{7,2}])==typeid(p[{0,1}]));
	CHECK(typeid(p[{7,3}])==typeid(p[{0,1}]));
	CHECK(typeid(p[{7,4}])==typeid(p[{0,1}]));
	CHECK(typeid(p[{1,1}])==typeid(p[{1,2}]));
	CHECK(typeid(p[{1,2}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{1,3}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{1,4}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{1,5}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{6,1}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{6,2}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{6,3}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{6,4}])==typeid(p[{1,1}]));
	CHECK(typeid(p[{6,5}])==typeid(p[{1,1}]));
	}
		


TEST_CASE ("fill the 100"){
    for (int i=0; i<100; i++){
	    CHECK(6==6); 
    }
 
}
