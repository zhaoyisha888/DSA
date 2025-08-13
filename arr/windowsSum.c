//  P1614 爱与愁的心痛
//  题目描述
// 最近有 n 个不爽的事，每句话都有一个正整数刺痛值（心理承受力极差）。爱与愁大神想知道连续 m 个刺痛值的和的最小值是多少，但是由于业务繁忙，爱与愁大神只好请你编个程序告诉他。
// input：第一行有两个用空格隔开的整数，分别代表 n 和 m。
// 第 2 到第 (n + 1) 行，每行一个整数，第 (i + 1) 行的整数 a_i 代表第 i 件事的刺痛值 a_i。
// 8 3
// 1
// 4
// 7
// 3
// 1
// 2
// 4
// 3
// output输出一行一个整数，表示连续 m 个刺痛值的和的最小值是多少。
// 6
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