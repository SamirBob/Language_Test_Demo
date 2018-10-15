/*
 *  某地发生了一件谋杀案，侦探确定杀人凶手是
 *四个嫌疑犯中的一个，嫌疑犯供词如下：
 *  A说：不是我
 *  B说：是C
 *  C说：是D
 *  D说：C在胡说
 *其中，三个人说了真话，一个人说的是假话，确定谁
 *是凶手？
 */
#include <stdio.h>

int main()
{
    int i,sum = 0,flag = 0;
    char killer;

    for(i=1;i<=4;i++)
    {
        killer = 64 + i;
        sum = (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D');
        if(sum == 3)
        {
            flag = 1;
            printf("%c is the killer.\n",killer);
            break;
        }
    }
    if(flag == 0)
        printf("Can not find\n");
    return 0;
}
