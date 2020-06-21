#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, d;
    cin >> m;
    cin >> d;
    int f[13] = {0, 31, 29, 31,30,31,30,31,31,30,31,30,31};
    int s = d;
    for(int i = 1; i < m; i++){
        s += f[i];
    }
    int x = (s - 103) % 7;
    char weekname[7][20] = {
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday"
         };
    printf("%s", weekname[x]);
    return 0;
}
