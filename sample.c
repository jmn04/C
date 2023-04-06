#include <stdio.h>

int main(void)
{
    int num;
    int sum, count = 0;
    printf("テストの点数を入力せよ。\n");
    do{
        scanf("%d", &num);
        sum+=num;
        count++;
    } while (num>0);
    count--;
    printf("テストの合計点は%d点です\n",sum);
    printf("テストの平均点は%d点です\n", sum / count);
    return 0;
}