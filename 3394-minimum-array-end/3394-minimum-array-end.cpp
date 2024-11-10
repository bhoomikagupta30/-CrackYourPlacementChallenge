class Solution {
public:
    long long minEnd(int n, int x) {
     long int result=x;
     long int remaining=n-1;
     long int position=1;

     while(remaining!=0){

        if(!(x & position)){

            result = result | (remaining & 1) * position;
            remaining >>= 1;
        }

        position <<= 1;
     }

     return result;

     
     








      
    }
};