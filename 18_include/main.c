
#include "test.h"

#include <stdio.h>

void my_show()
{
    show();
    printf("my_show\n");
}

int main()
{
    show();
    my_show();
    return 0;
}
