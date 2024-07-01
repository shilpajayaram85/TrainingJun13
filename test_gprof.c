/**********************************************************************
Filename - test_gprof.c
Purpose - Sample code to demonstrate gprof tool usage. Program 
calls functions func1(), func2() from main(), func1() internally calls an 
extern function new_func1() defined in another file 
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <test_gprof_new.h>

extern void new_func1(void);

static void func1(void)
{
    printf("\n Inside func1 \n");
    int i = 0;


    for(;i<0xffffff;i++);
    new_func1();

    return;
}

static void func2(void)
{
    printf("\n Inside func2 \n");
    int i = 0;


    //for loop is for explicit delay to increase execution time
    for(;i<0xffffaa;i++);
    return;
}

int main(void)
{
    printf("\n Inside main()\n");
    int i = 0;
    
    //for loop is for explicit delay to increase execution time
    for(;i<0xffffff;i++);
    func1();
    func2();

    return 0;
}
