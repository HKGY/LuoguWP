#include <bits/stdc++.h>
using namespace std;

int a[100];

int main () {
    int sum;
    a[0]=1;
    for(int i=1;a[i-1]!=0;i++){
        scanf("%d",&a[i]);
        sum=i;
    }
    for(int j=1;j<sum;j++){
        printf("%d ",a[sum-j]); 
    }
    return 0;
}