/*
 * 使用两种方法实现两个变量的交换
 */
 #include <stdio.h>

 int main()
 {
     int a,b,temp;
     a = 10;
     b = 20;
     printf("初始值：a = %d,b = %d\n",a,b);
     printf("第一种变量交换方法:");
     temp = a;
     a = b;
     b = temp;
     printf("交换后的结果：a = %d,b = %d\n",a,b);

     printf("第二种变量交换方法:");
     a = a + b;
     b = a - b;
     a = a - b;
     printf("交换后的结果：a = %d,b = %d\n",a,b);
 }