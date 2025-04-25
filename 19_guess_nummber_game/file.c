/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-25 23:57:50
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-25 23:59:47
 * @Description: file content
 */
#include <stdio.h>

int save_score(unsigned int score, char *fileName)
{
    FILE *fp;
    fp = fopen(fileName, "r+");
    if (fp == NULL)
    {
        fp = fopen(fileName, "w+");
        if (NULL == fp)
        {
            printf("Error! opening file\n");
            return -1;
        }
    }

    size_t len = fwrite(&score, 1, sizeof(unsigned int), fp);
    printf("fwrite len[%lu] score[%u]\n", len, score);

    fclose(fp);
    return 0;
}

int get_score(unsigned int *score, char *fileName)
{
    FILE *fp;
    fp = fopen(fileName, "r+");
    if (fp == NULL)
    {
        fp = fopen(fileName, "w+");
        if (NULL == fp)
        {
            printf("Error! opening file\n");
            return -1;
        }
    }

    size_t len = fread(score, 1, sizeof(unsigned int), fp);
    printf("fread len[%lu] score[%u]\n", len, *score);

    fclose(fp);
    return 0;
}
