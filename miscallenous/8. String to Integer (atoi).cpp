class Solution {
public:
//the approach is steady first we check spaces then sign and then number and at last check if its out of 32 bit
    int myAtoi(string s) {
        //declare three variables
        int i=0;
        double r=0;
        int sign = 1;
        //first check for spaces 
        while(i<s.length() && s[i]==' '){
            i++;
        }
        //second checck for sign 
        if(s[i]=='-'){
            sign = -1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        //check for numbers
        while(i<s.length() && s[i]>='0' && s[i]<='9'){
                r=r*10+(s[i]-'0');
                i++;
            
        }
        //check if its out of range
        if(r>INT_MAX && sign ==-1){
            return INT_MIN;
        }
        else if(r>INT_MAX){
            return INT_MAX;
        }
        else{
        return r*sign;
        }
    }
};
