/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool customCheck(Interval a, Interval b){
    return (a.start < b.start);
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> rv; 
    int n = A.size();
    if(n<=1) return A;
    
    sort(A.begin(), A.end(), customCheck);
    
    int i=1; int j; Interval e1, e2;
    e1.start = A[0].start;
    e1.end = A[0].end;
    while(i<n){
        e2.start = A[i].start;
        e2.end = A[i].end;
        
        if(e2.start>e1.end){
            rv.push_back(e1);
            e1.start = e2.start;
            e1.end =  e2.end;
        }
        else if(e2.end>e1.end){
            e1.end=max(e1.end, e2.end);
        }
        
        i++;
    }
    rv.push_back(e1);
    return rv;
    
}
