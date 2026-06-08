class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> arr;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(arr.find(diff)!=arr.end()){
                return {arr[diff],i};
            }
            arr[nums[i]]=i;
        }
        

        
    }
};
