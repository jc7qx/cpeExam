#include <stdio.h>

int main(void) {
    char buf[20];

    puts("�п�J�r��G");
    fgets(buf, sizeof(buf), stdin);

    puts("��J���r�ꬰ�G");
    puts(buf);

    return 0;
}
