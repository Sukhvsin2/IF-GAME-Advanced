#include "Player.h"

using namespace std;

class Basic : public Player{
    public:
        int isGameOver(){
            return ((currentLocation->info.getID() == true || currentLocation->info.getGoal()== true) ? 1 : 0);
        };
        void resetPlayerStats(){
            // No Use
        };
        void reportStats(){
            // No Use
        };
        void consume(Map* mapptr){};
        void use(Map* mapptr){};
};