class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int n=nums.size();
        int i=1;
        while(i<n && nums[i]==nums[i-1]+1){
            i++;
        }
        int x=nums[i-1]+1;
        unordered_set<int> numSet(nums.begin(),nums.end());
        while(numSet.count(x)){
            x++;
        }
        return x;
    }
};