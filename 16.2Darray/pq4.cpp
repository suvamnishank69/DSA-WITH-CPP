// 2022. Convert 1D Array Into 2D Array
//leetcode q 2022

// convert 1D to 2D


approach-1

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
     
        
        if(original.size()!=m*n){  //no. of cell sholud be same return empty 
            return {}; empty arr

        }
        int idx=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[i][j] = original[idx];
                idx++;
            }
        }

        return result;
    }
};

approach-2

// tips
// arr{2,4,6,8,4}
// here idx start from 0
// 1. idx/col = row
// 2. idx%col = col


class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
     
        
        if(original.size()!=n*m){  //no. of cell sholud be same otherwise return empty 
            return{};

        }
        

        for(int i=0;i<original.size();i++) {
            int row = i/n;
            int col = i%n;

            result[row][col] = origianl[i];

        }
            }
        }

        retrun result;
    }
};





