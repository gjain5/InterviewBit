int Solution::isPalindrome(int A) {
    if(A<0) return false;
    string B = to_string(A);
    
    for(int i = 0; i < B.size()/2; i++){
        if(B[i] != B[B.size()-i-1]){
            return false;
        }
    }
    
    return true;
}
