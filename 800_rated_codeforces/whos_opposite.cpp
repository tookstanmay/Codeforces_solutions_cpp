#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while (t--){
        int a, b, c;
        cin>> a>> b>> c;

        int max_among_three = max(a, max(b, c));
        int size_of_circle = abs(a - b) * 2;

        if (max_among_three <= size_of_circle){
            int half_circle = size_of_circle/ 2;

            int ans = -1;
            if (c + half_circle <= size_of_circle){
                ans = c + half_circle;
            } else {
                ans = c - half_circle;
            }   

            cout<< ans<< endl;
        } else {
            cout<< (-1)<< endl;
        }
    }
    return 0;
}