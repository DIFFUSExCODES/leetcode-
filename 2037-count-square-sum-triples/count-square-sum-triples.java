class Solution {
    public int countTriples(int n) {
        int count = 0;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                int r = (int)Math.sqrt(i*i + j*j) ;
                if((i*i + j*j == r*r)&&(r*r <= n*n)) count++ ;
            }
        }
        return count;
    }
}