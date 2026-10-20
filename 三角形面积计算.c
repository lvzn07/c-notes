#include<math.h>
//#define PI 3.1416
int main()
{
	float a,b,c,s,area;
	printf("输入边长");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",area);
	
	

	return 0;
}
