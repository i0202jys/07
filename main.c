#include <stdio.h>
void sub(void);

int main(void)
{
int i;
for ( i=0; i<3; i++ )
 sub();

return 0;
}

void sub(void)
{
int auto_count = 0;//매순간 0으로 재정의
static int static_count = 0;//저번에 쓴 숫자 붙들고 있음.
auto_count++;
static_count++;
printf("auto_count=%d\n", auto_count);
printf("static_count=%d\n", static_count);
}