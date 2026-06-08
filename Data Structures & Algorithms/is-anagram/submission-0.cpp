class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> set1;
        multiset<char> set2;
        if(s.length()!=t.length()){
            return false;
        }
        else{
            for(int i=0;i<s.length();i++){
                set1.insert(s[i]);
                set2.insert(t[i]);
            }
        }

        if(set1==set2){
            return true;
        }

        return false;
        
        
    }
};
