class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,c=0,p;
        

        for(i=0;i<haystack.size();i++){
            string s=haystack.substr(i,needle.size());
            if(s==needle){
                p=i;
                c=1;
                break;
            }
        }

        if(c==0){
            return -1;
        }
        else{
            return p;
        }
    }
};