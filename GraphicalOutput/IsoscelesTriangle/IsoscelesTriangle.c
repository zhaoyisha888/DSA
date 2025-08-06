#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);  // 读入一个字符

    int height = 3;
    for (int i = 0; i < height; i++) {
        int num = 2*i + 1;
        int space = height - i - 1;
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < num; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

//另外，顺序结构里若无输入可直接使用输出语句
// 但要注意写法，输出语句中可分段但是不能加符号","分隔
// int main() {
    
//     printf( "  *\n"
//             " ***\n"      
//             "*****\n"
//     ); 

//     return 0;
// }

//或者直接一段输出  printf( "  *\n ***\n*****\n");