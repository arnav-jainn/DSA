//Rotate a matrix by 90 degree
// LC-48(rotate image)

#include<iostream>
#include<vector>

using namespace std;

    void rotate(vector<vector<int>>& matrix) {


        //TRANSPOSE
       for(int i=0;i<matrix.size();i++){
           for(int j=i;j<matrix[i].size();j++){
               swap(matrix[i][j],matrix[j][i]);
           }
       }

        //REVERSE
       for(int i=0;i<matrix.size();i++){
           reverse(matrix[i].begin(),matrix[i].end());
       }
    }