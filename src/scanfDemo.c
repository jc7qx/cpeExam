#include <stdio.h>

int main(void) {
    int input;
    int number1, number2;

    printf("請輸入數字：");
    scanf("%d", &input);

    printf("你輸入的數字：%d\n", input);

    printf("請輸入兩個數字，中間使用空白區隔）：");
    scanf("%d %d", &number1, &number2);
    printf("你輸入的數字：%d %d\n", number1, number2);

    printf("請再輸入兩個數字，中間使用-號區隔）：");
    scanf("%d-%d", &number1, &number2);
    printf("你輸入的數字：%d-%d\n", number1, number2);

    char buf[50];

    printf("請輸入字串：");
    scanf("%s", buf);
    printf("輸入的字元為 %s\n", buf); //輸入字串碰到空格停止，考慮使用fgets

    fflush(stdin); // 清除輸入緩衝區

    printf("請輸入 1 到 5 的字元：");
    scanf("%[1-5]", buf);
    printf("輸入的字元為 %s\n", buf);

    fflush(stdin); // 清除輸入緩衝區

    printf("請輸入 XYZ 任一字元：");
    scanf("%[XYZ]", buf);
    printf("輸入的字元為 %s\n", buf);

    return 0;
}
