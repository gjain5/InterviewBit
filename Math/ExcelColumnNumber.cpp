int Solution::titleToNumber(string A) {
    int val = 0;//'A'-64;
    for(int i=0; i<A.size(); i++){
        val += (pow(26, A.size()-i-1))*(A[i]-64);
    }
    return val;
}
