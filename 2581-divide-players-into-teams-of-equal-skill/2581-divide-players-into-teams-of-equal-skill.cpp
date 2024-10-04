class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        double total_sum=0;
        double sum;
        long long int ans=0;
        map<int,int>m;

        int i,n=skill.size();
        for(i=0;i<skill.size();i++){
            total_sum+=skill[i];
        }
        sum=(total_sum/n);
        sum*=2;
        
            sort(skill.begin(),skill.end());

            int k,l;
            k=0;
            l=n-1;

            while(k<l){

                if(skill[k]+skill[l]!=sum){
                    return -1;
                }
                else{
                ans+=skill[k]*skill[l];
                k++;
                l--;
                }
            }

            return ans;

            

        


    }
};