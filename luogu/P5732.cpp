#include <bits/stdc++.h>
using namespace std;
int n,a[30][30];
int main () {
    scanf("%d",&n);
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++){
            a[i][j]=0;
        }
    }
    a[1][1]=1;
    for(int j=2;j<=n;j++){
        for(int i=1;i<=j;i++){
        a[i][j]=a[i][j-1]+a[i-1][j-1];
        }
    }
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}