class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //intitialize a hashmap
        unordered_map<char,int> m;
        //for sliding window intialize 2 variables left and right
        int left = 0;
    
        int n = s.size();
        int ans =0;
        //initialize a loop iterating throught the string
        for(int right=0;right<n;right++){
            //keep track of repeated elements with use of hashing
            m[s[right]]++;
            //use the sliding window approach as if a repeated element comes we exclude it from our window
            while(m[s[right]]>1){
              m[s[left]]--;
              left++;
                
            }
            //calculate the answer
             ans = max(ans,right-left+1);
            
        }
        return ans;
    }
};
