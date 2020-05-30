#include "Board.hpp"
#include <iostream>
#include <limits>
#include <math.h>
#include "Soldier.hpp"

using namespace std;

namespace WarGame {


         Soldier*& Board :: operator[](std::pair<int,int> location){
             return board[location.first][location.second];
        }

        Soldier* Board:: operator[](std::pair<int,int> location) const{
            return  board[location.first][location.second];
        }

        void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction) {
            int check =0;
            if ( player_number ==1 ) check =2;
            else check =1;
			// Up
            if (direction == Up)
	    {
            	if(source.first + 1  < 0) throw ("std::invalid_argument");
             	else if (board[source.first+1][source.second] != nullptr){
			throw ("std::invalid_argument");
		}
                Soldier *s = board[source.first][source.second];
                board[source.first][source.second] = nullptr; // to check
                board[source.first+1][source.second] = s;
                Soldier *target=checkClose( {source.first+1,source.second} , check );
               //need to add attack
            }
            // Down
            if (direction == Down){
            if(source.first - 1  > board.size()){
		    throw ("std::invalid_argument");
	    }
             else if (board[source.first-1][source.second] != nullptr) throw ("std::invalid_argument");
                Soldier *s = board[source.first][source.second];
                board[source.first][source.second] = nullptr; // to check
                board[source.first-1][source.second] = s;
                Soldier *target=checkClose( {source.first-1,source.second} , check );
                //need to add attack
            }
	    //Right
            if (direction == Right){
            if(source.second + 1  > board[0].size()){
		    throw ("std::invalid_argument");
	    }
             else if (board[source.first][source.second+1] != nullptr) throw ("std::invalid_argument");
                Soldier *s = board[source.first][source.second];
                board[source.first][source.second] = nullptr; // to check
                board[source.first][source.second+1] = s;
                Soldier *target=checkClose( {source.first,source.second+1} , check );
               // need to add attack
            }
            //Left
            if (direction == Left){
            if(source.second -1 < 0){
		    throw ("std::invalid_argument");
	    }
             else if (board[source.first][source.second-1] != nullptr) throw ("std::invalid_argument");
                Soldier *s = board[source.first][source.second];
                board[source.first][source.second] = nullptr; // to check
                board[source.first][source.second-1] = s;
                Soldier *target=checkClose( {source.first,source.second-1} , check );
                //need to add attack
            }
        }

         bool Board::has_soldiers(uint player_number) const {
            int count=0;
             for(int i=0; i<board.size();i++){
                 for(int j=0; j<board[i].size();j++){
                     Soldier* s= board[i][j];
                     if(s!=nullptr && s->team==player_number){
                        return true;
                     }
                 }
             }
             return false;
         }

        Soldier* Board:: checkClose(std::pair<int,int> source , uint player_number){
            int min_dis=std::numeric_limits<int>::max();
            Soldier *s = nullptr;
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                    if(board[i][j]!=nullptr && i!=source.first && j!=source.second ){
                        if(board[i][j]->team==player_number){
                            int temp=sqrt(pow(i-source.first,2)+pow(j-source.second,2)); //distance
                            if(temp<min_dis){
                                min_dis=temp;
                                s=board[i][j];
                            }
                        }
                    }    
                }
            }
        return s;
        }
}
