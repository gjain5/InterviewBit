int Solution::gcd(int A, int B) {
    int n;
    int gcd=1;
    n = (A>B)?A:B;
    if(A==0 || B==0) return (A>B)?A:B;
    if(A==B) return A;
    for(int i=1; i<=n/2; i++){
        if(A%i==0 && B%i==0){
            if(gcd>i)gcd=gcd;
            else gcd=i;
        }
    }
    return gcd;
}
