class Solution {
public:
    int maximum69Number (int num) {
        int r = 0 , copy = num , rev = 0 , ret = 0 , c = 0 ;
        while (copy > 0){
            r = copy % 10 ;
            copy = copy / 10 ;
            rev = rev * 10 + r ;
        }

        while (rev > 0){
            r = rev % 10 ;
            if ((r == 6) && (c == 0)){
                r = 9 ;
                c = 1 ;
            }
            rev =  rev / 10 ;
            ret = ret * 10 + r ;
        }

        return ret ;
    }
};