int Solution::solve(vector<int> &A) {
    int n=A.size();
    int mxSum[n+1];
    mxSum[n]=0;
    for(int i=n-1;i>=0;i--)
    {
        mxSum[i]=max(mxSum[i+1],A[i]);
    }
    int ans=0;
    set<int> s;
    s.insert(INT_MIN);
    for(int i=0;i<n-1;i++)
    {
        if(mxSum[i+1]>A[i])
        {
            ans=max(ans,getlow(s,A[i])+A[i]+mxSum[i+1]);
        }
        
    }
}
