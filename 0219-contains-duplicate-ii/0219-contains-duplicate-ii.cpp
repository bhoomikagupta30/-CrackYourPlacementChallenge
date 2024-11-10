class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int i,j;

        // map<int,int>m;

        // for(i=0;i<nums.size();i++){
        //     if(m.find(nums[i])==m.end()){
        //         m[nums[i]]=i;
        //     }
        //     else{
        //        if(abs(m[nums[i]]-i)<=k){
        //            return true;
        //        }
        //        else{
        //           m[nums[i]]=i;
        //        }
        //     }
        // }

        // return false;

        int n=nums.size();
        int i=0;
        if(k==0){
            return false;
        }
        while(i<n){
            int j=i+1;
            while(j<=i+k&&j<n){
            if(nums[i]==nums[j]){
                return true;
            }
                j++;
            }
           i++;
        }
    
        return false;

        

        
    }
};