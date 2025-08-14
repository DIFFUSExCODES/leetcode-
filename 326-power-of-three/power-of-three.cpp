class Solution {
public:
    double pow3(double i){
            i = i/3;
        if(i > 1) return pow3(i);
        if(i < 1) return -1; 
        if(i == 1) return 1;
        return pow3(i);
    }
    bool isPowerOfThree(double n) {
        if(n < 1) return false;
        if(n == 1) return true;

        double result = pow3(n);
        if(result == 1) return true;
        return false;
    }
};