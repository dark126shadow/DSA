class Solution {
public:
//approach https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order
    void nextPermutation(vector<int>& nums) {
        int k =-1;
        int  l=0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                k=i;
            }
           
        }
        if(k==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
         for(int j = k+1;j<nums.size();j++){
                if(nums[j]>nums[k]){
                    l=j;
                }
            }
        swap(nums[k],nums[l]);
        reversevector(nums,k+1);
        return;
    }
void reversevector(vector<int> & nums,int k){
  int start =k;
  int end =nums.size()-1;
  while(start<end){
    swap(nums[start],nums[end]);
    start++;
    end--;
  }
  return;
}
};
