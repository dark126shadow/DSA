class Solution {
public:
//two pointer approach
    int maxArea(vector<int>& height) {
        //initialize two pointer i from start and j from end
        int i =0;
        int j= height.size()-1;

       int max_area=0;
       //get the area for every instances
       while(i<j){
        int area = min(height[i],height[j])*(j-i);
        max_area = max(area,max_area);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
        
       }
       return max_area;
    }
};
