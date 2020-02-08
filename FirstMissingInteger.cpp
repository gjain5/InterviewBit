int Solution::firstMissingPositive(vector<int> &A) {
    int missing = 1;
    std::sort(A.begin(), A.end());
    for(auto const& a:A){
        if(a<1)
        continue;
        else if(a == missing){
            missing++;
            continue;
        }
        else break;
    }
    return missing;
    
}
