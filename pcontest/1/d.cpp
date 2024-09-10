#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

int calculate_cost(int x, int nb, int ns, int nc, int pb, int ps, int pc, int rb, int rs, int rc) {
    int bn = max(0LL, x * rb - nb);
    int sn = max(0LL, x * rs - ns);
    int cn = max(0LL, x * rc - nc);

    return bn * pb + sn * ps + cn * pc;
}

void solve(){
    string rp;
    cin >> rp;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    int r;
    cin >> r;
    int rb = count(rp.begin(), rp.end(), 'B');
    int rs = count(rp.begin(), rp.end(), 'S');
    int rc = count(rp.begin(), rp.end(), 'C');

    int low = 0, high = 1e13, ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (calculate_cost(mid, nb, ns, nc, pb, ps, pc, rb, rs, rc) <= r) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=1;
    while(t--){
        solve();
    }
}






