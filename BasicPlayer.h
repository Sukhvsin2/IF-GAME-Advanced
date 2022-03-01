#include "Player.h"

using namespace std;

class Basic : public Player{
    public:
        int isGameOver(){
<<<<<<< HEAD
            return ((currentLocation->info.getID() == true || currentLocation->info.getGoal()== true) ? 1 : 0);
=======
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
>>>>>>> 8f87fe2328a6213b290baffb58c43497d4f1e35f
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