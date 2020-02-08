int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int sq= sqrt(n);
    int numBlocks = n/sq + 1;
    vector<int> count(numBlocks,0);
    if(A.size()<=1) return -1;
    if(A.size()==2 && A[0]==A[1]) return A[0];
    
    //assinging numbers to blocks 
    //so that one is oversized
    for(int i=0; i<A.size(); i++){
      count[(A[i]-1)/sq]++;  
    }
    // finding block with more count
    int rv=numBlocks-1;
    for(int i=0; i<numBlocks-1; i++){
      if(count[i] > sq){
          rv=i;
          break;
      }  
    }
    
    //find repeat element in the block
    unordered_map<int,int> map;
    for(int i=0; i<A.size(); i++){
        if(rv*sq<A[i] && A[i]<=(rv+1)*sq){
            map[A[i]]++;
            if(map[A[i]]>1){ return A[i];}
        }
        
    }
    return -1;
}