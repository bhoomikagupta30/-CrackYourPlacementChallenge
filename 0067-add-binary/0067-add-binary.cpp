class Solution {
public:
    
    string addBinary(string a, string b) {
        
        int m;
        
        int i,carry=0,sum=0;
        int l;
        string k="";

        if(a.length()<=b.length()){
            l=a.length();
            m=b.length()-1;
        }
        else{
            l=b.length();
            m=a.length()-1;
        }

        for(i=l-1;i>=0;i--){
            sum=0;
            
            if(a.length()<=b.length()){
                sum=(a[i]-'0')+(b[m]-'0')+carry;
            }
            else{
                sum=(a[m]-'0')+(b[i]-'0')+carry;
            }
            

            if(sum==2){
                carry=1;
                k+="0";
            }
            else{
                if(sum==1){
                    carry=0;
                    k+="1";
                }
                else{
                    if(sum==0){
                        carry=0;
                        k+="0";
                    }
                    else{
                        if(sum==3){
                            carry=1;
                            k+="1";
                        }
                    }
                }
            }
            m--;

        }

        if(m>-1){

            if(a.length()<=b.length()){
                while(m!=-1){
                    sum=(b[m]-'0')+carry;
                    if(sum==2){
                carry=1;
                k+="0";
            }
            else{
                if(sum==1){
                    carry=0;
                    k+="1";
                }
                else{
                    if(sum==0){
                        carry=0;
                        k+="0";
                    }
                    else{
                        if(sum==3){
                            carry=1;
                            k+="1";
                        }
                    }
                }
            }
                    m--;
                }
            }
            else{
                while(m!=-1){
                    sum=(a[m]-'0')+carry;
                    if(sum==2){
                   carry=1;
                   k+="0";
                }
                else{
                   if(sum==1){
                    carry=0;
                    k+="1";
                }
                else{
                    if(sum==0){
                        carry=0;
                        k+="0";
                    }
                    else{
                        if(sum==3){
                            carry=1;
                            k+="1";
                        }
                    }
                }
              }
                    m--;
            }
          }
        }

        if(carry==1){
            k+="1";
        }

        reverse(k.begin(),k.end());
        return k;


        


        

        
        



        


        
    }
};