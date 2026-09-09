class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int s=0 , e=height.size()-1;
        while(s<e)
        {
            int w=e-s;
            int h=min(height[s],height[e]);
            int curr_area=w*h;
            max_area=max(curr_area,max_area);
            if( height[s]<height[e])
            {
                s++;
            }
            else
            e--;

        }
        return max_area;
    }
};