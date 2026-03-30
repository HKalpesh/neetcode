class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> phnbook;
        int n=nums.size();
        for (int i=0;i<n;i++){
            phnbook[nums[i]]=i;
        }
        for (int i =0;i<n;i++){
            int diff=target-nums[i];
            if (phnbook.count(diff)&& phnbook[diff]!=i){
                return {i,phnbook[diff]};
        }
        }
        return {};
    }
};
