/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-25 22:58:58
 * @Description: file content
 */

 #include <stdio.h>
 #include <unistd.h>

unsigned int totalScore = 110;

int main()
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
    printf("fwrite len[%lu]\n", len);

    int result = fseek(fp, 0, SEEK_SET); // 从起始位置，移动到起始点
    printf("fseek result[%d]\n", result);

    unsigned int temp = 0;
    len = fread(&temp, 1, sizeof(unsigned int), fp);
    printf("fread len[%lu]\n", len);


    printf("fread temp[%u]\n", temp);

    fclose(fp);
    return 0;
}

