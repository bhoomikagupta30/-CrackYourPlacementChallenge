class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // Time Limit Exceeded O(n^4)

        // int i,j,k,l,sum=0;
        // set<vector<int>>s1;
        // vector<int>v1;
        // vector<vector<int>>ans;

        // sort(nums.begin(),nums.end());

        // for(i=0;i<nums.size();i++){
        //     sum=0;

        //     for(j=i+1;j<nums.size();j++){

        //         for(k=j+1;k<nums.size();k++){

        //             for(l=k+1;l<nums.size();l++){
        //                 vector<int>v1;
        //                 if((long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l]==target){
        //                     v1.push_back(nums[i]);
        //                     v1.push_back(nums[j]);
        //                     v1.push_back(nums[k]);
        //                     v1.push_back(nums[l]);
        //                     s1.insert(v1);
        //                 }
        //             }
        //         }
        //     }
        // }
        
        // set<vector<int>>::iterator it;
        // for(it=s1.begin();it!=s1.end();it++){
        //      ans.push_back(*it);
        // }

        // return ans;

        int a,b,c,d,i,j;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(i=0;i<nums.size()-1;i++){

            for(j=i+1;j<nums.size()-1;j++){

                c=j+1;
                d=nums.size()-1;
                
                while(c<d){
                    
                    if((long)nums[i]+(long)nums[j]+(long)nums[c]+(long)nums[d]==target){
                        vector<int>v1={nums[i],nums[j],nums[c],nums[d]};
                        ans.push_back(v1);

                        while(c<d && nums[c]==v1[2]){
                            c++;
                        }

                        while(c<d && nums[d]==v1[3]){
                            d--;
                        }
                    }
                    else{
                        if((long)nums[i]+(long)nums[j]+(long)nums[c]+(long)nums[d]>target){
                            d--;
                        }
                        else{
                            c++;
                        }
                    }


                    

                }

                while(j+1<nums.size() && nums[j+1]==nums[j]){
                    j++;
                }
            }

            while(i+1<nums.size() && nums[i+1]==nums[i]){
                    i++;
                }
        }

        return ans;


        





























    }
};