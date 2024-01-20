#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,y,n,j;
    n=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++){
        if(i%4==0){
            if(i%100==0){
                if(i%400==0){
                    j=1;
                }
                else{
                    j=0;
                }
            }
            else{
                j=1;
            }
        }
        else{
            j=0;
        }
        if(j==1){
            n+=1;
        }

    }
    printf("%d\n",n);
    for(int i=x;i<=y;i++){
        if(i%4==0){
            if(i%100==0){
                if(i%400==0){
                    j=1;
                }
                else{
                    j=0;
                }
            }
            else{
                j=1;
            }
        }
        else{
            j=0;
        }
        if(j==1){
            printf("%d ",i);
        }
    }

    return 0;
    }
