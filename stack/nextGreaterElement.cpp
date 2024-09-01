#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Next Greater Element
    int nge[n];
    //Brute FOrce: T.C=o(n^2)
    // for(int i=0;i<n;i++){
    //     nge[i]=-1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    stack<int>st;
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}

class Solution
{
public:
    vector<int> calculateSpan(int price[], int n)
    {
        stack<pair<int, int>> st;
        vector<int> ans(n);
        ans[0] = 1;  // The span for the first element is always 1.

        for (int i = 1; i < n; i++)
        {
            // Pop elements from the stack if the current price is greater than the price at stack's top
            while (!st.empty() && st.top().first <= price[i])
            {
                st.pop();
            }

            // If the stack is empty, it means no previous greater element exists
            if (st.empty())
                ans[i] = i + 1;
            else
                ans[i] = i - st.top().second;

            // Push the current price and its index onto the stack
            st.push({price[i], i});
        }

        return ans;
    }
};
