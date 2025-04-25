/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-25 23:22:24
 * @Description: file content
 */

 #include <stdio.h>
 #include <unistd.h>

unsigned int totalScore = 119;

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

int get_score(unsigned int score, char *fileName)
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

    size_t len = fread(&score, 1, sizeof(unsigned int), fp);
    printf("fread len[%lu] score[%u]\n", len, score);

    fclose(fp);
    return 0;
}

int main()
{
    save_score(totalScore, "test.txt");

    get_score(totalScore, "test.txt");
    return 0;
}
