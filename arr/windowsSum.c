#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }

    if(m==0){
        printf("0");
        return 0;
    }

    int sum=0;
    for(int i=0;i<m;i++){                 //�ȼ����һ���������ݵĺ�
        sum+=a[i];
    }
    
    int min_sum = sum;
    for(int i=m;i<n;i++){
        sum= sum + a[i]-a[i-m];          //�����ƶ�1λ����´��ڵģ�sum��ȥԭ�ȴ�������ߵ����������´������ұߵ���
        if(min_sum>sum){
            min_sum=sum;                 //ʵ��min_sumʼ��Ϊ��Сֵ
        }
    }
    printf("%d",min_sum);
    return 0;
}