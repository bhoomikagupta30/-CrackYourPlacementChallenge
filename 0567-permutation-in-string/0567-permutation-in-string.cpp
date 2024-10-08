class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()){
            return false;
        }

        map<char,int>m1;
        for(int i=0;i<s1.length();i++){
            m1[s1[i]]++;
        }

        map<char,int>m2;
        int i=0,j=0;


        while(j<s2.size()){
            m2[s2[j]]++;
        

        if(j-i+1==s1.size()){
            if(m1==m2){
                return true;
            }
        

        if(j-i+1<s1.size()){
            j++;
        }
        else{
            // m2.erase(s2[i]);
            m2[s2[i]]--;
            if(m2[s2[i]] == 0) { // Remove character if count becomes 0
                    m2.erase(s2[i]);
                }
            i++;
            

        }
        
        }
        j++;
        }  
        return false;
    }
};

