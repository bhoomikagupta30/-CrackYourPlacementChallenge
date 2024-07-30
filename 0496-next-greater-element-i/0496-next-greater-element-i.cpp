class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,c,k;
        vector<int>ans;

        for(i=0;i<nums1.size();i++){
            c=0;
            for(j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){

                    for(k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            ans.push_back(nums2[k]);
                            c=1;
                            break;
                        }
                    }

                    if(c==0){
                        ans.push_back(-1);
                    }
                }
                
            }
        }

        return ans;
    }
};