#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,temp;
    char order[4];
    scanf("%d %d %d",&a,&b,&c);
    scanf("%s",order);
    if(a>b){
        temp=a; a=b; b=temp;
    }
    if(a>c){
        temp=a; a=c; c=temp;
    }
    if(b>c){
        temp=b; b=c; c=temp;
    }
    for(int i = 0;i<3;i++){
        if(order[i]=='A'){
            printf("%d ",a);
        }else if(order[i]=='B'){
            printf("%d ",b);
        }else if(order[i]=='C'){
            printf("%d ",c);
        }
        // if (i < 2) printf(" ");   //不单独输出空白字符，直接在%d后输出会出现
    }
    return 0;
}