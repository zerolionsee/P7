/* #include <stdio.h>
int main()
{
  int a = 0;
  int b = 1;
  if(a==2)
    if(b==1)
      printf("hehe\n");
    else
      printf("haha\n");
  return 0;
}
 */

/* if(conditin)
{
  return x;
}
return y; */

 #include <stdio.h>
int main()
{
  // char str[]={0};
  int i;
  // printf("input a number:");
  // scanf("%d\n", &a);
  for (i = 1; i < 100;i++)
  {
    if(i%2==1)
      printf("%d\n", i);
  }
   return 0;
}

//switch

/* #include <stdio.h>
int main()
{
  int day = 0;
  scanf("%d", &day);
  switch (day)
  {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    printf("工作日\n");
    break;
  case 6:
  case 7:
    printf("休息日\n");
    break;
    default:
    break;
  }
  return 0;
} */
/* #include <stdio.h>
int main()
{
  int n = 1;
  int m = 2;
  switch (n)
  {
  case 1:
    m++;//没有break,执行下一句n++
  case 2://n=1,不判断，直接执行语句
    n++;
  case 3:
    switch (n)
    {
    case 1:
      n++;
    case 2:
      m++;
      n++;
      break;
    }
    case 4:
      m++;
      break;
    default:
      break;
    printf("m=%d\n,n=%d\n", m, n);//跳出，不执行了
  }
    printf("m=%d\n,n=%d\n", m, n);
} */

//while循环
#include <stdio.h>
int main()
{
  int i = 0;
  while(i<=10)
  {
    if(i==5)
    continue;//continue,终止本次循环，跳转到判断，继续执行。
    printf("%d", i);
    i++;
  }
} */
int main()
{
  int ch;
  while((ch=getchar())!=EOF)
    putchar(ch);
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int ch = 0;
  int ret = 0;
  char password[20] = {0};
  printf("input password:\n");
  scanf("%s", &password);
  while ((ch=getchar())!='\n')
  {
    ;
  }
  printf("please confirm(y/n):");
  ret = getchar();
  if(ret=='y')
    printf("confirm success!\n");
    else
      printf("give up confirm\n");
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int ch = 0;
  while((ch=getchar())!=EOF)
  {
    if (ch<'0'||ch>'9')
    continue;
    putchar(ch);
  }
  return 0;
}
 */
//上下，两个不一样吗？
/* #include <stdio.h>
int main()
{
  int ch = 0;
  while ((ch = getchar()) != EOF)
  {
    if (ch >= '0' && ch <= '9')
    putchar(ch);
  }
  return 0;
} */
