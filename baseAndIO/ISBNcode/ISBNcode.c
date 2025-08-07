#include<stdio.h>
#include<string.h>
int main(){
    char code[14];
    scanf("%s",code);
    int Identification_code = 0;
    int weight = 1;
    for(int i=0;i<12;i++){
        if(code[i]!='-'){
            Identification_code +=(code[i]-'0')*weight;
            weight++;
        }
    }
    int last = Identification_code%11;
    char last_code = (last ==10) ? 'X':(last+'0');
    
    if(code[12]==last_code){
        printf("Right\n");
    }else {
        code[12]=last_code;
        printf("%s",code);
    }
    return 0;
}