#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long s = 0, k = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            k = k * j;
        }
        s = s + k;
        k = 1;
    }
    cout << s;
    return 0;
}
