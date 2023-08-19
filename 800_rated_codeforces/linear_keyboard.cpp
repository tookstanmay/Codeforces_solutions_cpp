#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main(){
    int t;
    cin>> t;

    while(t--){
        string alphabets;
        cin>> alphabets;

        string str;
        cin>> str;

        int min_time = 0;
        int n = str.length();
        if (n > 1){
            for (int i = 1; i < n; i++){
                char ch1 = str[i];
                char ch2 = str[i - 1];

                int ch1Indx = find(alphabets.begin(), alphabets.end(), ch1) - alphabets.begin();
                int ch2Indx = find(alphabets.begin(), alphabets.end(), ch2) - alphabets.begin();

                min_time += abs(ch2Indx - ch1Indx);
            }
        }

        cout<< min_time<< endl;
    }
    return 0;
}