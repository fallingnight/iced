#include<stdio.h>
#include<windows.h>
#include<math.h>
#define eps 1e-6
#define ABS(VAL) (((VAL)>0)?(VAL):(-(VAL)))


float mysqrt(float n){
	float  x0,x1;
	if(n==0){return 0;}
	x0=n/2;
	x1=(x0+n/x0)/2;
	do{
		x0=x1;
		x1=(x0+n/x0)/2;
	}while(ABS(x1-x0)>eps);
return x1;
} 

int main()
{  int x,y,z,q;
   y=4;
   z=100;
   q=400;
   printf("��ӭʹ�����������!\n"); 
   printf("��������ݣ�");
   scanf("%d",&x);

  if(x%y==0 && x%z!=0||x%q==0){
  	printf("\n%d�������ꡣ\n",x); 
  }else{
    printf("\n%d�겻�����ꡣ\n",x);
   } 

system("pause");

int i;
float p;
i=233;
p=8790.234f;
printf("|%d|%10d|%-3d|%3.9d|\n",i,i,i,i);
printf("|%10.3f|%10.3e|%-10g|\n",p,p,p);
printf("Zc\tKCl\tK2SO4\n\tK2CO3\tKClO3\tKClO4\n");

float k;
printf("������k:");
scanf("%f",&k);
k=mysqrt(k);
printf("sqrtk=%f\n",k); 
   
   return 0;
   
}
