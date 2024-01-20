#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,x;
    int sum=0;
    int ntr=1;
    scanf("%d%d",&n,&x);
    for(int i=1;i<n+1;i++){
        ntr=1;
        while(i>=ntr){
            if ((i/ntr)%10==x){
                sum+=1;
            }
            ntr=ntr*10;
        }
    }

    printf("%d",sum);
    return 0;
}