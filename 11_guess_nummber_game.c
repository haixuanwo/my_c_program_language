/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:44:16
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-15 22:29:08
 * @Description: file content
 */
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_correct(int num, int answerNumber)
{
    if (num == answerNumber)
    {
        printf("恭喜你答对了!!!\n");
        return true;
    }

    if (num > answerNumber)
    {
        printf("很遗憾，你输入的数字太大了\n");
    }
    else if (num < answerNumber)
    {
        printf("很遗憾，你输入的数字太小了\n");
    }

    return false;
}

void start_gusse_nummber_game()
{
    printf("Welcom to gusse nummber game !!!\n");
    printf("请输入【0,99】之间的数字\n");

    srand(time(NULL));
    int answerNumber = rand() % 100;

    int num;
    while (1)
    {
        printf("请输入一个整数: ");
        scanf("%d", &num);

        if (is_correct(num, answerNumber))
        {
            break;
        }
    }

    printf("game over!!!\n");
}

int main(int argc, char *argv[])
{
    start_gusse_nummber_game();
    return 0;
}
