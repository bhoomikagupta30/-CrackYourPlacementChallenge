class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>m;
      vector<int>v1;

      int i;

      for(i=0;i<nums.size();i++){
          
          if(m.find(target-nums[i])==m.end()){
             m[nums[i]]=i;
          }
          else{
            v1.push_back(i);
            v1.push_back(m[target-nums[i]]);
            break;
          }
      }

      return v1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //Brute force
    //     int i,j,c=0;
    //     vector<int>a;
    //     for(i=0;i<nums.size();i++){
    //         for(j=i+1;j<nums.size();j++){
    //             if(nums[i]+nums[j]==target){
    //                 c=1;
    //                 a.push_back(i);
    //                 a.push_back(j);
    //                 break;
    //             }
    //             if(c==1){
    //                 break;
    //             }
    //         }
    //     }
    //    return a; 

    // int i,j,c=0;
    // int x,y;
    // vector<int>v1;

    // for(i=0;i<nums.size();i++){
        
    //         x=nums[i];
    //         y=target-x;

    //         for(j=i+1;j<nums.size();j++){
    //         if(nums[j]==y){
    //            v1.push_back(i);
    //            v1.push_back(j);
    //            c=1;
    //            break;
    //         }
    //     }
        

        

    //     if(c==1){
    //         break;
    //     }
    // }

    // return v1;

    // O(NlogN) approach

    // map<int,int>m;
    // vector<int>v1;
    // int i;

    // for(i=0;i<nums.size();i++){

    //     if(m.find(target-nums[i])==m.end()){
    //         m[nums[i]]=i;
    //     }
    //     else{
    //         v1.push_back(i);
    //         v1.push_back(m[target-nums[i]]);
    //         break;
    //     }
    // }

    // return v1;
    
} 
};