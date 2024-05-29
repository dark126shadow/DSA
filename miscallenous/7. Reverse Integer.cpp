class Solution {
public:
//approach

    int reverse(int x) {

        long ans =0;
        
        while(x!=0){
           
             ans = ans*10+x%10;
             x=x/10;
        }
        //check to see if it exceeds limit
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        return ans;
    }
};
