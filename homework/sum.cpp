/*
描述
求1+2+…+n（0<=n<=100）的和。
输入
第1行输入一个整数n，表示从1加到n。
输出
用三种控制语句(for,while,do...while)计算1+2+…+n的和，每种控制语句计算结果占一行。
样例
输入
100
输出 
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
