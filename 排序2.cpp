#include <bits/stdc++.h>
using namespace std;

int c[100];
void charu(int n, int a[]){
    int tmp, j;
    int b[100];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    for(int i = 1; i < n; i++){
        tmp = b[i];
        for(j = i-1; j >= 0; j--){
            if(b[j] > tmp) b[j+1] = b[j];
            else break;
        }
        b[j+1] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout << b[i] <<" ";
    }
    cout << endl;
}

void xier(int n, int a[]){
    int tmp, j, k;
    int b[100];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    for(int i = 0; i < 5; i++){
        j = i + 5;
        while(j < n){
            tmp = b[j];
            k = j - 5;
            while(k >= i && b[k] > tmp){
                b[k+5] = b[k];
                k = k - 5;
            }
            b[k+5] = tmp;
            j = j + 5;
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i] <<" ";
    }
    cout << endl;
}

void xuanze(int n, int a[]){
    int index;
    int b[100];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    for(int i = 0; i < n; i++){
        index = 0;
        for(int j = 1; j < n - i; j++){
            if(b[j] > b[index]) index = j;
        }
        swap(b[index], b[n-i-1]);
    }
    for(int i = 0; i < n; i++){
        cout << b[i] <<" ";
    }
    cout << endl;
}

void kuaipai(int l, int r, int a[]){
    if(l >= r) return;
    int i = l;
    int j = r;
    int x = a[l];
    while(i < j){
        while(i < j && a[j] >= x) j--;
        if(i < j) a[i++] = a[j];
        while(i < j && a[i] <= x) i++;
        if(i < j) a[j--] = a[i];
    }
    a[i] = x;
    kuaipai(l, i-1, a);
    kuaipai(i+1, r, a);
}

void Merge(int a[], int l, int mid, int r){
    int i = l, j = mid + 1, k = l;
    while(i != mid+1 && j != r+1){
        if(a[i] <= a[j]) c[k++] = a[i++];
        else c[k++] = a[j++];
    }
    while(i != mid+1) c[k++] = a[i++];
    while(j != r+1) c[k++] = a[j++];
    for(i = l; i <= r; i++) a[i] = c[i];
}
void guibing(int l, int r, int a[]){
    int mid;
    if(l < r){
        mid = (l + r) / 2;
        guibing(l, mid, a);
        guibing(mid+1, r, a);
        Merge(a, l, mid, r);
    }
}
void guibing2(int n, int a[]){
    int b[100];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    for(int i = 0; i < n-1; i += 2){
        if(b[i] > b[i+1]) swap(b[i], b[i+1]);
    }
    for(int i = 0; i < n; i++){
        cout << b[i] <<" ";
    }
    cout << endl;
}
int main(){
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    charu(n, a);
    xier(n, a);
    xuanze(n, a);
    int b[100];
    for(int k = 0; k < n; k++){
        b[k] = a[k];
    }
    kuaipai(0, n-1, b);
    for(int i = 0; i < n; i++){
        cout << b[i] <<" ";
    }
    cout << endl;
    guibing2(n, a);
 /*   guibing(0, n-1, a);
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    cout << endl;*/
    return 0;
}
