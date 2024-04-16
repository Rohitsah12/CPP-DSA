int prefixsum(vector<int>& a){
    int n=a.size();
    int p[n];
    // for(int i=0;i<n;i++){
    //     p[i]=0;
    //     for(int j=0;j<=i;j++){
    //         p[i]+=a[j];
    //     }
    // }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        p[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}