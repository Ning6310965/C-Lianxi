#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[20][20];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
