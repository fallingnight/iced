#include<stdio.h>
#include<windows.h>
#define eps 1e-6     //给定一个精度epsilon 
#define ABS(VAL) (((VAL)>0)?(VAL):(-(VAL))) //定义绝对值运算  

float mypow(float y,int z){          //定义幂运算 
	if(z==0){
		return 1;
	} else if(z==1){
		return y;
	} else if(z==-1){
		return 1.0f/y;
	} else if(z>0){
		int r =2;
		float s = y*y;
		while(r<z-r){
			s*=s;
			r*=2;
		}
		if(r==z-r){
			return s*s;
		
		}else{
			return s*mypow(y,z-r); 
		}
	} else {
		int r=2;
		float s =1.0f/y*1.0f/y;
		while(r<-z-r){
			s*=s;
			r*=2;
		}
		if(r==-z-r){
			return s*s;
		}else{
			return s*mypow(y,z+r);
		}
	}
}


float mysqrt(float n){
	float  x0,x1;
	if(n==0){return 0;}
	if(n<0){return false;} 
	x0=n/2;
	x1=(x0+n/x0)/2; //牛顿迭代法,x1=x0-f(x0)/f'(X0), x1=x0-(x0^2-n)/2x0=x0-x0/2+n/2x0=x0/2+n/2x0
	do{
		x0=x1;
		x1=(x0+n/x0)/2;
	}while(ABS(x1-x0)>eps);
return x1;
} 

float mycbrt(float n){      //三次根号 
	float  x2,x3;
	if(n==0){return 0;}
	x2=n/2;
	x3=(2*x2+n/(x2*x2))/3;
	do{
		x2=x3;
		x3=(2*x2+n/(x2*x2))/3;
	}while(ABS(x3-x2)>eps);
return x3;
} 

float root_5(float n){            //五次根号 
    float x4,x5;
    if(n==0){return 0;}
    x4=n/2;
    x5=(4*x4+n/(x4*x4*x4*x4))/5;
    do{
		x4=x5;
		x5=(4*x4+n/(x4*x4*x4*x4))/5;
	}while(ABS(x5-x4)>eps);
	return x5;
}

float root_k(float n,int y)        //自定义开n次方计算函数 
 {
    float x6,x7;
    if(n==0){return 0;}
    if(y==1){return n;}
    if (y<=0){return false;
	}else if(y%2==0&&n<0){return false;}
    {
    x6=n/2;
    x7=((y-1)*x6+n/(mypow(x6,(y-1))))/y;
    do{
		x6=x7;
		x7=((y-1)*x6+n/(mypow(x6,(y-1))))/y;
	}while(ABS(x7-x6)>eps);
	return x7;}
}


int main () {
	float k,k2,k3,k4;
	int b;
printf("请输入x:");
scanf("%f",&k);
printf("请输入开方次数：");
scanf("%d",&b); 

k3=root_k(k,b); 
k2=root_5(k); 
k4=mycbrt(k);

printf("cbrt(%.2f)=%f",k,k4); 
printf("\nroot[5](%.2f)=%f",k,k2);
printf("\nroot[%d](%.2f)=%f\n",b,k,k3);

system("pause");


return 0;
}

