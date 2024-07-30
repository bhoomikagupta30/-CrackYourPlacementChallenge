class Solution {
public:

   int firstDigit(int num){
      while(num>10){
        num=num/10;
      }

      return num;
      
   }






    string intToRoman(int num) {
        int i,j;
        string k="";

        while(num!=0){

        int f=firstDigit(num);

        if(f!=4 && f!=9){
            if(num>=1000){
                num-=1000;
                k+="M";

            }
            else{
                
                if(num>=500){
                    num-=500;
                    k+="D";
                }
                else{
                    if(num>=100){
                        num-=100;
                        k+="C";
                    }
                    else{
                        if(num>=50){
                            num-=50;
                            k+="L";
                        }
                        else{
                            if(num>=10){
                                num-=10;
                                k+="X";
                            }
                            else{
                                if(num>=5){
                                    num-=5;
                                    k+="V";
                                }
                                else{
                                    num-=1;
                                    k+="I";
                                }
                            }
                        }
                    }
                }
            }
        }
        else{

            if(num<5){
                num-=4;
                k+="IV";
            }
            else{
                if(num<10){
                    num-=9;
                    k+="IX";
                }
                else{

                    if(num<50){
                        num-=40;
                        k+="XL";
                    }
                    else{

                        if(num<100){
                            num-=90;
                            k+="XC";
                        }
                        else{
                            if(num<500){
                                num-=400;
                                k+="CD";
                            }
                            else{
                                if(num<1000){
                                    num-=900;
                                    k+="CM";
                                }
                            }
                        }
                    }
                }
            }
        }

      }  

      return k;


    }
};