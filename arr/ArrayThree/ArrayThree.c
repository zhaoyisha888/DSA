#include<stdio.h>
int main(){
    int w,x,h;
    scanf("%d %d %d",&w,&x,&h);

    int cube[w+1][x+1][h+1];
    for(int i = 0;i<=w;i++){
        for(int j = 0;j<=x;j++){
            for(int k = 0;k<=h;k++){
                cube[i][j][k]=0;
            }
        }
    }
    
    int q;
    scanf("%d\n",&q);
    
    int x_1,y_1,z_1,x_2,y_2,z_2;
    for(int n=0;n<q;n++){
        scanf("%d %d %d %d %d %d",&x_1,&y_1,&z_1,&x_2,&y_2,&z_2);
        for(int i = x_1;i<=x_2;i++){
            for(int j = y_1;j<=y_2;j++){
                for(int k = z_1;k<=z_2;k++){
                    cube[i][j][k]=1;
                }
            }
        }
    }


    int count =0;
    for(int i = 1;i<=w;i++){
        for(int j = 1;j<=x;j++){
            for(int k = 1;k<=h;k++){
                if (cube[i][j][k]==0)
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}