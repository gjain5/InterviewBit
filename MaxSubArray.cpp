int Solution::maxSubArray(const vector<int> &A) {
    
    int sum=0, ans=0;
    int maxi = *max_element(A.begin(), A.end());
    if(maxi<0){return maxi;}
    for(int i=0; i<A.size(); i++){
        if(sum + A[i] > 0){
            sum += A[i];
            ans = max(ans, sum);
        }
        else {
            sum = 0;
        }
    }
    
    return ans;
}
