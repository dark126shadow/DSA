class Solution {
public:
//enhanced version of 3wsum just fix two variables and and use two pointer approach
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
   
        vector<vector<int>> ans;
        //sort the arrays
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                int k = j+1;
                int l=nums.size()-1;
                while(k<l){
                    long long sum = (long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l];
                    //bool variable to check for duplicate 
                     bool flag =0;
                    if(sum==target){
                       vector<int> temp;
                       temp.push_back(nums[i]);
                       temp.push_back(nums[j]);
                       temp.push_back(nums[k]);
                       temp.push_back(nums[l]);
                      
                       if(ans.size()!=0 ){
                        
                            for(int w =0;w<ans.size();w++){
                               //update the flag if there are duplicate variables
                            if(temp==ans[w]){
                           flag =1;
                           break;
                            }
                            
                         }
                            if(flag ==0){
                            ans.push_back(temp);
                            flag=0;
                         }
                            }
                       else {
                            ans.push_back(temp);
                       }
                        
                        
                     
                        k++;
                        l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
           
        }
        
     return ans;
    
    }
};
