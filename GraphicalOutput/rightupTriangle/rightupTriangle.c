#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    // Êä³öÈý½ÇÐÎ
    int num = 1;
    for (int row = 0; row < n; row++) {           
        for (int col = 0; col < n; col++) {
            if (col >= row) {
                printf("%02d", num);
                num++;
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}