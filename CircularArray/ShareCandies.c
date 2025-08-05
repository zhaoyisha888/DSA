// 经典的模拟题。5个小朋友围成一圈，每人依次进行“分糖果”操作，操作步骤：
// 当前小朋友将自己手里的糖果均分成3份；
// 如果不能均分（糖果数量不能被3整除），余下的糖果自己吃掉；
// 留下一份给自己，另外两份分别给左右相邻的两个小朋友。
// 一轮结束后，输出每个小朋友手中糖果的数量以及本轮内被吃掉的糖果总数。

#include <stdio.h>

int main() {
    int candies[5];
    int i;
    int share, eat, left, right;
    int eaten = 0;

    // 读入糖果数量
    for (i = 0; i < 5; i++) {
        scanf("%d", &candies[i]);
    }

    // 模拟分糖果过程
    for (i = 0; i < 5; i++) {
        
        share = candies[i] / 3;
        eat = candies[i] % 3;
        eaten += eat;

        candies[i] = share;  // 自己留一份

        // 左右相邻
        left = (i - 1 + 5) % 5;
        right = (i + 1) % 5;

        candies[left] += share;
        candies[right] += share;
    }

    // 输出结果
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