class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int maxv=0;
        while(left<right){
            int vol=min(heights[left],heights[right])*(right-left);
            maxv=max(vol,maxv);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxv;
    }   
};
