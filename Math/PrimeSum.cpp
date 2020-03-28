vector<int> Solution::primesum(int A) {
    vector<int> rv;
    vector<bool> prime(A, true);
    for(int i=2; i<sqrt(A); i++){
        if(prime[i] == true){
            for(int j=2; i*j<A; j++){
                prime[i*j] = false;
            }
        }
    }
    for(int i=2; i<A; i++){
        if(prime[i] && prime[A-i]){
            rv.push_back(i);
            rv.push_back(A-i);
            return rv;
        }
    }
    return rv;
}
