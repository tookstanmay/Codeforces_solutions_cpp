#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main(){
    int t;
    cin>> t;

    while(t--){
        int n, k; // k-> initial ram
        cin>> n>> k;

        vector<int> run_ram(n);
        vector<int> give_ram(n);

        for (auto &x: run_ram) cin>> x;

        for (auto &y: give_ram) cin>> y;

        int minIndx = min_element(run_ram.begin(), run_ram.end()) - run_ram.begin();
        if (run_ram[minIndx] <= k){
            k += give_ram[minIndx];
            run_ram[minIndx] = INT_MAX;

            minIndx = min_element(run_ram.begin(), run_ram.end()) - run_ram.begin();
            while (run_ram[minIndx] <= k){
                k += give_ram[minIndx];
                run_ram[minIndx] = INT_MAX;
                minIndx = min_element(run_ram.begin(), run_ram.end()) - run_ram.begin();
            }
        }
        cout<< k<< endl;
    }
    return 0;
}