#include<stdio.h>

int two_n(int x){
if (x==1){
	return 1;
}else{
	while(x!=1)
	{if(x&2==0){
		x/=2;
	}else{
	return 0;
	}
	}
return 1;}
}
int main(){
	int a,b;
	scanf("%d",&a);
	b=two_n(-a);
	if (b==0){
	printf("yes.");}
	else{
		printf("no.");
		
	} 

return 0;
}
