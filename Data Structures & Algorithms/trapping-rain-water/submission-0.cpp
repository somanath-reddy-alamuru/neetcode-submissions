class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int vol=0;
        int leftm=0;
        int rightm=0;
        while(left<right){
            leftm=max(leftm,height[left]);
            rightm=max(rightm,height[right]);
            if(leftm<rightm){
                if(height[left]>leftm){
                    leftm=height[left];
                }else{
                    vol=vol+leftm-height[left];
                }
                left++;
            }else{
                if(rightm<height[right]){
                    rightm=height[right];
                }else{
                    vol=vol+rightm-height[right];
                }
                right--;
            }
        }
        return vol;
    }
};
