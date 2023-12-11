// https://leetcode.com/problems/transpose-matrix/?envType=daily-question&envId=2023-12-10


// option:1
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size(), vector<int>(matrix.size()));
        for (int i=0;i<matrix.size();i++) {
            for (int j=0;j<matrix[0].size();j++) {
                res[j][i]=matrix[i][j];
            }
        }
        return res;
    }
};



// option: 2

// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int cols = matrix[0].size();

// Initialize the transposed matrix with all elements set to 0
//         vector<vector<int>> transposed(cols, vector<int>(rows, 0));

//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 transposed[j][i] = matrix[i][j];
//             }
//         }

//         return transposed;
//     }
// };