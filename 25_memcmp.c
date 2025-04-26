/*
 * @Author: Clark
 * @Email: haixuanwoTxh@gmail.com
 * @Date: 2025-04-26 10:32:29
 * @LastEditors: Clark
 * @LastEditTime: 2025-04-26 10:42:05
 * @Description: file content
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void test_memcmp()
{
    char str1[] = {"changfeng"}; // 字符串数组后面会存一个结束符'\0'=0
    char str2[] = {"changfeng"};

    int result = memcmp(str1, str2, sizeof(str1));
    printf("1 --- memcmp result[%d] size[%lu] strlen[%lu] str1[9]=0x%x\n",
        result, sizeof(str1), strlen(str1), str1[9]);
}

void test_memcmp1()
{
    char str1[] = {"changfeng"}; // 字符串数组后面会存一个结束符'\0'=0
    char str2[] = {"changfenf"};

    int result = memcmp(str1, str2, sizeof(str1));
    printf("2 --- memcmp result[%d] size[%lu] strlen[%lu] str1[9]=0x%x\n",
        result, sizeof(str1), strlen(str1), str1[9]);
}

void test_memcmp2()
{
    char str1[] = {"changfeng"}; // 字符串数组后面会存一个结束符'\0'=0
    char str2[] = {"changfenh"};

    int result = memcmp(str1, str2, sizeof(str1));
    printf("2 --- memcmp result[%d] size[%lu] strlen[%lu] str1[9]=0x%x\n",
        result, sizeof(str1), strlen(str1), str1[9]);
}

int main()
{
    test_memcmp();
    test_memcmp1();
    test_memcmp2();
    return 0;
}
