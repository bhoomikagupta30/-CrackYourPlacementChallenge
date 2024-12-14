class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //Time limit exceeded

        // int i,j,k,c=0;

        // for(i=0;i<nums.size();i++){

        //     for(j=i+1;j<nums.size();j++){

        //         if(nums[i]==nums[j]){
        //             c=1;
        //             k=nums[j];
        //             break;

        //         }
        //     }
        //     if(c==1){
        //         break;
        //     }
        // }

        // return k;

        //Time--> O(N) Space--> O(N)
        // map<int,int>m1;

        // int i;

        // for(int i=0;i<nums.size();i++){
        //     m1[nums[i]]++;
        // }

        // int l;
        // map<int,int>::iterator it;
        // for(it=m1.begin();it!=m1.end();it++){
        //     if(it->second>1){
        //        l=it->first;
        //        break;
        //     }
        // }


        // return l;


        sort(nums.begin(),nums.end());

        int i=0;
        int j=1;
        int k;

        while(j<nums.size()){
            if(nums[i]==nums[j]){
                k=nums[i];
                break;
            }
            else{
                i++;
                j++;
            }
        }

        
      return k;



    }









    


    };
        