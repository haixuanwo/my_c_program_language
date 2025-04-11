/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:44:16
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-11 21:56:16
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    while (1)
    {
        srand(time(NULL));
        printf("rand nummber[%d]\n", rand() % 100);

        sleep(1);
    }

    return 0;
}
