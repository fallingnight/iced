#include<stdio.h>
//��û���ߵ�·�����Ǳ������� �͵��������Ҫ����ʱ��˫�ֺ�ʮ
//                                             ����round_2�����տ���ʿ��
 
int main (){
	
	double a,b,c,fa,fb,fc;
	scanf("%lf %lf %lf %lf %lf",&a,&fa,&b,&fb,&c);
	fc=(fa-fb)/(a-b)*(c-b)+fb;
	printf("%.3lf",fc) ;
	return 0;
} 

