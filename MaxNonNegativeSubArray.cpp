vector<int> Solution::maxset(vector<int> &A) {
    
    long long sum=0, maxSum=0;
    int lower=0, upper=0, anchor=0;
    vector<int> rv;
    
    for(int i=0; i<A.size(); i++){
        
        if(A[i] >= 0){
            sum+=A[i];
            if(sum>maxSum){
                lower = anchor;
                upper = i+1;
                maxSum = sum;
            }
            else if(sum==maxSum){
                // if new subarray is longer
                if(i+1 - anchor > upper - lower){
                    lower = anchor;
                    upper = i+1;    
                }
                
            }
        }
        else if(A[i] < 0){
            sum=0;
            anchor=i+1;
        }
    }
    
    while(lower<upper){
        rv.push_back(A[lower++]);
    }
    
    return rv;
    
}
