#include <bits/stdc++.h>
using namespace std;

int main () {
    char a[100];
    scanf("%s",&a);
    int n=strlen(a);
    int trans='A'-'a';
    for(int i=0;i<n;i++){
        if('a'<=a[i]&&a[i]<='z'){
            a[i]+=trans;
        }
    }
    printf("%s",a);
    return 0;
}