class Solution {
public:
    int maxArea(vector<int>& height) {
    //   int i,j;

    //   int area;

    //   if(height[0]<height[1]){
    //      area=height[0];
    //   }
    //   else{
    //     area=height[1];
    //   }

    //   for(i=0;i<height.size();i++){

    //     for(j=i+1;j<height.size();j++){
             
    //          if(height[i]<height[j]){
    //             if(area<(j-i)*(height[i])){
    //                 area=(j-i)*(height[i]);
    //             }
    //          }
    //          else{
    //             if(area<(j-i)*(height[j])){
    //                 area=(j-i)*(height[j]);
    //             }
    //          }

    //     }

    //   }

    //   return area;

    int i,j;

    i=0;
    j=height.size()-1;
    int area;
    
    if(height[i]<height[j]){
     area= (j-i)*(height[i]);
     i++;
    }
    else{
        area=(j-i)*(height[j]);
        j--;
    }

    while(j!=i){

        if(height[i]<height[j]){

            if(area<(j-i)*(height[i])){
                area=(j-i)*(height[i]);
                
            }
            i++;
        }
        else{

            if(area<(j-i)*(height[j])){
                area=(j-i)*(height[j]);
                
            }
            j--;
        }
    }

    return area;
    
    





    


     

     



    }
};