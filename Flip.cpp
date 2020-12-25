vector<int> Solution::flip(string A) {
    int n=A.length();
    int a[n];
    for(int i=0;i<n;i++)
    {
        if(A[i]=='0')
        a[i]=1;
        else
        a[i]=-1;
    }
    int btn=0,bth=0,l=0,r=0;
    pair<int,int> ans=make_pair(INT_MAX,INT_MAX);
    for(int i=0;i<n;i++)
    {
        bth+=a[i];
        if(bth<0)
        {
            bth=0;
            l=i+1;
        }
        if(bth>btn)
        {
            btn=bth;
            ans.first=l;
            ans.second=i;
        }
    }
    if(ans.first==INT_MAX)
    return vector<int>();
    vector<int> v;
    v.push_back(ans.first+1);
    v.push_back(ans.second+1);
    return v;
}
