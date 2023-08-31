// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ull unsigned __int64

// int t;
// int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> t;

//    while (t--) {
//       string str;
//       cin >> str;

//       int last = str.length() - 1;

//       int indx = last;
//       char digit = '.';
//       for (int i = last; i >= 0; i--) {
//          if (str[i] == '0' || str[i] == '5') {
//             digit = str[i];
//             indx = i;
//             break;
//          }
//       }

//       int initial_remove = last - indx;
//       int indx_2 = -1;
//       for (int i = indx - 1; i >= 0; i--) {
//          if (digit == '0') {
//             // looking for another '0' or '5'
//             if (str[i] == '0' || str[i] == '5') {
//                indx_2 = i;
//                break;
//             }
//          } else if (digit == '5') {
//             if (str[i] == '2' || str[i] == '7') {
//                indx_2 = i;
//                break;
//             }
//          }
//       }

//       initial_remove += indx - indx_2 - 1;

//       cout << initial_remove << endl;
//    }
//    return 0;
// }