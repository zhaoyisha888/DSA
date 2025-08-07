#include<stdio.h>
#include<math.h>
int main(){
    int number;
    int num[3]={0};
    int price[3]={0};
    int money[3]={0};
    
    scanf("%d\n",&number);
    for(int i = 0;i<3;i++){
        scanf("%d %d\n",&num[i],&price[i]);
        int  pacakges= (int)ceil((double)number/num[i]);
        money[i] = pacakges*price[i];
    }
    int min_money = money[0];
    for(int i = 0;i<3;i++){
        if(money[i] < min_money){
            min_money = money[i];
        }
    }
    printf("%d",min_money);
    return 0;
}