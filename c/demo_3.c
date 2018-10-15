/*
 * 猜数字游戏
 * 计算机随机产生一个1~100之间的数，让用户来猜。
 * 猜对了：打印right
 * 猜错了：打印wrong，并提示猜大了还是猜小了
 * 最多猜8次
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number,guess,i=8;
    srand(time(NULL));
    number = rand()%100 + 1;

    printf("Please guess a number:\n");
    while(i>0)
    {
        scanf("%d",&guess);
        if(guess == number){
            printf("Wonderful,you are right!\n\n");
            return 0;
        }else if(guess > number){
            printf("Sorry,your are wrong.");
            printf("too high\n");
        }else{
            printf("Sorry,your are wrong.");
            printf("too low\n");
        }
        i--;
    }
}