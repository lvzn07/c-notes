#include <math.h>
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
		double s = (a+b+c)/2.0;
		double area = sqrt(s*(s-a)*(s-b)*(s-c));
		double perimeter = a+b+c;
		printf("area = %.2f; perimeter = %.2f\n", area, perimeter);
	}
	else{
		printf("These sides do not cerrespond to a valid triangle\n");
	}
	return 0;
}
