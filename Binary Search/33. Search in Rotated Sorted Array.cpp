class Solution {
public:
    int search(vector<int>& nums, int target) {
    int start =0;
    
    int pivot=-1;
    int end = nums.size()-1;
   
    for(int i = 0;i<nums.size()-1;i++){
        if(nums[i+1]<nums[i]){
            pivot=i+1;
            break;
        }
    }

    if(pivot!=-1){
    if(target>=nums[0]){
        start = 0;
        end = pivot -1;
     }
     
    else if(target<=nums[nums.size()-1]){
        start = pivot;
        }
    }
    while (start <= end) {
            int mid = (start + end) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

    return -1;

    }
};
