class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int left=0;
        int maxf=0;
        int len=0;
        unordered_map<char,int> mp;
        for(int right=0;right<n;right++){
              mp[s[right]]++;
              maxf=max(maxf,mp[s[right]]);
              if(right-left+1-maxf>k){
                mp[s[left]]--;
                left++;
              }
             len=max(len,right-left+1);
        }
        return len;

    }
};
