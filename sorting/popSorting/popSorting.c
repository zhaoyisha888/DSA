#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,temp;
    scanf("%d",&n);

    // 动态分配数组并初始化为0
    int *a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        a[i] = 0;
    } 

    // int a[n];           //变长数组，（int a[n]={0}此写法不对）

    for(int i = 0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%d",a[0]); 
    return 0;
}


// int compare(const void *x ,const void *y){
//     return (*(int*)(x) - *(int*)(y));
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n]={0};
//     for(int i = 0;i<n;i++){
//         scanf("%d ",&a[i]);
//     }
//     qsort(a,n,sizeof(int),compare);
//     printf("%d",a[0]); 
//     return 0;
// }