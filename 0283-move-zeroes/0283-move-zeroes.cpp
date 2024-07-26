class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j,count=0;
        
        for(i=0;i<nums.size();i++){

            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                count++;
                i--;
            }
        }
        
        while(count!=0){
            nums.push_back(0);
            count--;
        }
    
        
    }
};