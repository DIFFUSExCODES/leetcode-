class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area = 0 ;
        int len = 0 ; 
        for(int i = 0 ; i < dimensions.size() ; i++ ){
            if(len < dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]){
                len = dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1] ;
                area = dimensions[i][0]*dimensions[i][1] ;
            }
            else if(len == dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]){
                area = max(area,dimensions[i][0]*dimensions[i][1]) ;
            }
        }
        return area ;
    }
};