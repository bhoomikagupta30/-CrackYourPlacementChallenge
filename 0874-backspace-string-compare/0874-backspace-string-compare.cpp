class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        
        int i,j;

        for(i=0;i<s.length();i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            else{

                if(!s1.empty()){
                s1.pop();
                }

            }
        }

        for(i=0;i<t.length();i++){
            if(t[i]!='#'){
                s2.push(t[i]);
            }
            else{
                if(!s2.empty()){
                s2.pop();
                }
            }
        }

        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()){
                break;
            }
            else{
                s1.pop();
                s2.pop();
            }

        }

        if(!s1.empty() || !s2.empty()){
            return false;
        }
        else{
            return true;
        }





    }
};