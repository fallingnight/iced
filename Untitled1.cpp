#include<stdio.h>
//走没人走的路和他们背道而驰 就当你信念快要崩塌时请双手合十
//                                             ——round_2《向日葵武士》
 
int main (){
	
	double a,b,c,fa,fb,fc;
	scanf("%lf %lf %lf %lf %lf",&a,&fa,&b,&fb,&c);
	fc=(fa-fb)/(a-b)*(c-b)+fb;
	printf("%.3lf",fc) ;
	return 0;
} 

