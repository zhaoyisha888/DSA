#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    // 输出正方形
    int a =1;
    for(int h = 0;h<n;h++){
        for(int i =0;i<n;i++){
            printf("%02d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}

