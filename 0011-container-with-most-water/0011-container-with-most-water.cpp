class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0, left, right, h;
        left=0; right=height.size()-1;
        while(left<right){
            h=min(height[left], height[right]);
            if(h*(right-left)>max)
                max=h*(right-left);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return max;
    }
};