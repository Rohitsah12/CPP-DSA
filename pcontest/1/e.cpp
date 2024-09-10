#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    int cnt = 0;
    int maxi=0;
    string s[1001];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<n; j++){
            if(s[j][i] == '1'){
                cnt++;
            }
        }
        maxi = max(maxi,cnt);
        cnt = 0;
    }
    cout<<maxi<<endl;
    
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=1;
    // int t;
    // cin>>t;
    while(t--){
        solve();
    }
}