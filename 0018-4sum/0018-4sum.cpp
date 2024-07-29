class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
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