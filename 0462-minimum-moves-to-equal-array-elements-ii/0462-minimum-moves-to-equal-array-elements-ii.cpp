class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int num;

        if(n%2!=0){
          num=nums[nums.size()/2];
       }
       else{
          num=nums[nums.size()/2-1];
       }

       int sum=0;

       for(int i=0;i<n;i++){
         sum+=abs(nums[i]-num);
       }

       return sum;
    }
};