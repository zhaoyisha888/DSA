// ��Ŀ����
// ����һ�鹴���� a,b,c��a��=b��=c���÷�����ʽ������С��ǵ�����ֵ����Ҫ��Լ�֡���
// �����ʽ��һ�У������������������������� a,b,c���޴�С˳�򣩡�
// �����ʽ��һ�У�����һ������������С��ǵ�����ֵ
#include<stdio.h>
int gcd(int x,int y){       //�����Լ��
    while(y!=0){
        int t = y;
        y = x%y;
        x = t;
    }
    return x;
}
int main(){
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        temp=a; a=b; b=temp;
    }
    if(a>c){
        temp=a; a=c; c=temp;
    }
    if(b>c){
        temp=b; b=c; c=temp;
    }
    
    int g = gcd(a,c);
    a /= g;
    c /= g;
    
    printf("%d/%d\n",a,c);
    
    return 0;
}