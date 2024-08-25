class Solution {
public:
//divide the numerator into the multiples of 2 
//multiply it by the denomitore 
//add it 
    int divide(int dividend, int divisor) {
        if(dividend==divisor){
            return 1;

        }
        bool sign = true;
        if(dividend<0 && divisor>0){
            sign=false;
        }
        else if(divisor<0 && dividend>=0){
            sign=false;
        
        }
        long d = abs(divisor);
        long n = abs(dividend);
        long ans=0;

        while(n>=d){
                  int count = 0;
                  while(n>=(d<<(count+1))){
                    count = count +1;

                  }
            ans+= (1<<count);
            n=n-(d<<count);


        }
        
      if (ans == (1 << 31) && sign == 1) return INT_MAX;
      if(sign==false){
        return -1* ans;
      }
      else return ans;
    }
};
