class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptyBottles = 0 , BottlesDrunk = 0 ;
        while(true){
            emptyBottles += numBottles ;
            BottlesDrunk += numBottles ;
            numBottles = 0 ;
            if(emptyBottles >= numExchange){
                emptyBottles -= numExchange ;
                numBottles++ ;
                numExchange++ ;
            }
            if(emptyBottles < numExchange && numBottles == 0) return BottlesDrunk ;
        }
    }
};