#include<stdio.h>
int main(void){
    int i;

for(i=0; i<5; i++)
{
    int temp = 1; 
    //for안에꺼만 5번 반복하는데 반복할때마다 temp를 1로 정의함.
    printf("temp = %d\n", temp);
    temp++;
}
return 0;

}