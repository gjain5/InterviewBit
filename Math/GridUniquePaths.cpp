int Solution::uniquePaths(int A, int B) {
    int rv=0;
    vector<int> row;
    vector<vector<int>> grid;
    for(int i=0; i<A; i++){
        for(int j=0; j<B; j++){
            row.push_back(1);
        }
        grid.push_back(row);
        row.clear();
    }
    
    for(int i=1; i<A; i++){
        for(int j=1; j<B; j++){
            grid[i][j] = grid[i-1][j]+grid[i][j-1];
        }
        
    }
    return grid[A-1][B-1];
}
