class Solution {
public:
    int trap(vector<int>& currentHeight) {
        int n=currentHeight.size();
        int leftMax=0;
        int rightMax=0;
        int maxHeight=currentHeight[0];
        int index=0;
        int water=0;

        // finding the maximum height nof all the building
        for( int i=0; i<n;i++)
        {
            if(currentHeight[i]>=maxHeight)
            {
                maxHeight=currentHeight[i];
                index=i;
            }
        }
         
         // process left
        for( int i=0;i<index;i++)
        {
            if(leftMax>currentHeight[i])
            {
                water+=leftMax-currentHeight[i];
            }
            else 
            leftMax=currentHeight[i];
        }
         // process right
        for( int i=n-1;i>index;i--)
        {
            if(rightMax>currentHeight[i])
            {
                water+=rightMax-currentHeight[i];
            }
            else 
            rightMax=currentHeight[i];
        }

        return water;
    }
};