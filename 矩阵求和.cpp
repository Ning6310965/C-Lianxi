#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum = 0;
    int a[20][20];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            sum += a[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
    return 0;
}
