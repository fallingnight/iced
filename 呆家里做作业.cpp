#include<stdio.h>
#include<windows.h>
#include<bits/stdc++.h>
#include<math.h>
#define height 8
#define length 12
#define width 10
//曾经我还没开始敲代码的时候，有个人每天都在敲一些我看不懂的代码；现在我开始学敲代码了，但是那个人或许再也不会去敲代码了 。 // 

using namespace std;

void rgb_init(){
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwInMode,dwOutMode;
	GetConsoleMode(hIn,&dwInMode);
	GetConsoleMode(hOut,&dwOutMode);
	dwInMode |=0x0200;
	dwOutMode |=0x0004;
	SetConsoleMode(hIn,dwInMode);
	SetConsoleMode(hOut,dwOutMode);
}

void rgb_set(int wr,int wg,int wb,int br,int bg, int bb){
	printf("\033[38;2;%d;%d;%dm\033[48;2;%d;%d;%dm",wr,wg,wb,br,bg,bb);
}
//先整一波花里胡哨的//
 

int main (){
	int volume;
	volume= height * length * width ;
	
	rgb_init();
	rgb_set(255,106,106,0,0,0);
	
	
	printf("Dimensions:%dx%dx%d\n",length,width,height);
	printf("Volume(cube inches):%d\n",volume);
	printf("Dimensional weight(pounds):%f\n\n",(volume+165.0f)/166.0f) ; //dweight.c//
	
	rgb_set(255,255,255,255,106,106);
	printf("!!!!!KCl play the game !!!!!\n\n");
	rgb_set(255,106,106,0,0,0);
	system("pause");
	
	
	rgb_set(255,236,139,0,0,0);
	
	
	int x,y;
	printf("please enter x:");
	scanf("%d",&x);
	y=((((3*x+2)*x-5)*x-1)*x+7)*x-6; 
	printf("%d",y);                //p26//

    rgb_set(84,255,159,0,0,0);
    int m,n,d,g,h;
	printf("\n\nplease enter a dollar amount:") ;
	scanf("%d",&m);
	n=m/20;
	m=m-n*20;
	d=m/10;
	m=m-d*10;
	g=m/5;
	m=m-g*5;
	h=m/1;
	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",n,d,g,h); // p27//
	system("pause");
	
	
	rgb_set(135,206,250,0,0,0);
	float poi;
	printf("\nplease enter a num:");
	scanf("%f",&poi);
	float poa = poi * poi +10*poi +17 ;
	printf("%f\n\n",poa);
    system("pause");
	
	rgb_set(171,130,255,0,0,0);
	float k,q,p;
	printf("enter amount of loan:");
	scanf("%f",&k);
	printf("enter interest rate:");
	scanf("%f",&q);
	printf("enter monthly payment:");
	scanf("%f",&p);
	
	rgb_set(0,245,255,0,0,0);
	k=k-p+k*q/100.0f/12.0f;
	printf("\n\nbalance remaining after first payment:$%.2f",k);
	k=k-p+k*q/100.0f/12.0f;
	printf("\nbalance remaining after second payment:$%.2f",k);
	k=k-p+k*q/100.0f/12.0f;
	printf("\nbalance remaining after third payment:$%.2f\n\n",k);  //p27//
	system("pause");                                                 
	
	rgb_set(122,255,122,0,0,0);
	float k1,k10,k2,k3,k4,a,b,c;
	printf("\n(a)x^2+(b)x+(c)=(y),\nplease enter a:");
	scanf("%f",&a);
	printf("please enter b:");
	scanf("%f",&b);
	printf("please enter c:");
	scanf("%f",&c);
	printf("please enter y:");
	scanf("%f",&k2);
	
	
	k3=b*b-4.0f*a*(c-k2);
	 
	if(k3<0) {
		printf("\nfalse\n");
	}else{
		k4= sqrt(k3);
		k1=(-b+k4)/(2.0f*a);
		k10=(-b-k4)/(2.0f*a);
	printf("\nx1=%.2f\nx2=%.2f\n\n",k1,k10)	 ;
	}                                   //一元二次方程// 
	
	system("pause");
	
	return 0;
} 
