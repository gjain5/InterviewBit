int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int n=A.size();
    
    if(*max_element(A.begin(), A.end()) == 0) return 1;
    
    for(int i=0; i<n; i++){
        //num ints greater than A[i] = n-i+1;
        if((A[i] == n-i-1) && (A[i+1]>A[i])) return 1;
    }
    return -1;
}
