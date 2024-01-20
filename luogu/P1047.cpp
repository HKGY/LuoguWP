#include <bits/stdc++.h>
using namespace std;
int l,m,u[110],v[110],tree[10010],sum;
int main () {
    scanf("%d %d",&l,&m);
    for(int i=0;i<=l;i++){
        tree[i]=1;
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&u[i],&v[i]);
        for(int j=u[i];j<=v[i];j++){
            tree[j]=0;
        }
    }
    for(int i=0;i<=l;i++){
        sum=sum+tree[i];
    }
    printf("%d",sum);
    return 0;
}