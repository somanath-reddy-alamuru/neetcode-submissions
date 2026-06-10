class Solution {
public:
    string minWindow(string s, string t) {
        int len1=s.length();
        int len2=t.length();
        if(len1<len2){
            return "";
        }else{
            unordered_map<char,int> mp1;
            unordered_map<char,int> mp2;
            
            int formed=0;

            for(int i=0;i<len2;i++){
                mp1[t[i]]++;
            }
            int m=INT_MAX;
            int start=0;
            int left=0;
            int required=mp1.size();
            for(int right=0;right<len1;right++){
                mp2[s[right]]++;
                if(mp1.count(s[right]) && mp2[s[right]]==mp1[s[right]]){
                    formed++;
                }
                while(formed==required){
                    int curr_len=right-left+1;
                    if(curr_len<m){
                        m=curr_len;
                        start=left;
                    }
                    mp2[s[left]]--;
                    if(mp1.count(s[left]) && mp2[s[left]]<mp1[s[left]]){
                        formed--;
                    }
                    left++;
                    

                }



            }
            if(m==INT_MAX){
                return "";
            }
            string ans;
            ans=s.substr(start,m);
            return ans;
        }

    }
};
