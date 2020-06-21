#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int x,sum = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    cin >> x;
    for(int i = 0; i < 10; i++){
        if(a[i] <= x+30) sum++;
    }
    cout <<sum;
    return 0;
}
