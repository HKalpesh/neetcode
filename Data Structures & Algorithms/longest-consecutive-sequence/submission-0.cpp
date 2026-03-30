class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> dup;
        for(auto &i:nums){
            dup[i]++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(dup.find(nums[i]-1)==dup.end()){
                int curr=nums[i];
                int curr_count=1;
                while(dup.find(curr+1)!=dup.end()){
                    curr++;
                    curr_count++;
                }
                count=max(count,curr_count);
        }
    }
        return count;
    }
};
