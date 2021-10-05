#include<math.h>
#include<stdio.h>
#include<windows.h>

int main(){
	float a,c,d;
	int b;
	
	printf("请输入x:");
	scanf("%f",&a);
	printf("\n请输入开方次数:");
	scanf("%d",&b);
	if(b<=0) {
	
		printf("\nfalse");}
	else if(a<0 && b%2==0) 
	{
		printf("\nfalse");}
	else{
	d=1.0f/b;
	c=pow(a,d);
	printf("\nroot[%d](%.2f)=%f\n",b,a,c);}

	system("pause");
	
	return 0;
	
}
