class Solution {
public:
    int removeDuplicates( vector<int>&nums ){
     
     vector<int>a;

     int i;
     int k=nums[0];
     a.push_back(nums[0]);

     for(i=1;i<nums.size();i++){
        if(nums[i]>k){
           a.push_back(nums[i]);
           k=nums[i]; 
        }
     }

     for(i=0;i<a.size();i++){
        nums[i]=a[i];
     }

     return a.size();
     




 
        















}

};