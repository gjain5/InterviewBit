int Solution::isPower(int A) {
    if (A == 1)return true; 
  
    for (int i = 2; i * i <= A; i++) { 
        double val = log(A) / log(i); 
        if ((val == (int)val) ) return true; 
    } 
  
    return false; 
}
