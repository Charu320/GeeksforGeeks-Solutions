class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(n==0) return 0;
        if(n==1) return 1;
        if(p==0) return 1;
        
        int ans=recursivePower(n,p-1)*n;
        return ans;
    }
};
