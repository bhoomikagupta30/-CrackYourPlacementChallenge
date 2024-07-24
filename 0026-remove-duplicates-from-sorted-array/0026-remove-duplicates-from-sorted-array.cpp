class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,k,c=0;

        for(i=0;i<nums.size()-c;i++){

            for(j=i+1;j<nums.size()-c;j++){

                if(nums[i]==nums[j]){
                    for(k=j;k<nums.size()-1-c;k++){
                        nums[k]=nums[k+1];

                    }
                    c++;
                    j--;
                }
            }
        }

        return nums.size()-c;


    }
};