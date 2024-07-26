class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        int i,j;
        vector<int>v1;

        for(i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        int a[m.size()];
        int b[m.size()];

        map<int,int>:: iterator it;
        // i=0;
        for(it=m.begin();it!=m.end();it++){
            // a[i]=it->first;
            // b[i]=it->second;
            // i++;

            if(it->second==2){
                v1.push_back(it->first);
            }
        }

        // for(i=0;i<m.size();i++){
        //     if(b[i]==2){
        //         v1.push_back(a[i]);
        //     }
        // }

        return v1;
    }
};