class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // base case
        if(n==0){
            return 0;
        }
        //from -> aux
        int move1=towerOfHanoi(n-1, from, aux, to);
        //from -> to
        int move2=1;
        //aux -> to
        int move3=towerOfHanoi(n-1,aux, to , from);
        //total moves
        return move1+move2+move3;
        
    }
};