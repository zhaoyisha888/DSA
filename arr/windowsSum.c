#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }

    if(m==0){
        printf("0");
        return 0;
    }

    int sum=0;
    for(int i=0;i<m;i++){                 //先计算第一个窗口数据的和
        sum+=a[i];
    }
    
    int min_sum = sum;
    for(int i=m;i<n;i++){
        sum= sum + a[i]-a[i-m];          //向右移动1位后的新窗口的：sum减去原先窗口最左边的数，加上新窗口最右边的数
        if(min_sum>sum){
            min_sum=sum;                 //实现min_sum始终为最小值
        }
    }
    printf("%d",min_sum);
    return 0;
}