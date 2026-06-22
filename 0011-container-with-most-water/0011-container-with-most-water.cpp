class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxArea=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int width=j-i;
            int minheight=min(height[i],height[j]);
            int area=minheight*width;
            maxArea=max(area,maxArea);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxArea;
    }
};