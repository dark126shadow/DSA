class Solution {
public:
//approach reverse the  number and compare to the original number if same is palindrome else not
    bool isPalindrome(int x) {
        //if the number is negative the then it is automatically false as - would be in last
       if(x<0){
        return false;
       }
        double r=0;
        int temp = x;
        int carry =0;
        //reverse the number
        while(x!=0){
        carry = x%10;
        x= x/10;
            r=r*10+carry;
        }
        //compare the number
        if(temp==r){
            return true;
        }
        else {
            return false;
        }
    }
};
