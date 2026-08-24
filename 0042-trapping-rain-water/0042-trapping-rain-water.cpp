class Solution {
public:
    int trap(vector<int>& height) {
    
        int n = height.size();


        //checking leftmax
        int leftmax[n];
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i-1]);
        }
        //checking rightmax
        int rightmax[n];
        rightmax[n-1]=height[n-1];
        for(int i = n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i+1]);
        }
        //calculating trapwater

        int trapwater = 0;
        for(int i = 0 ; i<n ; i++){
            int currentwater = min(leftmax[i],rightmax[i])-height[i];
            if(currentwater>=0){
            trapwater+=currentwater;
            }
        }
        return trapwater ;
    }
};