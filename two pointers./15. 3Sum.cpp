class Solution {
public:
//use two pointer approach but keep 1 pointer stationary and get all o fits summ
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
      set<  vector<int>> temp;
sort(nums.begin(),nums.end());

        int n = nums.size();
      

for(int k =0;k<n;k++){
    int i=k+1;
    int j=n-1;
        while(i<j){
            int sum= nums[i]+nums[k]+nums[j];
            if(sum <0){

         
                i++;
            }
            else if(sum==0){
                  temp.insert({nums[i], nums[j], nums[k]});
                i++;
                j--;
                
            }
            else{
                j--;
            }
        }  

}         
 for(auto triplets : temp)
            ans.push_back(triplets);
                                                    
        return ans;
    }
};
