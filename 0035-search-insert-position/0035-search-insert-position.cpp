class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int i,c=0;

        // for(i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         c=1;
        //         break;
        //     }
        // }

        // if(c==1){
        //     return i;
        // }
        // else{
        // int j=0;
        // sort(nums.begin(),nums.end());

        // while(j<nums.size() && target>nums[j]){
        //     j++;
        // }

        // return j;

        // }

        int low=0;
        int high=nums.size()-1;
        int mid;

        

        while(low<=high){
            mid=(low+high)/2;

            if(target>nums[mid]){
                low=mid+1;
            }
            else{
                if(target<nums[mid]){
                    high=mid-1;
                }
                else{
                    return mid;
                }
            }
        }

        return low;












    }
};