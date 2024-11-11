class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // map<int,int>m;
        // int c;

        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }

        // map<int,int>::iterator it;
        // for(it=m.begin();it!=m.end();it++){
        //     if(it->second>1){
        //         c=it->first;
        //         break;
        //     }
        // }
        // return c;

        sort(nums.begin(),nums.end());

        int i,j;

        i=0;
        j=1;

        while(i<nums.size()){
            if(nums[i]==nums[j]){
                break;
            }
            else{
                i++;
                j++;
            }
        }

        return nums[i];
    }
};