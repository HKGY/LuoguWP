#include <bits/stdc++.h>
using namespace std;
int n,a[11][11],x,y,situ;
int main () {
    scanf("%d",&n);
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++){
            a[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=0;
        }
    }
    a[1][1]=1;
    x=1;
    y=1;
    situ=0;
    for(int i=2;i<=n*n;i++){
        if (situ%4==0){
            x+=1;
            if ((a[x+1][y]!=0)&&(a[x][y+1]!=0 || a[x][y-1]!=0)){
                situ+=1;
            }
        }
        else if (situ%4==1){
            y+=1;
            if ((a[x+1][y]!=0 || a[x-1][y]!=0)&&(a[x][y+1]!=0)){
                situ+=1;
            }
        }
        else if (situ%4==2){
            x-=1;
            if ((a[x-1][y]!=0)&&(a[x][y+1]!=0 || a[x][y-1]!=0)){
                situ+=1;
            }
        }
        else if (situ%4==3){
            y-=1;
            if ((a[x+1][y]!=0 || a[x-1][y]!=0)&&(a[x][y-1]!=0)){
                situ+=1;
            }
        }  
        a[x][y]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%3d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}