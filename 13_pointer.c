/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-25 23:03:55
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>

void add_a_value(int *q)
{
    *q += 120;
}

int main(int argc, char *argv[])
{
    int a = 100;
    int *p = &a;

    printf("1 --- a[%d] *p[%d] addr[%p]\n", a, *p, p);

    add_a_value(p);
    printf("2 --- a[%d] aAddr[%p] *p[%d] pAddr[%p]\n", a, &a, *p, p);

    return 0;
}
