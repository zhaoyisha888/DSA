// �����ģ���⡣5��С����Χ��һȦ��ÿ�����ν��С����ǹ����������������裺
// ��ǰС���ѽ��Լ�������ǹ����ֳ�3�ݣ�
// ������ܾ��֣��ǹ��������ܱ�3�����������µ��ǹ��Լ��Ե���
// ����һ�ݸ��Լ����������ݷֱ���������ڵ�����С���ѡ�
// һ�ֽ��������ÿ��С���������ǹ��������Լ������ڱ��Ե����ǹ�������

#include <stdio.h>

int main() {
    int candies[5];
    int i;
    int share, eat, left, right;
    int eaten = 0;

    // �����ǹ�����
    for (i = 0; i < 5; i++) {
        scanf("%d", &candies[i]);
    }

    // ģ����ǹ�����
    for (i = 0; i < 5; i++) {
        
        share = candies[i] / 3;
        eat = candies[i] % 3;
        eaten += eat;

        candies[i] = share;  // �Լ���һ��

        // ��������
        left = (i - 1 + 5) % 5;
        right = (i + 1) % 5;

        candies[left] += share;
        candies[right] += share;
    }

    // ������
    for (i = 0; i < 5; i++) {
        printf("%d", candies[i]);
        if (i < 4) printf(" ");
    }
    printf("\n%d\n", eaten);

    return 0;
}



// int main() {
//     int init[5];
//     int res[5] = {0};
//     int eaten = 0;
    
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d", &init[i]);
//     }
//     for(int i=0;i<5;i++){
//         int share=init[i]/3;
//         int eat = init[i]%3;
//         eaten +=eat;

//         res[i]+=share;
//         res[(i+4)%5]+=share;
//         res[(i+1)%5]+=share;
        
//     }
//     for(int i = 0; i<5 ; i++){
//         printf("%d",res[i]);
//         if(i<4) printf(" ");
//     }
//     printf("\n%d\n",eaten);
//     return 0;
// }