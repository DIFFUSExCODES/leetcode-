class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int emptyBottles = 0 , BottlesDrunk = 0 ;
        emptyBottles += numBottles ;
        BottlesDrunk += numBottles ;
        numBottles = 0 ;
        while(true){
            if(emptyBottles >= numExchange){
                emptyBottles -= numExchange ;
                BottlesDrunk++ ;
                emptyBottles++ ;
            }
            else return BottlesDrunk ;
        }
    }
};