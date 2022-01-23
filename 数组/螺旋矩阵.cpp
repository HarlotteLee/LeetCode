class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num = 1;
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        vector<vector<int>> matrix(n, vector<int>(n));
        while(top <= bottom && left <= right)
        {
            for(int column = left; column <= right; column++)
            {
                matrix[top][column] = num;
                num++;
            }
            for(int row = top + 1; row <= bottom; row++)
            {
                matrix[row][right] = num;
                num++; 
            }
            if(top < bottom && left < right)
            {
                for(int column = right - 1; column > left; column--)
                {
                    matrix[bottom][column] = num;
                    num++;
                }
                for(int row = bottom; row > top; row--)
                {
                    matrix[row][left] = num;
                    num++;
                }
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        return matrix;
    }
};
