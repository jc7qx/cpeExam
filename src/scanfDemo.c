#include <stdio.h>

int main(void) {
    int input;
    int number1, number2;

    printf("�п�J�Ʀr�G");
    scanf("%d", &input);

    printf("�A��J���Ʀr�G%d\n", input);

    printf("�п�J��ӼƦr�A�����ϥΪťհϹj�^�G");
    scanf("%d %d", &number1, &number2);
    printf("�A��J���Ʀr�G%d %d\n", number1, number2);

    printf("�ЦA��J��ӼƦr�A�����ϥ�-���Ϲj�^�G");
    scanf("%d-%d", &number1, &number2);
    printf("�A��J���Ʀr�G%d-%d\n", number1, number2);

    char buf[50];

    printf("�п�J�r��G");
    scanf("%s", buf);
    printf("��J���r���� %s\n", buf); //��J�r��I��Ů氱��A�Ҽ{�ϥ�fgets

    fflush(stdin); // �M����J�w�İ�

    printf("�п�J 1 �� 5 ���r���G");
    scanf("%[1-5]", buf);
    printf("��J���r���� %s\n", buf);

    fflush(stdin); // �M����J�w�İ�

    printf("�п�J XYZ ���@�r���G");
    scanf("%[XYZ]", buf);
    printf("��J���r���� %s\n", buf);

    return 0;
}
