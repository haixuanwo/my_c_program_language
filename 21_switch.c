/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-11 21:22:36
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-26 09:07:43
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>

void test_switch1()
{
    int type = 3;
    switch (type)
    {
        case 1:
        {
            printf("case : 1\n");
            break;
        }
        case 2:
        {
            printf("case : 2\n");
            break;
        }
        case 3:
        {
            printf("case : 3\n");
            break;
        }
        default:
        {
            printf("default\n");
            break;
        }
    }
}

int main(int argc, char *argv[])
{
    test_switch1();
    return 0;
}
