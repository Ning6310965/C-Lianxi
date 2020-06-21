#include <bits/stdc++.h>
using namespace std;

int main(){
    double d, x, y, t;
    while(cin >> d >> x >> y >> t){
        if((d / x + t) < (d / y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
