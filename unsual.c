c语言奇淫技巧：

ｃ语言中有一个鲜为人知的技巧叫做＂趋向于＂,记作'-->'．
范例，当我们要定义一个倒数的程序时，我们可以定义一个趋向于０的程序：
#include<stdio.h>
int  main(int  argc,char**  argv)
{
int x=10;
while(x-->0)
{
printf("%d",x);
}
return 0;
}
下面这个程序将会展示从９到０的程序．

