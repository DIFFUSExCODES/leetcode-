class Solution {
public:
    int findClosest(int x, int y, int z) {
        int px = abs(z-x) , py = abs(z-y) ;
        if(py > px) return 1 ;
        else if (py == px ) return 0 ;
        else return 2 ;
    }
};