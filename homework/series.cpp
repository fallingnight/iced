/*
小宇正在读小学，今天老师布置了几道数学题目。小宇平时上课经常不专心，这些他可发愁了，怎么办呢？看看你能不能帮帮他。
题目是给你一组有规律序列的前面5个整数，请你给出它后面跟着的5个整数，如：1,2,3,4,5,___,___,___,__,___。这是个等差数 列，后面应该是6,7,8,9,10，就这么简单。而且现在小宇已经知道这串序列要么是等差数列，要么是等比数列（整数倍）或者是斐波那契型数列（即从数列第三项起，任意元素等于其前两项元素之和）。


输入

输入包含多组测试数据。每组输入5个整数，每个数字之间隔一个空格，当5个数字都为0时输入结束。


输出

对于每组输入，若是第一种情况则输出提示信息case one...再换行输出这串数列的后面5个数字，每个数字之间隔一个空格。若是多种情况同时满足(如既是等差又是等比数列)则按顺序依次输出


输入样例

1 2 4 8 16

1 2 3 4 5

0 0 0 0 0


输出样例

case two

32 64 128 256 512

case one

6 7 8 9 10

*/ 

#include<stdio.h>

int main(){
	int a,b,c,d,e;
    int x1,x2,x3,x4,x5;
	while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF){
		if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0){
          break;}
    if(b-a == c-b && c-b == d-c && d-c == e-d){
			printf("case one\n");
		int d2=b-a;
			x1=e+d2;
			x2=x1+d2;
			x3=x2+d2;
			x4=x3+d2;
			x5=x4+d2;
		printf("%d %d %d %d %d\n",x1,x2,x3,x4,x5);
	}
	if ((a!=0 && b!=0 && c!=0 && d!=0 && e!=0)&&((double)b/a==(double)c/b&& (double)c/b==(double)d/c && (double)d/c==(double)e/d)){
        printf("case two\n");
		double q =(double)b/a;
            x1=e*q;
			x2=x1*q;
			x3=x2*q;
			x4=x3*q;
			x5=x4*q;
	printf("%d %d %d %d %d\n",x1,x2,x3,x4,x5);
	} 
	if(c==a+b &&d==b+c && e==c+d){
		printf("case three\n");
		x1=d+e;
		x2=e+x1;
		x3=x1+x2;
		x4=x2+x3;
		x5=x3+x4;
	printf("%d %d %d %d %d\n",x1,x2,x3,x4,x5);
}

	}
	return 0;
	
}
