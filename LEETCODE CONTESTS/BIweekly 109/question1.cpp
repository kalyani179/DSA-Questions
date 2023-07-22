class Solution {
public:
    bool isGood(vector<int>& nums) {
        int count = 1,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=count){
                return false;
            }
            count++;
        }
        if(nums[n-1]!=(count-1)) return false;
        return true;
    }
};