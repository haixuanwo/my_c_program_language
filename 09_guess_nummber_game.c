/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:44:16
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-11 22:09:28
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int answerNumber = rand() % 100;

    printf("Welcom to gusse nummber game !!!\n");

    int num;
    while (1)
    {

        printf("请输入一个整数: ");
        scanf("%d", &num);

        if (num > answerNumber)
        {
            printf("很遗憾，你输入的数字太大了\n");
        }
        else if (num < answerNumber)
        {
            printf("很遗憾，你输入的数字太小了\n");
        }
        else
        {
            printf("恭喜你答对了!!!\n");
        }
    }

    printf("game over!!!\n");
    return 0;
}
