class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target= -nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[right]+nums[left];
                if(sum<target)left++;
                else if(sum>target)right--;
                else{
                    vector<int> triplet={nums[i],nums[left],nums[right]};
                    ans.push_back(triplet);
                    while(left<right && nums[left]==triplet[1])left++;
                    while(left <right && nums[right]==triplet[2])right--;
                }
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])i++;

        }
        return ans;

    }
};
