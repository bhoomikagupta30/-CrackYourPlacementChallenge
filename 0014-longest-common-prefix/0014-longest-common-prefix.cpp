class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,pos=0,c=0;
        string min;
        min=strs[0];
        string k="";

        for(i=1;i<strs.size()-1;i++){
            if(min.length()>strs[i].length()){
                min=strs[i];
                pos=i;
            }
        }
        
        j=0;
        for(i=0;i<min.size();i++){
            j=0;

            
              while(j<strs.size()){
                 
                 if(strs[j][i]!=min[i]){
                    c=1;
                    break;
                 }
                 else{
                    j++;
                 }





            }

            if(c==1){
                break;
            }

            if(j==strs.size()){
                k+=min[i];
            }
         
            
            
        }

        return k;


    }
};