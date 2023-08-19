#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while(t--){
        int n, k;
        cin>> n>> k;

        int z = (n + 1)/ 2;
        if (k > z){
            cout<< "-1"<< endl;
        } else {
            vector<vector<char>> chess(n, vector<char> (n, '.'));

            for (int i = 0; i < k; i++){
                chess[2 * i][2 * i] = 'R';
            }

            for (auto j: chess){
                for (auto l: j){
                    cout<< l;
                }   cout<< endl;
            }
        }
    }
    return 0;
}