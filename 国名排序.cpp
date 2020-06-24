#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cin >> n;
    char a[100][30];
    char b[30];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(strcmp(a[j], a[j+1]) > 0){
                strcpy(b, a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],b);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
*/
bool cmp(string a,string b){
    return a < b;
}

int main(){
    int n;
    string s[100];
    cin >>n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    sort(s, s+n, cmp);
    for(int i = 0; i < n; i++){
        cout << s[i] << endl;
    }
    return 0;
}
