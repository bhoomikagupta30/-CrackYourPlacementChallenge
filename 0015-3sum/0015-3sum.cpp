class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         
    //    int i,j,k,target;
    //    vector<vector<int>>ans;
       
       
    //    sort(nums.begin(),nums.end());

    //    for(i=0;i<nums.size();i++){
    //       target=(-1)*(nums[i]);
    //       j=i+1;
    //       k=nums.size()-1;

    //       while(j<k){

    //         if(nums[j]+nums[k]==target){
    //             vector<int>v1;
    //             v1={nums[i],nums[j],nums[k]};
    //             ans.push_back(v1);

    //             while(j<k && nums[j]==v1[1]){
    //                 j++;
    //             }

    //             while(j<k && nums[k]==v1[2]){
    //                 k--;
    //             }


    //         }
    //         else{

    //             if(nums[j]+nums[k]>target){
    //                 k--;
    //             }
    //             else{
    //                 j++;
    //             }
    //         }
    //       }

    //       if(i<nums.size()-1 && nums[i+1]==nums[i]){
    //         i++;
    //       }

    //    }

    //    return ans;















































         //Brute force(Time Limit Exceeded)


        //  int i,j,k,sum=0;
        //  sort(nums.begin(),nums.end());
         
        //  set<vector<int>>v1;
        //  vector<vector<int>>v;

        //  for(i=0;i<nums.size();i++){
        //     vector<int>comb;
        //      sum=0;
        //      sum+=nums[i];
        //     for(j=i+1;j<nums.size();j++){
        //         sum+=nums[j];
        //         for(k=j+1;k<nums.size();k++){
        //             vector<int>comb;
        //             if(sum+nums[k]==0){
        //                 comb.push_back(nums[i]);
        //                 comb.push_back(nums[j]);
        //                 comb.push_back(nums[k]);
        //                 v1.insert(comb);
                        
        //             }

        //         }
        //         sum-=nums[j];
        //     }
        //  }

        //  for (auto it = v1.begin(); it != v1.end(); it++){
        //       v.push_back(*it);
        //  }

        //  return v;


        int i,j,k;
        int target;
        vector<int>v1;
       
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());
        
        for(i=0;i<nums.size();i++){
            target= nums[i]*(-1);
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                
                if(nums[j]+nums[k]==target){
                    vector<int>v1={nums[i],nums[j],nums[k]};
                   ans.push_back(v1);
                   
                   
                   while(j<k && nums[j]==v1[1]){
                    j++;
                   }

                   while(j<k && nums[k]==v1[2]){
                     k--;
                   }
                }
                else{
                    if(nums[j]+nums[k]>target){
                        k--;
                    }else{
                        j++;
                    }
                }
            }

            while(i+1<nums.size() && nums[i+1] == nums[i]){
                i++;
            }
           
        }

        

         return ans;





















        
    }
};