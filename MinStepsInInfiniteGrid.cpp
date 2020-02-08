int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    
    int curX, curY, nextX, nextY, step;
    int count=0;
    for(int i=0; i<A.size()-1; i++){
        curX = A[i];
        curY = B[i];
        nextX = A[i+1];
        nextY = B[i+1];
        step = max(abs(nextX-curX), abs(nextY-curY));
        count+=step;
    }
    return count;
}
