# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>> t;

    while (t--){
        int n, m;
        long long x, y;

        cin>> n>> m>> x>> y;

        long long x1, y1, x2, y2;
        if ((x == 1 && y == 1) || (x == n && y == m)){
            x1 = 1; y1 = m;
            x2 = n; y2 = 1;
        }
        else {
            x1 = 1; y1 = 1;
            x2 = n; y2 = m;
        }

        cout<< x1<< " "<< y1<< " "<< x2<< " "<< y2<< endl;
    }
    return 0;
}