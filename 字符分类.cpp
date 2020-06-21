#include <bits/stdc++.h>
using namespace std;
char a[100], b[100], c[100], d[100];
int main(){
    int m = 0, n = 0, p =0;
    gets(a);
    int f = strlen(a);
    for(int i = 0; i < f; i++){
        if(a[i] >= '0' && a[i] <= '9')
            c[n++] = a[i];
        else if(a[i] >= 'a' && a[i] <= 'z')
            b[m++] = a[i];
        else if(a[i] >= 'A' && a[i] <= 'Z')
            b[m++] = a[i];
        else d[p++] = a[i];
    }
    puts(b);
    puts(c);
    puts(d);
    return 0;
}
