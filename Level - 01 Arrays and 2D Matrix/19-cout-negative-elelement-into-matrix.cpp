class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        // declare a counter 
        int counter = 0;
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col ++){
                if(grid[row][col] < 0){
                    counter ++;
                }
            }
        }
        return counter;
        // complexity - 0(N * M);

        // can i optimize this ?
        // in future we will try 
    }
};