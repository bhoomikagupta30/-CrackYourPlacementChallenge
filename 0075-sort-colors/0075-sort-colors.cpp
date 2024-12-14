class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,min;

        min=nums[0];

        for(i=0;i<nums.size()-1;i++){

            for(j=0;j<nums.size()-1;j++){

                if(nums[j+1]<nums[j]){

                    swap(nums[j],nums[j+1]);

                }
            }


        }

        
    }
};