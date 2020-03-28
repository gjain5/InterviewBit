string Solution::convertToTitle(int A) {
    string val;//'A'-64;
    int i=0;
    while(A>0){
        if(A%26 == 0){
            val.push_back('Z');
            A = A/26 - 1;
        }
        else {
            char c = 64 + A%26;
            val.push_back(c);
            A = A/26 ;
        }
    }
    reverse(val.begin(), val.end());
    return val;
}
