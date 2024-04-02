#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                return mid;
            }
            else {
                low = mid + 1;
            }
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
     return -1;
}

int firstOccurrence(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            if (mid == 0 || nums[mid - 1] != target) {
                return mid;
            }
            else {
                high = mid - 1;
            }
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
     return -1;
}

int main() {
    vector<vector<int>> v = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int target = 1;
    int maxcount = 0;
    for(int i = 0; i < v.size(); i++) {
        int left = lastOccurrence(v[i], target);
        if(left != -1) {
            int right = firstOccurrence(v[i], target);
            int count = (right - left) + 1;
            if(maxcount < count) maxcount = count;
        }
    }
    cout << maxcount;

    return 0;
}
