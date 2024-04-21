class Solution {
public:

    string convert(string s, int numRows) {
        //base case
        if(numRows<=1){
            return s;
        }
        //make a vector that that can contain the strings
        // we are creating a 2d vector using only this vector
        vector<string>v(numRows,"");
        //maintain two variables j which will help us to make 2d dimension in this vector
        //and direction which will  maintain the direction in j--
        int j=0;
        int direction=-1;
        for(int i=0;i<s.size();i++){
            
            if(j==numRows-1 || j==0){
                direction = direction * -1;
            }
            v[j]+=s[i];
            if(direction == 1){
                j++;
            }
            else{
                j--;
            }
        }
        string ans;
        for(auto &it : v){
            ans+=it;
        }
    return ans;
    }
};
