#include <bits/stdc++.h>
using namespace std;

int main () {
    double x1,x2,x3,y1,y2,y3;
    double dis1,dis2,dis3;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);   
    scanf("%lf %lf",&x3,&y3);
    dis1=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    dis2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    dis3=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.2f", dis1+dis2+dis3);
    return 0;
    }
