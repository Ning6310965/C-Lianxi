#include <bits/stdc++.h>
using namespace std;
char a[100], b[100], c[100];
int main(){
    int m = 0, n = 0;
    gets(a);
    int f = strlen(a);
    for(int i = 0; i < f; i++){
        if(a[i] >= '0' && a[i] <= '9'){
            c[n] = a[i];
            n++;
        }
        else b[m++] = a[i];
    }
    int l = strlen(c);
    if(l != 0){
        for(int i = 0; i < l; i++)
            b[m++] = c[i];
    }
    puts(b);
    return 0;
}
