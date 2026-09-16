class Solution {
  public:
 
    int countFriendsPairings(int n) {
       //base case
       if(n==0|| n==1){
           return 1;
       }
       // friend n has two choices
       //stay single or pair with remaining (n-1) friend
       //after making pair, n-2 options left
       int ans=countFriendsPairings(n-1)+(n-1)*countFriendsPairings(n-2);
       return ans;
        
    }
};
