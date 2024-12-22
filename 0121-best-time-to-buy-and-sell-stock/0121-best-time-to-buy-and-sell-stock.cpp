class Solution {
public:
    int maxProfit(vector<int>& nums) {
    //TIME LIMIT EXCEEDED
    //    int diff=0;
    //    int i,j;

    //    i=0;
    //    j=1;

    //    while(i<nums.size()){
    //       j=i+1;
    //      while(j<nums.size()){

    //         if(nums[j]-nums[i]>diff){
    //             diff=nums[j]-nums[i];
    //         }
    //         j++;
    //      }
    //      i++;
    //    }

    //    return diff;

    int maxprof=0;
    int diff=0;
    int minval=nums[0];
    int i,j;

    for(i=1;i<nums.size();i++){
        
        if(nums[i]<minval){
            minval=nums[i];

        }
        else{
            if(diff<nums[i]-minval){
                diff=nums[i]-minval;
            }
        }
    }

    return diff;





        
        

        
    }
};