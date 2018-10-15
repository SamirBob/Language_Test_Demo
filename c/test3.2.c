/*求1~100的和*/
#include <stdio.h>

int main()
{
    int sum = 0,i = 1;
    while(i<=100){
        sum = sum + i;
        i++;
    }
    printf("sum = %d\n",sum);
}