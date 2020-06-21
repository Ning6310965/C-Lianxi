#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char s[100] = "", a[100] = "";
        int p = 0, q = 0;
        cin >> s;
        cin >> a;
        int ls = strlen(s);
        int la = strlen(a);
        if(ls == la){
            for(int j = 0; j < ls; j++){
                for(int m = 0; m < ls; m++){
                    if(s[m] == s[j]) p++;
                    if(a[m] == s[j]) q++;
                }
                if(p != q){
                    cout << "No" << endl;
                    break;
                }
                if(p == q && j == ls-1) cout << "Yes" << endl;
                p = 0;
                q = 0;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
