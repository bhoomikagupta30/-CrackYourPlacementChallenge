class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int i,k;

        for(i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second>1){
               k=it->first;
               break;
            }
        }

        return k;
    }
};