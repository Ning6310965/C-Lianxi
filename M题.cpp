#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    while(cin >> a >> b >> c >> d){
        double k;
        k = (a * a - b) / 2;
        if((a * b == c + k * a) && (a * c == d + k * b)){
            cout << "Y" << endl;
        }
        else cout << "N" << endl;
    }
    return 0;
}
