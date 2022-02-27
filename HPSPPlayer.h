#include "Player.h"

class HPSPPlayer : public Player{
    private:
        int HP;
        int SP;
    public:
    
    HPSPPlayer() : Player() {
        HP = 100;
        SP = 100;
    }   
    int isGameOver(){
        if(HP <= 0 || SP <= 0){
            return 1;
        }
        else if (currentLocation->info.getID() == 1){
            return 2;
        }
        else if(currentLocation->info.getGoal() == 1){
            return 1;
        }
        else if(currentLocation->info.getID() == 0 && currentLocation->info.getGoal() == 0){
            return 0;
        }
        else{
            return 0;
        } 
    }
    void resetPlayerStats(){
        HP = 100;
        SP = 100;
    }
    void reportStats(){
        cout<<"Player Stats: "<<endl;
        cout << "\tHit Points: " << HP << endl;
        cout << "\tSanity Points: " << SP << endl;
    }
	
	virtual void consume(Map* mapptr){

    };
	virtual void use(Map* mapptr){

    };
};