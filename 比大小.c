#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);//a放最小的 
	//从小到大输出，逆序就交换 
	if(a>b){
		t=a;
		a=b;
		b=t;
		
	}//a<=b
	if(a>c){
		t=a;
		a=c;
		c=t;
	
	}//a最小
	if(b>c){
		t=b;
		b=c;
		c=t;
		
	} 
	printf("%d<%d<%d",a,b,c);
    return 0;
}
