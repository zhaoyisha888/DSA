#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int sum[10]={0};
    
    for(int i=m;i<=n;i++){
        int temp=i;
        while(temp!=0){
            int digit=temp%10;
            temp/=10;
            sum[digit]++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}