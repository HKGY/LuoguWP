#include <bits/stdc++.h>
using namespace std;
char a[1000],b[1000],x[1000],y[1000];
int c[1000],z[1000],la,lb,i,s,l;

int main () {
    for(int i=0;i<=500;i++){
        c[i]=0;
        x[i]='0';
        y[i]='0';
    }
    scanf("%s",a);
    scanf("%s",b);
    la =strlen(a);
    lb =strlen(b);
    if(la>lb){
        l=la;
    }
    else{
        l=lb;
    }
    for(i=0;i<la;i++){
        x[i]=a[la-i-1];
    }
    for(i=0;i<lb;i++){
        y[i]=b[lb-i-1];
    }

    for(i=0;i<=l;i++){
        z[i]=x[i]-'0'+y[i]-'0';
    }
    for(i=0;i<=l;i++){
        if(z[i]>=10){
            z[i]-=10;
            z[i+1]+=1;
        }
    }
    int k=l;

    if(z[l]==0){
        l-=1;
    }
    for(i=l;i>=0;i--){
        printf("%d",z[i]);
        }
    }

