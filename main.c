#include<stdio.h>
int inc(int counter);

int main(void)
{
    int i=10;
 printf("before i=%d\n", i);
 i= inc(i);
 printf("after i=%d\n", i);

 return 0;
}

int inc(int counter)
{
counter++;
return counter; 
}