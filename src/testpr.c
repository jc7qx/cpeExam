#include <stdio.h>

int main(void){
    int count = printf("This is a good day!\n");
    printf("%d\n", count);

    printf("��ܦr�� %c\n", 'A');
    printf("��ܦr���s�X %d\n", 'A');
    printf("��ܦr���s�X %c\n", 65);
    printf("��ܤQ�i���� %d\n", 15);
    printf("��ܤK�i���� %o\n", 15);
    printf("��ܤQ���i���� %X\n", 15);
    printf("��ܤQ���i���� %x\n", 15);
    printf("��ܬ�ǰO�� %E\n", 0.001234);
    printf("��ܬ�ǰO�� %e\n", 0.001234);

    printf("example:%6.2f\n", 19.234);
    printf("example:%-6.2f\n", 19.234);

    return 0;
}
