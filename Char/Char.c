#include<stdio.h>
#include<string.h>
int main()
{
    char str[4];
    scanf("%3s", str);          // ��λ�� + �ַ��������� '\0'
    for(int i=2;i>=0;i--){
        putchar(str[i]);        //putchar(s[i]); �������ַ�������ǰ���㡣
    }
    return 0;
}

