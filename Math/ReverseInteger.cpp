int Solution::reverse(int A) {
    int n=A;
    if(A==0){return 0;}
    long long int rv=0;
    if(A>0){
        while(A>0){
            rv= rv*10 + (A%10);
            A=A/10;
        }
    }
    else{
        A=abs(A);
        while(A>0){
            rv= rv*10 + (A%10);
            A=A/10;
        }
        rv *= -1;
    }
    
    
    if(rv>INT_MAX || rv<INT_MIN) return 0;
    else return rv;
}
