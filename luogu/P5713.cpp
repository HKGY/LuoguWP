#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,local,luogu;
    scanf("%d",&n);
    local=5*n;
    luogu=3*n+11;
    if (local<luogu){
        printf("Local");
    }
    else{
        printf("Luogu");
    }
    return 0;
}