class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int remain=target-nums[i];
            if(mp.find(remain)!=mp.end()){
                return {mp[remain],i};
            }
            mp[nums[i]]=i;
        }
        return {};

        // int i=0,j=nums.size()-1;
        // while(i<=j){
        //     int sum=nums[i]+nums[j];
        //     if(target==sum){
        //         return {i,j};
        //     }else if(target>sum){
        //         i++;
        //     }else{
        //         j--;
        //     }
        // }
        // return{i,j};
    }
};
