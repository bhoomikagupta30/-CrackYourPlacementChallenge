class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,c=0;
        vector<int>a;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    c=1;
                    a.push_back(i);
                    a.push_back(j);
                    break;
                }
                if(c==1){
                    break;
                }
            }
        }
       return a; 
    
} 
};