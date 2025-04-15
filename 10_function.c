/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-13 18:17:56
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>

void show_now_time()
{
    time_t currentTime = 0;
    currentTime = time(NULL);

    // printf("now time[%ld]\n", currentTime);
    printf("now time: [%s]\n", ctime(&currentTime));
}

int add(int a, int b)
{
    return (a+b);
}

int main(int argc, char *argv[])
{
    show_now_time();

    int c = add(100, 200);
    printf("100 + 200 = %d\n", c);
    

    return 0;
}
