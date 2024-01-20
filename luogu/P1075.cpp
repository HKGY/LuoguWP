#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int sum=0;
    int ntr=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if((n/i)*(n/(n/i))==n){
            printf("%d",(n/i));
            break;
        }
    }
    return 0;
}