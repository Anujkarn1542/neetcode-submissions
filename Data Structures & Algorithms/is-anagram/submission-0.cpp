class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<int,int>freq;
        for(auto it:s){
            freq[it]++;
        }
        for(auto it:t){
            freq[it]--;
        }
        for(auto it:freq){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
