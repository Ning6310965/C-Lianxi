#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100];
    gets(s);
    int l = strlen(s);
    for(int i = l-1; i >= 0; i--)
        printf("%c", s[i]);
    return 0;
}
