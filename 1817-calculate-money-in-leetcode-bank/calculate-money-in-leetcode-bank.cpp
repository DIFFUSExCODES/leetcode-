class Solution {
public:
    int totalMoney(int n) {
        int w = n/7 ;
        int money = 0 ;
        for(int i = 0 ; i < w ; i++ ){
            money += (7+1+i)*(7+i)/2 - (1+i)*(i)/2 ;
            cout<< money << "\n";
        }
        money += (n%7 + w )*(n%7 + w + 1)/2 - (w+1)*(w)/2 ;
        cout<< money;
        return money ;
    }
};