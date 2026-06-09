class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1=s1.length();
        int len2=s2.length();
        if(len1>len2){
            return false;
        }
        int left=0;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        unordered_map<char,int> mp3;
        for(int i=0;i<len1;i++){
            mp1[s1[i]]++;
        }
        for(int i=0;i<len1-1;i++){
            mp2[s2[i]]++;
        }

        for(int right=len1-1;right<len2;right++){
             mp2[s2[right]]++;
             if(mp2==mp1){
                return true;
             }else{
                mp2[s2[left]]--;
                if(mp2[s2[left]]==0){
                    mp2.erase(s2[left]);
                }
                left++;
                
             }
        }
        return false;

    }
};
