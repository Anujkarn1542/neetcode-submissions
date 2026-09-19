class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto it:nums){
            freq[it]++;
            if(freq[it]>1){
                return true;
            }
        }
        return false;
    }
};