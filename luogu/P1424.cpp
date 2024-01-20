#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,n;
    int sum=0;
    scanf("%d%d",&x,&n);
    for(int i=0;i<n;i++){
        if ((x+i)%7==6 ||  (x+i)%7==0){
            sum=sum;
        }
        else{
            sum=sum+250;
        }
    }
    printf("%d",sum);
    return 0;
}