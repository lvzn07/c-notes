#include <stdio.h>
int main()
{
 int s;
 scanf("%d",&s);
 if(s>=90)
	printf("ÓÅ");
 else if(s>=80)
	printf("Á¼"); 
 else if(s>=60)
 	printf("ÖÐ");
 else if(s<60)
 printf("²î");
    return 0;
}
