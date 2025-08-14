#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if(n%2==0){
        return 0;
    }

    int a[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            a[i][j]=0;
        }
    }

    int row=0;
    int col=n/2;
    a[row][col] = 1;

    for(int k=2;k<=n*n;k++){
        if(row==0&&col!=n-1){
            row=n-1;
            col=col+1;
        }else if(col==n-1&&row!=0){
            row=row-1;
            col=0;
        }else if(row==0&&col==n-1){
            row=row+1;
        }else if(row!=0&&col!=n-1){
            if(a[row-1][col+1]==0){
                row=row-1;
                col=col+1;
            }else{
                row=row+1;
            }
        }
        a[row][col]=k;          // 只对数组编号操作，可以简化时间复杂度
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}