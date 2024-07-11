class Solution {
public:
//use two pointer approach
//use a hashmap  to store ans an point to sum to get the ans
    int threeSumClosest(vector<int>& nums, int target) {
        //intialize ans with max;

        int ans=10000000;
        //initialize a hashmmap;

        map<int,int> m;
        int dif = 0;
        //sort the array
        sort(nums.begin(),nums.end());
        //fix one number
        for(int i=0;i<nums.size();i++){
            //use two pointer approach
            int j=i+1;
            int k = nums.size()-1;
            while(j<k){
                //calculate the sum
                int sum = nums[i]+nums[k]+nums[j];
            //base case
                if(sum == target){
                    return sum;
                }
                //calculate the difference to get the closes element to target
                
                else if(target>sum){
                 dif = target-sum;
                 j++;
                }
                else{
                     dif = sum - target;
                     k--;
                }
                //store the difference in hashmap to point towards sum
                m[dif]= sum;
                ans = min(dif,ans);
    
            }
        }
    
        return m[ans];
    }
};
