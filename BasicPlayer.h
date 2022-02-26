#include "Player.h"

using namespace std;

class Basic : public Player{
    public:
        int isGameOver(){
            if (currentLocation->info.getID() == 1){
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
        };
        void resetPlayerStats(){
            // No Use
        };
        void reportStats(){
            cout<<"No player statistics to report."<<endl;
        };
        void consume(Map* mapptr){};
        void use(Map* mapptr){};
};