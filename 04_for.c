/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-11 21:35:31
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    // for (;;)
    for (int i = 0; i < 5; i++)
    {
        printf("for: hello world\n");
        sleep(1);
    }

    return 0;
}
