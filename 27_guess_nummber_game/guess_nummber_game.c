/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:44:16
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-26 23:50:19
 * @Description: file content
 */
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "file.h"

// 全局变量
unsigned int totalScore = 0;


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

bool start_gusse_nummber_game()
{
    printf("Welcom to gusse nummber game !!!\n");
    printf("请输入【0,99】之间的数字\n");

    srand(time(NULL));
    int answerNumber = rand() % 100;

    #define BASIC_SCORE 50
    unsigned int currentScore = BASIC_SCORE;

    int num;
    while (1)
    {
        printf("请输入一个整数: ");
        scanf("%d", &num);
        //if (num < 0 || num > 99)
        #define STOP 886
        if (STOP == num)
        {
            return false;
        }

        if (is_correct(num, answerNumber))
        {
            totalScore += currentScore;
            break;
        }

        currentScore -= 5;
        if (currentScore <= 0)
        {
            printf("游戏结束，你未获得分数\n");
            break;
        }
    }

    printf("本次得分: %d, 总分数是: %d\n", currentScore, totalScore);
    save_score(totalScore, "test.txt");

    return true;
}

char account[] = {"changfeng"};
char passwd[] = {"cf123456"};

bool login(char *account, char *passwd)
{
    printf("Please input account and passwd\n");

    char inputAccount[64] = {0};
    char inputPasswd[64] = {0};

    printf("account:");
    scanf("%s", inputAccount);

    printf("passwd:");
    scanf("%s", inputPasswd);

    if (0 != memcmp(inputAccount, account, strlen(inputAccount))
        || 0 != memcmp(inputPasswd, passwd, strlen(inputPasswd)))
    {
        printf("You input account or passwd is not correct\n");
        return false;
    }

    printf("Congraduation login success\n\n");
    return true;
}

int run_game()
{
    if (!login(account, passwd))
    {
        return -1;
    }

    get_score(&totalScore, "test.txt");
    printf("The start totalScore[%u]\n", totalScore);

    while(1)
    {
        if (!start_gusse_nummber_game())
        {
            break;
        }
    }

    printf("game over, good bye!!!\n");
    return 0;
}
