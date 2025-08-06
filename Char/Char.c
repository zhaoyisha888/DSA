#include<stdio.h>
#include<string.h>
int main()
{
    char str[4];
    scanf("%3s", str);          // 三位数 + 字符串结束符 '\0'
    for(int i=2;i>=0;i--){
        putchar(str[i]);        //putchar(s[i]); 逐个输出字符，保留前导零。
    }
    return 0;
}

