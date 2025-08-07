// 题目描述
// 输入一组勾股数 a,b,c（a！=b！=c）用分数格式输出其较小锐角的正弦值。（要求约分。）
// 输入格式：一行，包含三个正整数，即勾股数 a,b,c（无大小顺序）。
// 输出格式：一行，包含一个分数，即较小锐角的正弦值
#include<stdio.h>
int gcd(int x,int y){       //求最大公约数
    while(y!=0){
        int t = y;
        y = x%y;
        x = t;
    }
    return x;
}
int main(){
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        temp=a; a=b; b=temp;
    }
    if(a>c){
        temp=a; a=c; c=temp;
    }
    if(b>c){
        temp=b; b=c; c=temp;
    }
    
    int g = gcd(a,c);
    a /= g;
    c /= g;
    
    printf("%d/%d\n",a,c);
    
    return 0;
}