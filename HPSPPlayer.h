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
        //if(currentLocation->info.getGoal() == 1)
    }
    void resetPlayerStats(){
        HP = 100;
        SP = 100;
    }
    void reportStats(){
        cout << "SP: " << SP << endl;
        cout << "HP: " << HP << endl;
    }
	
	virtual void consume(Map* mapptr){

    };
	virtual void use(Map* mapptr){

    };
};