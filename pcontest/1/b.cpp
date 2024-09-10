#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s;
        cin >> n >> s;
        
        vector<int> a(n);
        int total_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }
        
        if (total_sum < s) {
            cout << -1 << endl;
            continue;
        }
        
        if (total_sum == s) {
            cout << 0 << endl;
            continue;
        }
        
        int target_sum = total_sum - s;
        int current_sum = 0;
        int left = 0;
        int min_ops = n;
        
        for (int right = 0; right < n; ++right) {
            current_sum += a[right];
            
            while (current_sum > target_sum && left <= right) {
                current_sum -= a[left];
                left++;
            }
            
            if (current_sum == target_sum) {
                min_ops = min(min_ops, left + (n - 1 - right));
            }
        }
        
        cout << min_ops << endl;
    }
    
    return 0;
}
