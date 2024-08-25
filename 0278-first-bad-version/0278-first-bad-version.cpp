// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int i,c=0;

       for(i=1;i<=n;i++){
          
          if(isBadVersion(i)){
             c=1;
             break;
             
          }
       }

       return i;
    }
};