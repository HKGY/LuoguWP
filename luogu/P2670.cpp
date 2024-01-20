#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,con;
char a[110][110];
int main () {
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            a[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++){
        scanf("%s",a[i]+1);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            con=0;
            if(a[i][j]=='?'){
                if(a[i-1][j-1]=='*'){
                    con+=1;
                }
                if(a[i-1][j]=='*'){
                    con+=1;
                }
                if(a[i-1][j+1]=='*'){
                    con+=1;
                }
                if(a[i][j-1]=='*'){
                    con+=1;
                }
                if(a[i][j+1]=='*'){
                    con+=1;
                }
                if(a[i+1][j+1]=='*'){
                    con+=1;
                }
                if(a[i+1][j]=='*'){
                    con+=1;
                }
                if(a[i+1][j-1]=='*'){
                    con+=1;
                }
                a[i][j]=con+'0';
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;


    }
