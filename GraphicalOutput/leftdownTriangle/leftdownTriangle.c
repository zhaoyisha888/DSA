#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    // ���������
    int num = 1;
    for (int row = 0; row < n; row++) {           
        for (int col = 0; col <= row; col++) {
                printf("%02d", num);
                num++;
            } 
            printf("\n");  
        }
        
        return 0;
}
        
    
