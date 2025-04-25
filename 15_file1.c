/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-25 23:15:24
 * @Description: file content
 */

 #include <stdio.h>
 #include <unistd.h>

unsigned int totalScore = 110;

int save_total_score()
{
    FILE *fp;
    fp = fopen("test.txt", "r+");
    if (fp == NULL)
    {
        fp = fopen("test.txt", "w+");
        if (NULL == fp)
        {
            printf("Error! opening file\n");
            return -1;
        }
    }

    size_t len = fwrite(&totalScore, 1, sizeof(unsigned int), fp);
    printf("fwrite len[%lu] totalScore[%u]\n", len, totalScore);

    fclose(fp);
    return 0;
}

int get_total_score()
{
    FILE *fp;
    fp = fopen("test.txt", "r+");
    if (fp == NULL)
    {
        fp = fopen("test.txt", "w+");
        if (NULL == fp)
        {
            printf("Error! opening file\n");
            return -1;
        }
    }

    size_t len = fread(&totalScore, 1, sizeof(unsigned int), fp);
    printf("fread len[%lu] totalScore[%u]\n", len, totalScore);

    fclose(fp);
    return 0;
}

int main()
{
    save_total_score();

    get_total_score();
    return 0;
}
