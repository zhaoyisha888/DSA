#include<stdio.h>

int main(){
    int k;
    scanf("%d",&k);
    int total_coins = 0;
    int current_coins = 1;
    int remain_day = 1;
    for(int day =1;day<=k;day++){
        total_coins+=current_coins;
        remain_day--;
        if(remain_day==0){
            current_coins++;
            remain_day = current_coins;
        }
    }

    printf("%d",total_coins);
}