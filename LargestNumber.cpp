bool customCheck(int a, int b){
    string s1 = to_string(a);
    string s2 = to_string(b);
    
    if(s1+s2 > s2+s1) return 1;
    
    return 0;
}

string Solution::largestNumber(const vector<int> &A) {
    
    if(*max_element(A.begin(), A.end()) == 0) return "0";
    vector<int> B;
    B=A;
    string s;
    sort(B.begin(), B.end(), customCheck);
    for(int i=0; i<B.size(); i++){
        s+=to_string(B[i]);
    }
    
    return s;
}
