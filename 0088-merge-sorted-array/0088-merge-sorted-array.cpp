class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,k;       //beats 100%
        i=m-1;
        j=n-1;
        k=m+n-1;

        while(j>=0){
            if(i>=0 && nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
     





















       /* i=m,j=0;       //this is also correct but beats 50%

        while(i<m+n){
            nums1[i]=nums2[j];
            i++;
            j++;
        }

        sort(nums1.begin(),nums1.end());*/

    }
};