#include<stdio.h>
#include<math.h>
int main()
{
    int s,v;
    scanf("%d %d", &s,&v);      
    int t = (int)ceil((double)s/v);
    int time = 480-(t+10);
    if(time<0) time+=24*60;    //������ʱ������ 00:00���Ǿͱ�����ǰ��һ��
    int hour = time/60;
    int min = time%60;
    printf("%02d:%02d",hour,min);
    return 0;
}