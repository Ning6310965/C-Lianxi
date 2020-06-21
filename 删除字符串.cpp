#include <bits/stdc++.h>
using namespace std;
char s[100], a[100];
int main(){
    int m = 0;
    gets(s);
    int l =strlen(s);
    for(int i = 0; i < l; i++){
        if(s[i] == 'g'){
            if(s[i+1] == 'z' && s[i+2] == 'u'){
                i += 2;
            }
            else a[m++] = s[i];
        }
        else a[m++] = s[i];
    }
    puts(a);
    return 0;
}
