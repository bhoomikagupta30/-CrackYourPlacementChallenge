class Solution {
public:
    double myPow(double x, long int n) {
        double j;
        int k=1000000007;
       if(n>0){
         if(n%2!=0){
            return x*myPow(x,n-1);
         }
         else{
            return myPow(x*x,n/2);
         }
       }
       else{
         if(n<0){
           n=n*(-1);
           if(n%2!=0){
            return 1/(x*myPow(x,n-1));
         }
         else{
            return 1/(myPow(x*x,n/2));
         }

         }
         else{
            return 1;
         }
       }
    }
};