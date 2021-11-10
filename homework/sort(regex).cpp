/*
读入n名学生的姓名、身份证号、成绩。查找并输出匹配查找串的学生的姓名和学号和成绩。学生名单中可能缺考，没有成绩，表示为n/a。

如果查找串是针对姓名或者身份证号，则是模糊查找，即只要其中包含查找串(区分大小写)即算满足条件，如果查找串是针对成绩，则是精确查找。

每个测试输入包含1个测试用例，格式为
  第1行：正整数n  待查找串
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名为不超过10个字符的字符串，身份证是标准18位，成绩为0到100之间的一个整数。

输出包含相应查找串的学生信息(姓名 学号 成绩  排名)(如果成绩为n/a，则排名就为n/a)，项之间用空格隔开。每个学生一行。其中排名是按照成绩降序排列的排名。如果有多个学生的成绩相同，则这些学生的排名相同，并且随后的几个排名将跳过。满足条件的多个学生按照输入的顺序输出。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct info 
{ char name[11];
  char id[19];
  char sco[5];
  int rank;
};

int iss (char s[],char t[]){ 
	int z,x,c,v,k;
	z=0;
	c=strlen(t);
	v=strlen(s);
	k=0;
for (z=0;z<c;z++){
	if(t[z]==s[0]) { 
	if (v==1){
		k=1;
	} else{
		for(x=1;x<v;x++){        
			if(s[x]==t[z+x]){    
				k=1;
			}else{
				k=0;
			}
		}
	}
	} 
} 
	return k;
}



int main(){
int n,m,p,k,r;  
char un[20];
m=0;
p=0;
r=0;
scanf("%d %s",&n,&un);
struct info info1[n];
struct info t;

for(int i=0;i<n;i++){
	scanf("%s %s %s",info1[i].name,info1[i].id,info1[i].sco);
}
int b[n];
for (int i=0;i<n;i++) {
		if(strcmp(info1[i].sco,"n/a")==0){
			b[i]=-1; 
	 }else{
        b[i]=atoi(info1[i].sco);

    }
}
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(b[j]>b[i]){
			k=b[i];
			b[i]=b[j];
			b[j]=k;
		    t=info1[i];
			info1[i]=info1[j];
			info1[j]=t;	}
		
	}
}
for(int i=0;i<n;i+=r){
	r=0;
	for(int j=0;j<n;j++){
	if(b[j]==b[i]){
	info1[j].rank=i+1;
	r++;}
	}
}
for(int i=0;i<n;i++){
m=iss(un,info1[i].name);
p=iss(un,info1[i].id);
	if((m==1)|| (p==1) || (strcmp(un,info1[i].sco)==0) ){
			if(strcmp(info1[i].sco,"n/a")==0){
				printf("%s %s %s n/a\n",info1[i].name ,info1[i].id,info1[i].sco);
				}else{
			printf("%s %s %s %d\n",info1[i].name,info1[i].id,info1[i].sco,info1[i].rank);	
			 }
	}
	else{
		continue;
	} 
}	
	return 0;
}
