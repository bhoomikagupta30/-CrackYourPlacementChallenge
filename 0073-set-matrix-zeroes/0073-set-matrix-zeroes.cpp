class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,k,l,m,n;
        vector<vector<int>>v1;
        

        for(i=0;i<matrix.size();i++){

            for(j=0;j<matrix[0].size();j++){

                if(matrix[i][j]==0){

                    vector<int>in;
                    in.push_back(i);
                    in.push_back(j);
                    v1.push_back(in);
                    


                }
            }

        }

        // for(k=0;k<matrix.size();k++){
        //                 matrix[k][j]=0;
        //             }

        //             for(l=0;l<matrix[0].size();l++){
        //                 matrix[i][l]=0;
        //             }

        for(int t=0;t<v1.size();t++){
            
            for(i=0;i<matrix[0].size();i++){
                matrix[v1[t][0]][i]=0;
            }

            for(l=0;l<matrix.size();l++){
                        matrix[l][v1[t][1]]=0;
                    }
            


        }
        


    }
};