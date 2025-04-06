class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[j][i], matrix[i][j]);
            }
        }
        for (int i = 0; i < size; i++) {
            int j = 0;
            int k = size - 1;
            while (j < k) {
                swap(matrix[i][j], matrix[i][k]);
                j++;
                k--;
            }
        }
    }
};