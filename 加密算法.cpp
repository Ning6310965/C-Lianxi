#include <bits/stdc++.h>
using namespace std;
char s[100];
int main(){
    gets(s);
    int l = strlen(s);
    for(int i = 0; i < l; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 3;
            if(s[i] > 'Z'){
                s[i] -= 26;
            }
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] += 3;
            if(s[i] > 'z'){
                s[i] -= 26;
            }
        }
        else{
            continue;
        }
    }
    puts(s);
    return 0;
}
