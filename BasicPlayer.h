#include "Player.h"

using namespace std;

class Basic : public Player{
    public:
        int isGameOver(){
            return 0;
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