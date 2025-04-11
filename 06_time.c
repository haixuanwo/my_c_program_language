/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:44:16
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-11 21:49:22
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
    time_t currentTime = 0;
    while (1)
    {
        currentTime = time(NULL);

        printf("now time[%ld]\n", currentTime);
        printf("now time: [%s]\n", ctime(&currentTime));

        sleep(1);
    }

    return 0;
}
