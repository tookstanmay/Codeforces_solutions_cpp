# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        long long n;
        cin>> n;

        if (n % 2 == 1){
            n++;
        }

        cout<< max(6LL, n)/ 2 * 5<< endl;
    }
    return 0;
}