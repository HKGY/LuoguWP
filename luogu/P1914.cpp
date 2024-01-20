#include <bits/stdc++.h>
using namespace std;

int main () {
    int key;
    char a[50];
    scanf("%d",&key);
    scanf("%s",&a);
    int n=strlen(a);
    int trans='A'-'a';
    for(int i=0;i<n;i++){
        a[i]=(a[i]+key-'a')%26+'a';
    }
    printf("%s",a);
    return 0;
}