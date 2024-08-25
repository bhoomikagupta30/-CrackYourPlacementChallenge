class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int i,k;

        // for(i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }

        // map<int,int>::iterator it;
        // for(it=m.begin();it!=m.end();it++){
        //     if(it->second>1){
        //        k=it->first;
        //        break;
        //     }
        // }

        // return k;

        for(i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=i;
            }
            else{
                k=nums[i];
                break;
            }
        }

        return k;
    }
};