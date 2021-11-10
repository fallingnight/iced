/*
输入一个整数（int类型）a，输出a的二进制中表示0的位数和0的位数在总位数中的占比。 
（-2147483648有bug目前） 
*/

#include<stdio.h>

int two_n(int x){
while(x!=1){
	if(x%2==0){
		x=x/2;
	}else{
		return 0 ;
	}
}
return 1;
}
int main(){
	
	
int a,b,c,d,e,f;
b=0;
d=0;
double n,m;
scanf("%d",&a);
c=a;
for(int i=0;i<32;i++){
	if(a%2==0){
		b++;
	}
	a/=2;
	if(a!=0){
	d++; }
}

if(c>=0){
	n=b;
}else if(c<0 && c%2==0){
	f=-c;
e=two_n(f);
	if(e==1){
	n=d;
}else
	n=32-b;
}else{
	n=31-b;
}
m=n/32*100;
printf("%g %.2f%%",n,m);


return 0;
} 
