#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char s[100] = "", a[100] = "";
        int p = 0, q = 0;
        cin >> s;
        cin >> a;
        int ls = strlen(s);
        int la = strlen(a);
        if(ls == la){
            for(int j = 0; j < ls; j++){
                for(int m = 0; m < ls; m++){
                    if(s[m] == s[j]) p++;
                    if(a[m] == s[j]) q++;
                }
                if(p != q){
                    cout << "No" << endl;
                    break;
                }
                if(p == q && j == ls-1) cout << "Yes" << endl;
                p = 0;
                q = 0;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
/*
using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            char str1[100],str2[100];
            cin>>str1>>str2;
            int len1,len2;
            len1=strlen(str1);
            len2=strlen(str2);
            sort(str1,str1+len1);
            sort(str2,str2+len2);
            if(strcmp(str1,str2)==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
*/
