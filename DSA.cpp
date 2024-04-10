#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> temp;
        temp=nums;
 sort(temp.begin(),temp.end());
 //initializing pointers
 int leftptr = 0 ;
 int n = temp.size();
 int rightptr = n-1;
 int left = 0;
 int right=0;
vector<int> ans;
//iterating int temp array
while(leftptr<=rightptr){
    //will break at the 2 numbers whose sum is target
    //leftptr=first number
    //rightptr=second number
    if(temp[leftptr]+temp[rightptr]== target){
        break;
    }
    else if(temp[leftptr]+temp[rightptr]>target){
        rightptr--;
    }
    else{
        leftptr++;
    }
}
//assigning the indexes by comparing to the nums array
    for(int i= 0;i<n;i++){
        if(nums[i]==temp[leftptr]){
            ans.push_back(i);
        }
        else if(nums[i]==temp[rightptr]){
            ans.push_back(i);
        }
    }

 return ans;
    
  }
};