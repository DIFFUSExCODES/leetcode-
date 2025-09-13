class Solution {
public:
    int maxFreqSum(string s) {
        int con[26] = {0} ;
        int vov[26] = {0} ;
        int n = s.length(), maxc = 0, maxv = 0;
        set<char>st={'A','E','I','O','U'};
        transform(s.begin(), s.end(), s.begin(), ::toupper) ;
        for(int i = 0 ; i < n ; i++ ){
            if(st.count(s[i])){
                vov[s[i] - 65]++ ;
                maxv = max( (int)maxv , (int)vov[s[i] - 65]) ;
            }
            else{
                con[s[i] - 65]++ ;
                maxc = max( (int)maxc , (int)con[s[i] - 65]) ;
            }
        }  
        return maxc+maxv ;      
    }
};