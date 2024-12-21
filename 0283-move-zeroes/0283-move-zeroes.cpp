class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int>v1;

        // int i,j;

        // for(i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         v1.push_back(nums[i]);
        //     }
        // }

        // int n=nums.size();
        // int k=v1.size();

        // if(k<n){

        //     while(v1.size()<n){
        //         v1.push_back(0);

        //     }
        // }

        // for(i=0;i<nums.size();i++){
        //     nums[i]=v1[i];
        // }

        int k=0;

        int i,j;

        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }

        for(i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};