int Solution::maxSpecialProduct(vector<int> &A) {

    
    int n = A.size();
    vector<int> LSV(n,0), RSV(n,0);
    stack<int> leftStack, rightStack;
    leftStack.push(0);
    LSV[0]=0;
    rightStack.push(n-1);
    RSV[n-1]=0;
    
    //GET LSV
    for(int i=1; i<n; i++){
        while(!leftStack.empty()){
            if(A[leftStack.top()]>A[i]) break;
            leftStack.pop();
        }
        LSV[i] = (leftStack.empty()?0:leftStack.top());
        leftStack.push(i);
    }
    
    for(int i=n-2;i>=0;i--){
        while(!rightStack.empty()){
            if(A[rightStack.top()]>A[i]) break;
            rightStack.pop();
        }
        RSV[i] = (rightStack.empty()?0:rightStack.top());
        rightStack.push(i);
    }
    
    long rv = -1;
    for(int i=0; i<n; i++){
        rv = max(rv, (long)RSV[i]*LSV[i]);
    }
    
    return rv%1000000007;
}
