class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptyBottles = 0 , BottlesDrunk = 0 ;
        emptyBottles += numBottles ;
        BottlesDrunk += numBottles ;
        numBottles = 0 ;
        while(true){
            if(emptyBottles >= numExchange){
                emptyBottles -= numExchange ;
                BottlesDrunk++ ;
                emptyBottles++ ;
                numExchange++ ;
            }
            else return BottlesDrunk ;
        }
    }
};