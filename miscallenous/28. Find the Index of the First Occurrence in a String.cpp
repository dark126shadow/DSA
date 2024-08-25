class Solution {
public:
// three pointers two traversing haystack to find all combinations;
//one comparing it to needle
//reset j after every iteration

    int strStr(string haystack, string needle) {
      int j =0;
      int ans = -1;
      for(int i=0;i<haystack.size();i++){
        j=0;
        for(int k=i;k<haystack.size();k++){
        if(haystack[k]==needle[j] && j<needle.size()){
            ans= k;
            if(j==needle.size()-1){
                return ans-(needle.size()-1);
            }
            j++;
        }
        else{
            ans=-1;
            j=0;
            break;
        }
        }
      }
      return -1;
    }
};
