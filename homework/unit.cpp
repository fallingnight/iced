/*
û��ܶ࣬��֪����û��bug 
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define M_FT 3.28
#define FT_IN 12
#define MI_M 1609.344
#define NMI_M 1852
#define ATM_MMHG 760
#define ATM_KPA 101.325
#define CLEAR_BUF \
 { \
int ch; \
while((ch=getchar())!=EOF&&ch!='\n')\
{ \
	; \
	} \
}

double L_U(double x1,char t1[5],char t2[5]){
	int i=0;
	double x2=0.0;
	double x3=0.0;
	
	if(strcmp(t1,"cm")==0){i=1;
	}else if (strcmp(t1,"mm")==0){i=2;
	}else if (strcmp(t1,"m")==0){i=3;
	}else if (strcmp(t1,"km")==0){i=4;
	}else if (strcmp(t1,"um")==0){i=5;
	}else if (strcmp(t1,"ly")==0){i=6;
	}else if (strcmp(t1,"au")==0){i=7;
	}else if (strcmp(t1,"nm")==0){i=8;
	}else if (strcmp(t1,"dm")==0){i=9;
	}else if (strcmp(t1,"ft")==0){i=10;
	}else if (strcmp(t1,"in")==0){i=11;
	}else if (strcmp(t1,"mi")==0){i=12;} 
	else if (strcmp(t1,"nmi")==0){i=13;} 
	else{
	i=0;
	}
	
	switch(i){
case 1:
			if (strcmp(t2,"mm")==0){x2=x1*10.0;
	}else if (strcmp(t2,"m")==0){x2=x1/100.0;
	}else if (strcmp(t2,"km")==0){x2=x1*(1e-5);
	}else if (strcmp(t2,"um")==0){x2=x1*10000.0;
	}else if (strcmp(t2,"ly")==0){x2=x1/100.0;
	x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x1/100.0;
	x2=x2/149597870691.0;
	}else if (strcmp(t2,"nm")==0){x2=x1*(1e+7);
	}else if (strcmp(t2,"dm")==0){x2=x1/10.0; 
	}else if (strcmp(t2,"ft")==0){x2=x1/100.0;
	x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x1/100.0;
	x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x1/(100.0*MI_M);
	}
	else if (strcmp(t2,"nmi")==0){x2=x1/(100.0*NMI_M);
	}
	else if (strcmp(t2,"cm")==0){x2=x1;
	}else{printf("�������������롣\n");
	}
	break;
case 2:
if (strcmp(t2,"cm")==0){x2=x1/10.0;
	}else if (strcmp(t2,"m")==0){x2=x1/1000.0;
	}else if (strcmp(t2,"km")==0){x2=x1*(1e-6);
	}else if (strcmp(t2,"um")==0){x2=x1*1000.0;
	}else if (strcmp(t2,"ly")==0){x2=x1/1000.0;
	x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x1/1000.0;
	x2=x2/149597870691.0;
	}else if (strcmp(t2,"nm")==0){x2=x1*(1e+6);
	}else if (strcmp(t2,"dm")==0){x2=x1/100.0; 
	}else if (strcmp(t2,"ft")==0){x2=x1/1000.0;
	x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x1/1000.0;
	x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x1/(1000.0*MI_M);
	}
	else if (strcmp(t2,"nmi")==0){x2=x1/(1000.0*NMI_M);
	}
	else if (strcmp(t2,"mm")==0){x2=x1;
	}else{printf("�������������롣\n");
	}	
	break;
case 3:
if (strcmp(t2,"mm")==0){x2=x1*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x1*100.0;
	}else if (strcmp(t2,"km")==0){x2=x1*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x1*(1e+6);
	}else if (strcmp(t2,"ly")==0){x2=x1/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x1/149597870691.0;
	}else if (strcmp(t2,"nm")==0){x2=x1*(1e+9);
	}else if (strcmp(t2,"dm")==0){x2=x1*10.0; 
	}else if (strcmp(t2,"ft")==0){x2=x1*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x1*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x1/MI_M;
	}
	else if (strcmp(t2,"nmi")==0){x2=x1/NMI_M;
	}
	else if (strcmp(t2,"m")==0){x2=x1;
	}else{printf("�������������롣\n");
	}
	break;
case 4:
if (strcmp(t2,"mm")==0){x2=x1*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x1*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x1*(1e+5);
	}else if (strcmp(t2,"um")==0){x2=x1*(1e+9);
	}else if (strcmp(t2,"ly")==0){x2=x1/9460730472580.8;
	}else if (strcmp(t2,"au")==0){x2=x1/149597870.691;
	}else if (strcmp(t2,"nm")==0){x2=x1*(1e+12);
	}else if (strcmp(t2,"dm")==0){x2=x1*(1e+4); 
	}else if (strcmp(t2,"ft")==0){x2=x1*1000.0;
	x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x1*1000.0;
	x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x1*1000.0/MI_M;
	}
	else if (strcmp(t2,"nmi")==0){x2=x1*1000.0/NMI_M;
	}
	else if (strcmp(t2,"km")==0){x2=x1;
	}else{printf("�������������롣\n");
	}
	break;
case 5:
if (strcmp(t2,"mm")==0){x2=x1/1000.0;
	}else if (strcmp(t2,"m")==0){x2=x1*(1e-6);
	}else if (strcmp(t2,"km")==0){x2=x1*(1e-9);
	}else if (strcmp(t2,"cm")==0){x2=x1/10000.0;
	}else if (strcmp(t2,"ly")==0){x2=x1*(1e-6);
	x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x1*(1e-6);
	x2=x2/149597870691.0;
	}else if (strcmp(t2,"nm")==0){x2=x1*(1e+7);
	}else if (strcmp(t2,"dm")==0){x2=x1*(1e-5); 
	}else if (strcmp(t2,"ft")==0){x2=x1*(1e-6);
	x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x1*(1e-6);
	x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x1/((1e+6)*MI_M);
	}else if (strcmp(t2,"nmi")==0){x2=x1/((1e+6)*NMI_M);}
	else if (strcmp(t2,"um")==0){x2=x1;}
	else{printf("�������������롣\n");}
	break;

case 6:
	x2=x1*9460730472580800.0;
if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9);
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"ft")==0){x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);}else if (strcmp(t2,"ly")==0){x3=x1;
	x2=x3;
	}else{printf("�������������롣\n");
	}
	break;
case 7:
	x2=x1*149597870691.0;
if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9);
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"ft")==0){x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);
	}else if (strcmp(t2,"au")==0){x3=x1;
	x2=x3;
	}else{printf("�������������롣\n");
	}
	break;
case 8:
	x2=x1*(1e-9);
	if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"ft")==0){x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);
	}else if (strcmp(t2,"nm")==0){x3=x1;
	x2=x3;	}else{printf("�������������롣\n");
	}
	break;
case 9:
	x2=x1/10.0;
		if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9); 
	}else if (strcmp(t2,"ft")==0){x2=x2*M_FT;
		}else if (strcmp(t2,"in")==0){x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);
	}else if (strcmp(t2,"dm")==0){x3=x1;
	x2=x3;}else{printf("�������������롣\n");
	}
	break;
case 10:
	x2=x1/M_FT;
		if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9);
		}else if (strcmp(t2,"in")==0){x2=x1*FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}
	else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);
	}
	else if (strcmp(t2,"ft")==0){x3=x1;
	x2=x3;
	}else{printf("�������������롣\n");
	}
	break;
	
case 11:
	x2=x1/(M_FT*FT_IN);
		if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9);
		}else if (strcmp(t2,"ft")==0){x2=x1/FT_IN;
	}else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}
	else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);
	}
	else if (strcmp(t2,"in")==0){x3=x1;
	x2=x3;
	}else{printf("�������������롣\n");}
	break;
case 12:
	x2=x1*MI_M;
		if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9);
		}else if (strcmp(t2,"in")==0){x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"ft")==0){x2=x2*M_FT;
	}
	else if (strcmp(t2,"nmi")==0){x2=x2/(NMI_M);
	}
	else if (strcmp(t2,"mi")==0){x3=x1;
	x2=x3;
	}else{printf("�������������롣\n");
	}
	break;
case 13:
	x2=x1*NMI_M;
		if (strcmp(t2,"mm")==0){x2=x2*1000.0;
	}else if (strcmp(t2,"cm")==0){x2=x2*100.0;
	}else if (strcmp(t2,"km")==0){x2=x2*(1e-3);
	}else if (strcmp(t2,"um")==0){x2=x2*(1e+6);
	}else if (strcmp(t2,"m")==0){x2=x2;
	}else if (strcmp(t2,"ly")==0){x2=x2/9460730472580800.0;
	}else if (strcmp(t2,"au")==0){x2=x2/149597870691.0;
	}else if (strcmp(t2,"dm")==0){x2=x2*10.0; 
	}else if (strcmp(t2,"nm")==0){x2=x2*(1e+9);
		}else if (strcmp(t2,"in")==0){x2=x2*M_FT*FT_IN;
	}else if (strcmp(t2,"ft")==0){x2=x2*M_FT;
	}
	else if (strcmp(t2,"nmi")==0){x3=x1;
	x2=x3;}
	else if (strcmp(t2,"mi")==0){x2=x2/(MI_M);
	}else{printf("�������������롣\n");
	}
	break;
default:
	printf("�޷����㣬���������롣\n");
	
	}

return x2;
}


double M_U(double x1,char t1[5],char t2[5]){

int i=0;
	double xm=0.0;
	double xm2=0.0;
	
	if(strcmp(t1,"kg")==0){i=1;
	}else if (strcmp(t1,"g")==0){i=2;
	}else if (strcmp(t1,"mg")==0){i=3;
	}else if (strcmp(t1,"ug")==0){i=4;
	}else if (strcmp(t1,"t")==0){i=5;
	}else if (strcmp(t1,"lb")==0){i=6;
	}else if (strcmp(t1,"oz")==0){i=7;
	}else if (strcmp(t1,"��")==0){i=8;
	}else if (strcmp(t1,"��")==0){i=9;
	}else if (strcmp(t1,"ct")==0){i=10;
	}else{
	i=0;
	}
	
	switch(i){
case 1:
if(strcmp(t2,"kg")==0){xm=x1;
	}else if (strcmp(t2,"g")==0){xm=x1*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=x1*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=x1*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=x1/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=x1*2.2;
	}else if (strcmp(t2,"oz")==0){xm=x1*35.27;
	}else if (strcmp(t2,"��")==0){xm=x1*2;
	}else if (strcmp(t2,"��")==0){xm=x1*20;
	}else if (strcmp(t2,"ct")==0){xm=x1*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 2:
	xm=x1/1000.0;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 3:
	xm=x1/(1e+6);
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 4:
	xm=x1/(1e+9);
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 5:
	xm=x1*1000.0;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 6:
	xm=x1/2.2;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 7:
	xm=x1/35.27;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 8:
	xm=x1/2;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 9:
	xm=x1/20;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm2=x1;xm=xm2;
	}else if (strcmp(t2,"ct")==0){xm=xm*5000;
	}else{printf("�������������롣\n");
	}
	break;
case 10:
	xm=x1/5000;
if(strcmp(t2,"kg")==0){xm=xm;
	}else if (strcmp(t2,"g")==0){xm=xm*1000.0;
	}else if (strcmp(t2,"mg")==0){xm=xm*(1e+6);
	}else if (strcmp(t2,"ug")==0){xm=xm*(1e+9);
	}else if (strcmp(t2,"t")==0){xm=xm/1000.0;
	}else if (strcmp(t2,"lb")==0){xm=xm*2.2;
	}else if (strcmp(t2,"oz")==0){xm=xm*35.27;
	}else if (strcmp(t2,"��")==0){xm=xm*2;
	}else if (strcmp(t2,"��")==0){xm=xm*20;
	}else if (strcmp(t2,"ct")==0){xm2=x1;xm=xm2;
	}else{printf("�������������롣\n");
	}
	break;	
default:
	printf("�޷����㣬���������롣\n");
	
	}	
return xm;
}

double A_U(double x1,char t1[5],char t2[5]){
int i=0;
	double xa=0.0;
	
	if(strcmp(t1,"km2")==0){i=1;
	}else if (strcmp(t1,"cm2")==0){i=2;
	}else if (strcmp(t1,"dm2")==0){i=3;
	}else if (strcmp(t1,"mm2")==0){i=4;
	}else if (strcmp(t1,"m2")==0){i=5;
	}else if (strcmp(t1,"ha")==0){i=6;
	}else if (strcmp(t1,"are")==0){i=7;
	}else if (strcmp(t1,"acre")==0){i=8;
	}else if (strcmp(t1,"sqmi")==0){i=9;
	}else if (strcmp(t1,"mu")==0){i=10;
	}else{
	i=0;
	}
	switch(i){
case 1:
if(strcmp(t2,"km2")==0){xa=x1;
	}else if (strcmp(t2,"cm2")==0){xa=x1*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=x1*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=x1*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=x1*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=x1*100;
	}else if (strcmp(t2,"are")==0){xa=x1*10000;
	}else if (strcmp(t2,"acre")==0){xa=x1*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=x1/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=x1*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 2:
	xa=x1/(1e+10);
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=x1;
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 3:
	xa=x1/(1e+8);
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=xa*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=x1;
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 4:
		xa=x1/(1e+12);
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=xa*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=x1;
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 5:
		xa=x1/(1e+6);
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=xa*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=x1;
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 6:
		xa=x1/100;
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=xa*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=x1;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 7:
		xa=x1/10000;
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=xa*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=x1;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 8:
	xa=x1/247.10538;
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=xa*(1e+10);
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=x1;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 9:
	xa=x1*(MI_M/1000*MI_M/1000);
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=x1;
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=x1;
	}else if (strcmp(t2,"mu")==0){xa=xa*1500;
	}else{printf("�������������롣\n");
	}
	break;
case 10:
	xa=x1/1500;
if(strcmp(t2,"km2")==0){xa=xa;
	}else if (strcmp(t2,"cm2")==0){xa=x1;
	}else if (strcmp(t2,"dm2")==0){xa=xa*(1e+8);
	}else if (strcmp(t2,"mm2")==0){xa=xa*(1e+12);
	}else if (strcmp(t2,"m2")==0){xa=xa*(1e+6);
	}else if (strcmp(t2,"ha")==0){xa=xa*100;
	}else if (strcmp(t2,"are")==0){xa=xa*10000;
	}else if (strcmp(t2,"acre")==0){xa=xa*247.10538;
	}else if (strcmp(t2,"sqmi")==0){xa=xa/(MI_M/1000*MI_M/1000);
	}else if (strcmp(t2,"mu")==0){xa=x1;
	}else{printf("�������������롣\n");
	}
	break;
default:
	printf("�޷����㣬���������롣\n");
		}		
return xa;
}

double V_U(double x1,char t1[5],char t2[5]){
int i=0;
	double xv=0.0;
	
	if(strcmp(t1,"m3")==0){i=1;
	}else if (strcmp(t1,"cm3")==0){i=2;
	}else if (strcmp(t1,"dm3")==0){i=3;
	}else if (strcmp(t1,"mm3")==0){i=4;
	}else if (strcmp(t1,"km3")==0){i=5;
	}else if (strcmp(t1,"l")==0){i=6;
	}else if (strcmp(t1,"ml")==0){i=7;
	}else if (strcmp(t1,"gal")==0){i=8;
	}else{
	i=0;
	}
	switch(i){
case 1:
if(strcmp(t2,"m3")==0){xv=x1;
	}else if (strcmp(t2,"cm3")==0){xv=x1*(1e+6);
	}else if (strcmp(t2,"dm3")==0){xv=x1*1000;
	}else if (strcmp(t2,"mm3")==0){xv=x1*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=x1/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=x1*1000;
	}else if (strcmp(t2,"ml")==0){xv=x1*(1e+6);
	}else if (strcmp(t2,"gal")==0){xv=x1*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 2:
	xv=x1/(1e+6);
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=x1;
	}else if (strcmp(t2,"dm3")==0){xv=xv*1000;
	}else if (strcmp(t2,"mm3")==0){xv=xv*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=xv/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=xv*1000;
	}else if (strcmp(t2,"ml")==0){xv=x1;
	}else if (strcmp(t2,"gal")==0){xv=xv*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 3:
	xv=x1/1000;
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"dm3")==0){xv=x1;
	}else if (strcmp(t2,"mm3")==0){xv=xv*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=xv/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=x1;
	}else if (strcmp(t2,"ml")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"gal")==0){xv=xv*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 4:
		xv=x1/(1e+9);
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"dm3")==0){xv=xv*1000;
	}else if (strcmp(t2,"mm3")==0){xv=x1;
	}else if (strcmp(t2,"km3")==0){xv=xv/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=xv*1000;
	}else if (strcmp(t2,"ml")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"gal")==0){xv=xv*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 5:
		xv=x1*(1e+9);
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"dm3")==0){xv=xv*1000;
	}else if (strcmp(t2,"mm3")==0){xv=xv*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=x1;
	}else if (strcmp(t2,"l")==0){xv=xv*1000;
	}else if (strcmp(t2,"ml")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"gal")==0){xv=xv*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 6:
xv=x1/1000;
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"dm3")==0){xv=x1;
	}else if (strcmp(t2,"mm3")==0){xv=xv*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=xv/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=x1;
	}else if (strcmp(t2,"ml")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"gal")==0){xv=xv*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 7:
xv=x1/(1e+6);
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=x1;
	}else if (strcmp(t2,"dm3")==0){xv=xv*1000;
	}else if (strcmp(t2,"mm3")==0){xv=xv*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=xv/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=xv*1000;
	}else if (strcmp(t2,"ml")==0){xv=x1;
	}else if (strcmp(t2,"gal")==0){xv=xv*264.17205;
	}else{printf("�������������롣\n");
	}
	break;
case 8:
	xv=x1/264.17205;
if(strcmp(t2,"m3")==0){xv=xv;
	}else if (strcmp(t2,"cm3")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"dm3")==0){xv=xv*1000;
	}else if (strcmp(t2,"mm3")==0){xv=xv*(1e+9);
	}else if (strcmp(t2,"km3")==0){xv=xv/(1e+9);
	}else if (strcmp(t2,"l")==0){xv=xv*1000;
	}else if (strcmp(t2,"ml")==0){xv=xv*(1e+6);
	}else if (strcmp(t2,"gal")==0){xv=x1;
	}else{printf("�������������롣\n");
	}
	break;
default:
	printf("�޷����㣬���������롣\n");
		}	
return xv;
}

double T_U(double x1,char t1[5],char t2[5]){
	int i=0;
	double xt=0.0;
	
	if(strcmp(t1,"C")==0){i=1;
	}else if (strcmp(t1,"F")==0){i=2;
	}else if (strcmp(t1,"K")==0){i=3;
	}else{
	i=0;
	}
	switch(i){
case 1:
	if(strcmp(t2,"C")==0){xt=x1;
	}else if (strcmp(t2,"F")==0){xt=x1*1.8+32;
	}else if (strcmp(t2,"K")==0){xt=x1+273.15;
	}else{printf("�������������롣\n");
	}
	break;
case 2:
	if(strcmp(t2,"C")==0){xt=(x1-32)/1.8;
	}else if (strcmp(t2,"F")==0){xt=x1;
	}else if (strcmp(t2,"K")==0){xt=(x1-32)/1.8 +273.15;
	}else{printf("�������������롣\n");
	}
    break;
case 3:
	if(strcmp(t2,"C")==0){xt=x1-273.15;
	}else if (strcmp(t2,"F")==0){xt=(x1-273.15)*1.8+32;
	}else if (strcmp(t2,"K")==0){xt=x1;
	}else{printf("�������������롣\n");
	}
	break;
	default:
	printf("�޷����㣬���������롣\n");
		}
return xt;
}

double P_U(double x1,char t1[5],char t2[5]){
int i=0;
	double xp=0.0;
	
	if(strcmp(t1,"pa")==0){i=1;
	}else if (strcmp(t1,"kpa")==0){i=2;
	}else if (strcmp(t1,"hpa")==0){i=3;
	}else if (strcmp(t1,"atm")==0){i=4;
	}else if (strcmp(t1,"mmhg")==0){i=5;
	}else if (strcmp(t1,"cmhg")==0){i=6;
	}else if (strcmp(t1,"mpa")==0){i=7;
	}else{
	i=0;
	}
	switch(i){
case 1:
if(strcmp(t2,"pa")==0){xp=x1;
	}else if (strcmp(t2,"kpa")==0){xp=x1/1000;
	}else if (strcmp(t2,"hpa")==0){xp=x1/100;
	}else if (strcmp(t2,"atm")==0){xp=x1/(1000*ATM_KPA);
	}else if (strcmp(t2,"mmhg")==0){xp=x1*ATM_MMHG/(1000*ATM_KPA);
	}else if (strcmp(t2,"cmhg")==0){xp=x1*ATM_MMHG/(10000*ATM_KPA);
	}else if (strcmp(t2,"mpa")==0){xp=x1/(1e+6);
	}else{printf("�������������롣\n");
	}
	break;
case 2:
	xp=x1;
if(strcmp(t2,"pa")==0){xp=xp*1000;
	}else if (strcmp(t2,"kpa")==0){xp=xp;
	}else if (strcmp(t2,"hpa")==0){xp=xp*10;
	}else if (strcmp(t2,"atm")==0){xp=xp/(ATM_KPA);
	}else if (strcmp(t2,"mmhg")==0){xp=xp*ATM_MMHG/ATM_KPA;
	}else if (strcmp(t2,"cmhg")==0){xp=xp*ATM_MMHG/(10*ATM_KPA);
	}else if (strcmp(t2,"mpa")==0){xp=xp/(1e+3);
	}else{printf("�������������롣\n");
	}
	break;
case 3:
   xp=x1/10;
if(strcmp(t2,"pa")==0){xp=xp*1000;
	}else if (strcmp(t2,"kpa")==0){xp=xp;
	}else if (strcmp(t2,"hpa")==0){xp=x1;
	}else if (strcmp(t2,"atm")==0){xp=xp/(ATM_KPA);
	}else if (strcmp(t2,"mmhg")==0){xp=xp*ATM_MMHG/ATM_KPA;
	}else if (strcmp(t2,"cmhg")==0){xp=xp*ATM_MMHG/(10*ATM_KPA);
	}else if (strcmp(t2,"mpa")==0){xp=xp/(1e+3);
	}else{printf("�������������롣\n");
	}
	break;
case 4:
		xp=x1*ATM_KPA;
if(strcmp(t2,"pa")==0){xp=xp*1000;
	}else if (strcmp(t2,"kpa")==0){xp=xp;
	}else if (strcmp(t2,"hpa")==0){xp=xp*10;
	}else if (strcmp(t2,"atm")==0){xp=x1;
	}else if (strcmp(t2,"mmhg")==0){xp=x1*ATM_MMHG;
	}else if (strcmp(t2,"cmhg")==0){xp=x1*ATM_MMHG/10;
	}else if (strcmp(t2,"mpa")==0){xp=xp/(1e+3);
	}else{printf("�������������롣\n");
	}
	break;
case 5:
	xp=x1/ATM_MMHG*ATM_KPA;
if(strcmp(t2,"pa")==0){xp=xp*1000;
	}else if (strcmp(t2,"kpa")==0){xp=xp;
	}else if (strcmp(t2,"hpa")==0){xp=xp*10;
	}else if (strcmp(t2,"atm")==0){xp=x1/ATM_MMHG;
	}else if (strcmp(t2,"mmhg")==0){xp=x1;
	}else if (strcmp(t2,"cmhg")==0){xp=x1/10;
	}else if (strcmp(t2,"mpa")==0){xp=xp/(1e+3);
	}else{printf("�������������롣\n");
	}
	break;
case 6:
xp=x1/ATM_MMHG*ATM_KPA*10;
if(strcmp(t2,"pa")==0){xp=xp*1000;
	}else if (strcmp(t2,"kpa")==0){xp=xp;
	}else if (strcmp(t2,"hpa")==0){xp=xp*10;
	}else if (strcmp(t2,"atm")==0){xp=x1*10/(ATM_MMHG);
	}else if (strcmp(t2,"mmhg")==0){xp=x1*10;
	}else if (strcmp(t2,"cmhg")==0){xp=x1;
	}else if (strcmp(t2,"mpa")==0){xp=xp/(1e+3);
	}else{printf("�������������롣\n");
	}
	break;
case 7:
xp=x1*(1e+3);
if(strcmp(t2,"pa")==0){xp=xp*1000;
	}else if (strcmp(t2,"kpa")==0){xp=xp;
	}else if (strcmp(t2,"hpa")==0){xp=xp*10;
	}else if (strcmp(t2,"atm")==0){xp=xp/(ATM_KPA);
	}else if (strcmp(t2,"mmhg")==0){xp=xp*ATM_MMHG/ATM_KPA;
	}else if (strcmp(t2,"cmhg")==0){xp=xp*ATM_MMHG/(10*ATM_KPA);
	}else if (strcmp(t2,"mpa")==0){xp=x1;
	}else{printf("�������������롣\n");
	}
	break;
default:
	printf("�޷����㣬���������롣\n");
		}	
return xp;
}

double Time_U(double x1,char t1[5],char t2[5]){
int i=0;
	double xi=0.0;
	
	if(strcmp(t1,"yr")==0){i=1;
	}else if (strcmp(t1,"d")==0){i=2;
	}else if (strcmp(t1,"h")==0){i=3;
	}else if (strcmp(t1,"min")==0){i=4;
	}else if (strcmp(t1,"s")==0){i=5;
	}else if (strcmp(t1,"ms")==0){i=6;
	}else if (strcmp(t1,"us")==0){i=7;
	}else{
	i=0;
	}
	switch(i){	
case 1:
	xi=x1;
if(strcmp(t2,"yr")==0){xi=xi;
	}else if (strcmp(t2,"d")==0){xi=xi*365;
	}else if (strcmp(t2,"h")==0){xi=xi*365*24;
	}else if (strcmp(t2,"min")==0){xi=xi*365*24*60;
	}else if (strcmp(t2,"s")==0){xi=xi*365*24*60*60;
	}else if (strcmp(t2,"ms")==0){xi=xi*365*24*60*60*(1e+3);
	}else if (strcmp(t2,"us")==0){xi=xi*365*24*60*60*(1e+6);
	}else{printf("�������������롣\n");
	}
	break;
	
case 2:
	xi=x1/365;
if(strcmp(t2,"yr")==0){xi=xi;
	}else if (strcmp(t2,"d")==0){xi=x1;
	}else if (strcmp(t2,"h")==0){xi=x1*24;
	}else if (strcmp(t2,"min")==0){xi=x1*24*60;
	}else if (strcmp(t2,"s")==0){xi=x1*24*60*60;
	}else if (strcmp(t2,"ms")==0){xi=x1*24*60*60*(1e+3);
	}else if (strcmp(t2,"us")==0){xi=x1*24*60*60*(1e+6);
	}else{printf("�������������롣\n");
	}
	break;
case 3:
	xi=x1/365/24;
if(strcmp(t2,"yr")==0){xi=xi;
	}else if (strcmp(t2,"d")==0){xi=x1/24;
	}else if (strcmp(t2,"h")==0){xi=x1;
	}else if (strcmp(t2,"min")==0){xi=x1*60;
	}else if (strcmp(t2,"s")==0){xi=x1*60*60;
	}else if (strcmp(t2,"ms")==0){xi=x1*60*60*(1e+3);
	}else if (strcmp(t2,"us")==0){xi=x1*60*60*(1e+6);
	}else{printf("�������������롣\n");
	}
	break;
case 4:
	xi=x1;
if(strcmp(t2,"yr")==0){xi=xi/365/24/60;
	}else if (strcmp(t2,"d")==0){xi=xi/60/24;
	}else if (strcmp(t2,"h")==0){xi=xi/60;
	}else if (strcmp(t2,"min")==0){xi=xi;
	}else if (strcmp(t2,"s")==0){xi=xi*60;
	}else if (strcmp(t2,"ms")==0){xi=xi*60*(1e+3);
	}else if (strcmp(t2,"us")==0){xi=xi*60*(1e+6);
	}else{printf("�������������롣\n");
	}
	break;
case 5:
	xi=x1/60;
if(strcmp(t2,"yr")==0){xi=xi/365/24/60;
	}else if (strcmp(t2,"d")==0){xi=xi/60/24;
	}else if (strcmp(t2,"h")==0){xi=xi/60;
	}else if (strcmp(t2,"min")==0){xi=xi;
	}else if (strcmp(t2,"s")==0){xi=x1;
	}else if (strcmp(t2,"ms")==0){xi=x1*(1e+3);
	}else if (strcmp(t2,"us")==0){xi=x1*(1e+6);
	}else{printf("�������������롣\n");
	}
	break;
case 6:
	xi=x1/(60*(1e+3));
if(strcmp(t2,"yr")==0){xi=xi/365/24/60;
	}else if (strcmp(t2,"d")==0){xi=xi/60/24;
	}else if (strcmp(t2,"h")==0){xi=xi/60;
	}else if (strcmp(t2,"min")==0){xi=xi;
	}else if (strcmp(t2,"s")==0){xi=x1/(1e+3);
	}else if (strcmp(t2,"ms")==0){xi=x1;
	}else if (strcmp(t2,"us")==0){xi=x1*(1e+3);
	}else{printf("�������������롣\n");
	}
	break;
case 7:
	xi=x1/(60*(1e+6));
if(strcmp(t2,"yr")==0){xi=xi/365/24/60;
	}else if (strcmp(t2,"d")==0){xi=xi/60/24;
	}else if (strcmp(t2,"h")==0){xi=xi/60;
	}else if (strcmp(t2,"min")==0){xi=xi;
	}else if (strcmp(t2,"s")==0){xi=x1/(1e+6);
	}else if (strcmp(t2,"ms")==0){xi=x1/(1e+3);
	}else if (strcmp(t2,"us")==0){xi=x1;
	}else{printf("�������������롣\n");
	}
	break;

default:
	printf("�޷����㣬���������롣\n");
		}	
	
return xi;
}

double W_U(double x1,char t1[5],char t2[5]){
int i=0;
	double xw=0.0;
	
	if(strcmp(t1,"j")==0){i=1;
	}else if (strcmp(t1,"kwh")==0){i=2;
	}else if (strcmp(t1,"cal")==0){i=3;
	}else if (strcmp(t1,"kcal")==0){i=4;
	}else if (strcmp(t1,"kj")==0){i=5;
	}else{
	i=0;
	}
switch(i){
case 1:
	xw=x1; 
if(strcmp(t2,"j")==0){xw=xw;
	}else if (strcmp(t2,"kwh")==0){xw=xw/(1000*60*60);
	}else if (strcmp(t2,"cal")==0){xw=xw/4.18585;
	}else if (strcmp(t2,"kcal")==0){xw=xw/(4.18585*1000);
	}else if (strcmp(t2,"kj")==0){xw=xw/1000;
	}else{printf("�������������롣\n");
	}
	break;
case 2:
	xw=x1*1000*60*60; 
if(strcmp(t2,"j")==0){xw=xw;
	}else if (strcmp(t2,"kwh")==0){xw=x1;
	}else if (strcmp(t2,"cal")==0){xw=xw/4.18585;
	}else if (strcmp(t2,"kcal")==0){xw=xw/(4.18585*1000);
	}else if (strcmp(t2,"kj")==0){xw=xw/1000;
	}else{printf("�������������롣\n");
	}
	break;
case 3:
	xw=x1*4.18585; 
if(strcmp(t2,"j")==0){xw=xw;
	}else if (strcmp(t2,"kwh")==0){xw=xw/(1000*60*60);
	}else if (strcmp(t2,"cal")==0){xw=x1;
	}else if (strcmp(t2,"kcal")==0){xw=x1/1000;
	}else if (strcmp(t2,"kj")==0){xw=xw/1000;
	}else{printf("�������������롣\n");
	}
	break;
case 4:
	xw=x1*4.18585*1000; 
if(strcmp(t2,"j")==0){xw=xw;
	}else if (strcmp(t2,"kwh")==0){xw=xw/(1000*60*60);
	}else if (strcmp(t2,"cal")==0){xw=x1*1000;
	}else if (strcmp(t2,"kcal")==0){xw=x1;
	}else if (strcmp(t2,"kj")==0){xw=xw/1000;
	}else{printf("�������������롣\n");
	}
	break;
case 5:
	xw=x1*1000; 
if(strcmp(t2,"j")==0){xw=xw;
	}else if (strcmp(t2,"kwh")==0){xw=xw/(1000*60*60);
	}else if (strcmp(t2,"cal")==0){xw=xw/4.18585;
	}else if (strcmp(t2,"kcal")==0){xw=xw/(4.18585*1000);
	}else if (strcmp(t2,"kj")==0){xw=x1;
	}else{printf("�������������롣\n");
	}
	break;
default:
	printf("�޷����㣬���������롣\n");
		}	
	
return xw;
}



int main (){
	
printf("��λ����ver1.1\n\n");
printf("******��λ������ʹ�õ�λ�������ڵı�׼����******\n\n");
printf("��λ��\n\n");
printf("1.���ȵ�λ����\n��ǧ��(km)����(m)������(dm)������(cm)������(mm)��΢��(um)������(nm)����������(ly)�����ĵ�λ(au)����\n��Ӣ��(ft)��Ӣ��(in)��Ӣ��(mi)������(nmi)����\n\n");
printf("2.������λ����\n����(t)��ǧ��(kg)����(g)������(mg)��΢��(ug)��������(lb)����˾(oz)������(ct)�������������\n\n");
printf("3.�����λ����\n��ƽ��ǧ��(km2)������(ha)����Ķ(are)��ƽ����(m2)��ƽ������(dm2)��ƽ������(cm2)��ƽ������(mm2)����\n��ƽ��Ӣ��(sqmi)��ӢĶ(acre)����\n��Ķ(mu)����\n\n");
printf("4.�����λ����\n������ǧ��(km3)��������(m3)����������(dm3)����������(cm3)����������(mm3)��������(l)������(ml)������(gal)����\n\n");
printf("5.�¶ȵ�λ����\n�����϶�(C)�����϶�(F)�����϶�(K)����\n\n");
printf("6.ѹǿ��λ����\n������(mpa)��ǧ��(kpa)������(hpa)����˹��(pa)��������׼����ѹ(atm)���������׹���(cmhg)�����׹���(mmhg)����\n\n");
printf("7.ʱ�䵥λ����\n����(yr)����(d)��ʱ(h)����(min)����(s)������(ms)��΢��(us)����\n\n");
printf("8.����λ����\n��ǧ��ʱ(kwh)������ǧ��(kj)����(j)������ǧ��(kcal)����(cal)����\n\n");
printf("\n******ESC�˳������������******\n"); 

double x1,x2,k;
int a,b,n;
char t1[5],t2[5];
char key ='\0';
while((key=_getch())!=0x1b){
printf("��������Ҫ����ĵ�λ����(��λ�������)��");
scanf("%d",&n); 
while(n<1||n>8){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����(��λ�������)��\n");
CLEAR_BUF;
scanf("%d",&n);
}
switch(n){
case 1:
printf("\n���ȵ�λ����\n��ǧ��(km)����(m)������(dm)������(cm)������(mm)��΢��(um)������(nm)����������(ly)�����ĵ�λ(au)����\n��Ӣ��(ft)��Ӣ��(in)��Ӣ��(mi)������(nmi)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);

while((x1<0)||((strcmp(t1,"cm")!=0) && (strcmp(t1,"mm")!=0 ) && (strcmp(t1,"m")!=0) && (strcmp(t1,"km")!=0) && (strcmp(t1,"um")!=0) && (strcmp(t1,"ly")!=0) && (strcmp(t1,"au")!=0)&& (strcmp(t1,"nm")!=0) && (strcmp(t1,"dm")!=0) && (strcmp(t1,"ft")!=0) && (strcmp(t1,"in")!=0)&& (strcmp(t1,"mi")!=0)&& (strcmp(t1,"nmi")!=0))){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"cm")!=0) && (strcmp(t2,"mm")!=0 ) && (strcmp(t2,"m")!=0) && (strcmp(t2,"km")!=0) && (strcmp(t2,"um")!=0) && (strcmp(t2,"ly")!=0) && (strcmp(t2,"au")!=0)&& (strcmp(t2,"nm")!=0) && (strcmp(t2,"dm")!=0) && (strcmp(t2,"ft")!=0) && (strcmp(t2,"in")!=0)&& (strcmp(t1,"mi")!=0)&& (strcmp(t1,"nmi")!=0)){
printf("������������ȷ��λ: \n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=L_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
case 2:
printf("\n������λ����\n����(t)��ǧ��(kg)����(g)������(mg)��΢��(ug)��������(lb)����˾(oz)������(ct)�������������\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((x1<0)||((strcmp(t1,"t")!=0) && (strcmp(t1,"kg")!=0 ) && (strcmp(t1,"g")!=0) && (strcmp(t1,"mg")!=0) && (strcmp(t1,"ug")!=0) && (strcmp(t1,"lb")!=0) && (strcmp(t1,"oz")!=0)&& (strcmp(t1,"ct")!=0) && (strcmp(t1,"��")!=0) && (strcmp(t1,"��")!=0))){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"t")!=0) && (strcmp(t2,"kg")!=0 ) && (strcmp(t2,"g")!=0) && (strcmp(t2,"mg")!=0) && (strcmp(t2,"ug")!=0) && (strcmp(t2,"lb")!=0) && (strcmp(t2,"oz")!=0)&& (strcmp(t2,"ct")!=0) && (strcmp(t2,"��")!=0) && (strcmp(t2,"��")!=0)){
printf("������������ȷ��λ: \n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=M_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
case 3:
printf("\n�����λ����\n��ƽ��ǧ��(km2)������(ha)����Ķ(are)��ƽ����(m2)��ƽ������(dm2)��ƽ������(cm2)��ƽ������(mm2)����\n��ƽ��Ӣ��(sqmi)��ӢĶ(acre)����\n��Ķ(mu)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((x1<0)||((strcmp(t1,"km2")!=0) && (strcmp(t1,"ha")!=0 ) && (strcmp(t1,"are")!=0) && (strcmp(t1,"m2")!=0) && (strcmp(t1,"dm2")!=0) && (strcmp(t1,"cm2")!=0) && (strcmp(t1,"mm2")!=0)&& (strcmp(t1,"sqmi")!=0) && (strcmp(t1,"acre")!=0) && (strcmp(t1,"mu")!=0))){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"km2")!=0) && (strcmp(t2,"ha")!=0 ) && (strcmp(t2,"are")!=0) && (strcmp(t2,"m2")!=0) && (strcmp(t2,"dm2")!=0) && (strcmp(t2,"cm2")!=0) && (strcmp(t2,"mm2")!=0)&& (strcmp(t2,"sqmi")!=0) && (strcmp(t2,"acre")!=0) && (strcmp(t2,"mu")!=0)){
printf("������������ȷ��λ��\n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=A_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
case 4:
printf("\n�����λ����\n������ǧ��(km3)��������(m3)����������(dm3)����������(cm3)����������(mm3)��������(l)������(ml)������(gal)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((x1<0)||((strcmp(t1,"km3")!=0) && (strcmp(t1,"m3")!=0 ) && (strcmp(t1,"dm3")!=0) && (strcmp(t1,"cm3")!=0) && (strcmp(t1,"mm3")!=0) && (strcmp(t1,"l")!=0) && (strcmp(t1,"ml")!=0)&& (strcmp(t1,"gal")!=0))){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"km3")!=0) && (strcmp(t2,"m3")!=0 ) && (strcmp(t2,"dm3")!=0) && (strcmp(t2,"cm3")!=0) && (strcmp(t2,"mm3")!=0) && (strcmp(t2,"l")!=0) && (strcmp(t2,"ml")!=0)&& (strcmp(t2,"gal")!=0)){
printf("������������ȷ��λ��\n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=V_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
case 5: 
printf("\n�¶ȵ�λ����\n�����϶�(C)�����϶�(F)�����϶�(K)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((strcmp(t1,"C")!=0) && (strcmp(t1,"K")!=0 ) && (strcmp(t1,"F")!=0)){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"C")!=0) && (strcmp(t2,"K")!=0 ) && (strcmp(t2,"F")!=0)){
printf("������������ȷ��λ��\n");
CLEAR_BUF;
scanf("%s",&t2);
}
if(((strcmp(t1,"C")==0)&&(x1<-273.15))||((strcmp(t1,"F")==0)&&(x1<-459.67))||((strcmp(t1,"K")==0)&&(x1<0))){
	printf("�����ڡ�\n");
	break;
}else{
k=T_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;} 
case 6:
printf("\nѹǿ��λ����\n������(mpa)��ǧ��(kpa)������(hpa)����˹��(pa)��������׼����ѹ(atm)���������׹���(cmhg)�����׹���(mmhg)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((x1<0)||((strcmp(t1,"mpa")!=0) && (strcmp(t1,"kpa")!=0 ) && (strcmp(t1,"hpa")!=0) && (strcmp(t1,"pa")!=0) && (strcmp(t1,"mmhg")!=0) && (strcmp(t1,"cmhg")!=0) && (strcmp(t1,"atm")!=0))){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"mpa")!=0) && (strcmp(t2,"kpa")!=0 ) && (strcmp(t2,"hpa")!=0) && (strcmp(t2,"pa")!=0) && (strcmp(t2,"mmhg")!=0) && (strcmp(t2,"cmhg")!=0) && (strcmp(t2,"atm")!=0)){
printf("������������ȷ��λ��\n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=P_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
case 7:
printf("\nʱ�䵥λ����\n����(yr)����(d)��ʱ(h)����(min)����(s)������(ms)��΢��(us)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((x1<0)||((strcmp(t1,"yr")!=0) && (strcmp(t1,"d")!=0 ) && (strcmp(t1,"h")!=0) && (strcmp(t1,"min")!=0) && (strcmp(t1,"s")!=0) && (strcmp(t1,"ms")!=0) && (strcmp(t1,"us")!=0))){
printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"yr")!=0) && (strcmp(t2,"d")!=0 ) && (strcmp(t2,"h")!=0) && (strcmp(t2,"min")!=0) && (strcmp(t2,"s")!=0) && (strcmp(t2,"ms")!=0) && (strcmp(t2,"us")!=0)){
printf("������������ȷ��λ��\n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=Time_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
case 8:
printf("\n����λ����\n��ǧ��ʱ(kwh)������ǧ��(kj)����(j)������ǧ��(kcal)����(cal)����\n\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
scanf("%lf%s",&x1,&t1);
while((strcmp(t1,"j")!=0) && (strcmp(t1,"kj")!=0 ) && (strcmp(t1,"kwh")!=0) && (strcmp(t1,"kcal")!=0) && (strcmp(t1,"cal")!=0)){
printf("��λ�������������롣\n");
printf("��������Ҫ����ĵ�λ����ֵ+��λ����\n");
CLEAR_BUF;
scanf("%lf%s",&x1,&t1);
}
printf("�����뻻���λ��\n");
scanf("%s",&t2);
while((strcmp(t2,"j")!=0) && (strcmp(t2,"kj")!=0 ) && (strcmp(t2,"kwh")!=0) && (strcmp(t2,"kcal")!=0) && (strcmp(t2,"cal")!=0)){
printf("������������ȷ��λ��\n");
CLEAR_BUF;
scanf("%s",&t2);
}
k=W_U(x1,t1,t2);
printf("%g %s = %g %s\n",x1,t1,k,t2);
break;
default:
	printf("�������������롣\n");
printf("��������Ҫ����ĵ�λ����(��λ�������)��\n");
CLEAR_BUF;
scanf("%d",&n);
		} 
printf("\n******ESC�˳������������******\n\n");
}


return 0; 

}
