#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    bool flag = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                flag = true;
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
    if (!flag) return -1;
}

int firstOccurrence(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    bool flag = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            if (mid == 0 || nums[mid - 1] != target) {
                flag = true;
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
    if (!flag) return -1;
}

int main() {
    vector<int> v = {0,0,0,0,1,1};
    int target = 1;
    int endIndex = lastOccurrence(v, target);
    int firstIndex = firstOccurrence(v, target);
    cout << endIndex - firstIndex + 1;
    return 0;
}
