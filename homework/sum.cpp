/*
����
��1+2+��+n��0<=n<=100���ĺ͡�
����
��1������һ������n����ʾ��1�ӵ�n��
���
�����ֿ������(for,while,do...while)����1+2+��+n�ĺͣ�ÿ�ֿ�����������ռһ�С�
����
����
100
��� 
5050
5050
5050
*/
#include<stdio.h>

int main(){
	int n,sum;
	sum=0;
	scanf("%d",&n);
	for(int i=0; i<=n ; i++ ){
		sum+=i;
	}
	printf("%d\n",sum);
	sum=0;
	int i=0;
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("%d\n",sum);
	sum=0;
	i=0;
	do{
		sum+=i;
		i++;
	}while(i<=n);
	printf("%d",sum);	
	return 0;

}
