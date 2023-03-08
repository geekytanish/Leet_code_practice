class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i=i+1){
            for(int j=i+1; j<nums.size(); j=j+1){
                if(nums[i]>nums[j]){swap(nums[i], nums[j]);}
            }
        }
    }
};
