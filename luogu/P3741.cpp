#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int like=0;
    int max=0;
    char s[110];
    scanf("%d",&n);
    scanf("%s",&s);
    for(int j=0;j<n-1;j++){
        if (s[j]=='V'&&s[j+1]=='K'){
            like+=1;
        }
    }
    max=like;
    for(int i=0;i<n;i++){
        like=0;
        if(s[i]=='V'){
            s[i]='K';
        }
        else if(s[i]=='K'){
            s[i]='V';
        }
        for(int j=0;j<n-1;j++){
            if (s[j]=='V'&&s[j+1]=='K'){
                like+=1;
            }
        }
        if (like>max){
            max=like;
        }
        if(s[i]=='V'){
            s[i]='K';
        }
        else if(s[i]=='K'){
            s[i]='V';
        }

        }
    printf("%d",max);
    return 0;
}