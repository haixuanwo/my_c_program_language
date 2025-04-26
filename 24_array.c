/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-26 10:29:27
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>

void test_array()
{
    char a[5] = {"ABCDE"};
    printf("array char a[5]: %s\n", a);

    char b[] = {"ABCDEchina amera"};
    printf("array char b[]: %s\n", b);

    int c[6] = {1, 2, 3, 4, 5, 9};
    for (int i=0; i < sizeof(c)/sizeof(c[0]); i++)
    {
        printf("c[%d]=%d\n", i, c[i]);
    }
}

int main(int argc, char *argv[])
{
    test_array();
    return 0;
}
