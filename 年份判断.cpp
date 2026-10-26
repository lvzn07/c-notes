#include <stdio.h>
int main()
{
 int y;
 scanf("%d",&y);
 if(y%4==0&&y%100!=0||y%400==0)
	 printf("%d是闰年",y);
 	
 else
 	 printf("%d不是闰年",y);
    return 0;
}
