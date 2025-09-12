class Solution {
public:
    bool doesAliceWin(string s) {
        int c = 0 ;
        int n = s.length();
        for(int i = 0 ; i < n ; i++ ){
            s[i] = toupper(s[i]) ;
            if(up(s[i])){
                c++ ;
            } 
        }
        if(c > 0 )
        return true ;
        else
        return false ;
    }
    bool up (char c){
        return c=='A'||c=='E'||c=='I'||c=='O'||c=='U' ;
    }
};