# include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int> arr, int key){
    int s = 0, e = arr.size() - 1;
    while (s <= e){
        int m = (s + e)/ 2;

        if (arr[m] == key){
            return m;
        } else if (arr[m] < key){
            s = m + 1;
        } else {
            e = m - 1;
        }
    }

    return -1;
}

int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin>> arr[i];

        int maxPos = max_element(arr.begin(), arr.end()) - arr.begin();
        int minPos = min_element(arr.begin(), arr.end()) - arr.begin();

        cout<< min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + 1 + minPos + 1,
            (n - 1) - minPos + 1 + maxPos + 1
        })<< endl;
    }
    return 0;
}