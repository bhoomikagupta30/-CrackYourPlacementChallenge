class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int c;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){
            if(it->second>1){
                c=it->first;
                break;
            }
        }
        return c;
    }
};