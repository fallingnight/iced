#include<math.h>
#include<stdio.h>
#include<windows.h>

int main(){
	double a,c,d;
	int b;
	
	printf("������x:");
	scanf("%lf",&a);
	printf("\n�����뿪������:");
	scanf("%d",&b);
	if(b<=0) {
	
		printf("\nfalse");}
	else if(a<0 && b%2==0) 
	{
		printf("\nfalse");}
	else{
	d=1.0f/b;
	c=pow(a,d);
	printf("\nroot[%d](%.2lf)=%lf\n",b,a,c);}

	system("pause");
	
	return 0;
	
}
