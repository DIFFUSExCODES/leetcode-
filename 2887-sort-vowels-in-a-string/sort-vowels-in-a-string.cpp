class Solution {
public:
    string sortVowels(string s) {
        int n = s.length() ;
        string t = s ;
        vector<char> srt;
        int c = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            if (isVowel(s[i])) {
                srt.push_back(s[i]);
            }
        }
        sort(srt.begin(), srt.end());
        for(int i = 0 ; i < n ; i++ ){
            if (isVowel(s[i])) {
                t[i] = srt[c] ;
                c++ ;
            }
        }
        return t ;
    }
    bool isVowel(char ch) {
        return ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
               ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
};