vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret;
    if(B>A.size()) B=B%A.size();
    for (int i = 0; i < A.size(); i++) {
        if(i+B >= A.size()){
            ret.push_back(A[i+B - A.size()]);
        }
        else ret.push_back(A[i + B]);
    }
    return ret; 
}
