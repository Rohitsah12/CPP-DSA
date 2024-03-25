#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &v){
    int n = v.size();
    int idx = -1;

    // Step 1: Finding the pivot index
    for(int i = n - 2; i >= 0; i--){
        if(v[i] < v[i + 1]){
            idx = i;
            break;
        }
    }

    // Step 2: If no pivot found, reverse the whole array
    if(idx == -1){
        reverse(v.begin(), v.end());
        return;
    }

    int swp_idx = -1;

    // Step 3: Finding the smallest element greater than nums[idx] to the right of idx
    for(int i = n - 1; i > idx; i--){
        if(v[i] > v[idx]){
            swp_idx = i;
            break;
        }
    }

    // Step 4: Swap nums[idx] and nums[swp_idx]
    swap(v[idx], v[swp_idx]);

    // Step 5: Reverse the subarray from idx + 1 to the end
    reverse(v.begin() + idx + 1, v.end());
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "Original Array: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    nextPermutation(v);

    cout << "Next Permutation: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
