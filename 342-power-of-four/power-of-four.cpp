class Solution {
public:
    double pow4(double i){
            i = i/4;
        if(i > 1) return pow4(i);
        if(i < 1) return -1; 
        if(i == 1) return 1;
        return pow4(i);
    }
    bool isPowerOfFour(double n) {
        if(n < 1) return false;
        if(n == 1) return true;

        double result = pow4(n);
        if(result == 1) return true;
        return false;
    }
};