#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char c[1000];
    while(cin >> n){
        char s[100][1000];
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-1-i; j++){
                if(strlen(s[j]) > strlen(s[j+1])){
                    strcpy(c, s[j]);
                    strcpy(s[j], s[j+1]);
                    strcpy(s[j+1], c);
                }
                else if(strlen(s[j]) == strlen(s[j+1])){
                    if(strcmp(s[j], s[j+1]) > 0){
                        strcpy(c, s[j]);
                        strcpy(s[j], s[j+1]);
                        strcpy(s[j+1], c);
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << s[i] <<endl;
        }
    }
    return 0;
}
