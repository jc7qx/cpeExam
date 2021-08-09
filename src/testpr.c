#include <stdio.h>

int main(void){
    int count = printf("This is a good day!\n");
    printf("%d\n", count);

    printf("顯示字元 %c\n", 'A');
    printf("顯示字元編碼 %d\n", 'A');
    printf("顯示字元編碼 %c\n", 65);
    printf("顯示十進位整數 %d\n", 15);
    printf("顯示八進位整數 %o\n", 15);
    printf("顯示十六進位整數 %X\n", 15);
    printf("顯示十六進位整數 %x\n", 15);
    printf("顯示科學記號 %E\n", 0.001234);
    printf("顯示科學記號 %e\n", 0.001234);

    printf("example:%6.2f\n", 19.234);
    printf("example:%-6.2f\n", 19.234);

    return 0;
}
