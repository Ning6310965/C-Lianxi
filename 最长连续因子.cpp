#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, p, num;
    int l = 0, Max = 0;
    cin >> a;
    for(int i = 2; i <= a; i++) {
        if(a % i ==0) {
            p = i;
            l++;
            if (p == a && Max == 0){
                cout << p;
                return 0;
            }
        }
        else {
            if (l > Max){
                Max = l;
                num = p - l + 1;
                l = 0;
            }
            else l = 0;
        }
    }
    for(int i = 0; i < Max; i++){
        cout << num << " ";
        num++;
    }
    return 0;
}
