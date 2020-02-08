vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int>> rv;
    
    int L=0, T=0, dir=0, i=0, count=1;
    int R=A-1;
    int B=A-1;
    vector<int> row;
    for(int j=0; j<A; j++){
            row.push_back(0);
        }
    for(int i=0; i<A; i++){
        rv.push_back(row);    
    }
    while( (L<=R) && (T<=B)){
        if(dir == 0){ //top row
            for(i=L; i<=R; i++){
                rv[T][i] = count;
                count++;
            }
            T++;
            dir=1;
            
        }
        else if(dir == 1){ //right column
            for(i=T; i<=B; i++){
                rv[i][R] = count;
                count++;
            }
            R--;
            dir=2;
        }
        else if(dir == 2){ //bottom row
            for(i=R; i>=L; i--){
                rv[B][i] = count;
                count++;
            }
            B--;
            dir=3;
            
        }
        else if(dir == 3){ //left column
            for(i=B; i>=T; i--){
                rv[i][L] = count;
                count++;
            }
            L++;
            dir=0;
        }
    }    
    return rv;
}
