/**********************************************************************
Filename - test_gprof_new.c
Purpose - Sample code to demonstrate gprof tool usage. Has a function
new_func1() called externally from main()
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>

void new_func1(void)
{
    printf("\n Inside new_func1()\n");
    int i = 0;

    //for loop is for explicit delay to increase execution time
    for(;i<0xffffff;i++);

    return;
}
