class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;
        for(int i = 0; i < nums.size(); i++){
            int temp = target - nums[i];
            if(result.count(temp)){
                return {result[temp] ,i};
            }
            else{
                result[nums[i]] = i;
            }
        }
        return {};
    }
};