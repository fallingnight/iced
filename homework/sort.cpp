/*
读入n名学生的姓名、身份证号、成绩，分别输出成绩最高和成绩最低学生的姓名和身份证号。注意：学生名单中可能缺考，没有成绩，表示为n/a.

每个测试输入包含1个测试用例，格式为

  第1行：正整数n (1<=n<=100)

  第2行：第1个学生的姓名 学号 成绩

  第3行：第2个学生的姓名 学号 成绩

  ... ... ...

  第n+1行：第n个学生的姓名 学号 成绩

其中姓名为不超过10个字符的字符串，身份证是标准18位，成绩为0到100之间的一个整数。

输入中至少有一位学生有成绩。

对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，项与项之间有1个空格。如果成绩最高的学生有多个，输出姓名字典序最小的那个，如果成绩最低的有多个，输出姓名字典序最大的那个。

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int n,b,bmax,bmin,j,k;  
scanf("%d",&n);
	char name[n][11]; 
	char id[n][19];
	char sco[n][5]; 
	bmax=-1;
	bmin=101;
	j=0;
	k=0;
for(int i=0;i<n;i++){
	scanf("%s %s %s",name[i],id[i],sco[i]);
}
 for(int i=0;i<n;i++){
 	if(strcmp(sco[i],"n/a")==0){
 		continue; 
	 }else{
 	b=atoi(sco[i]);
 	if(b<=bmin){
 		if(b==bmin){
 			if(strcmp(name[i],name[j])>0){
 				j=i;
			 }else{
			 	j=j;
			 }
		 }else{
 		bmin=b;
 		j=i;}
	 }
	 if(b>=bmax){
	 	if(b==bmax){
		if(strcmp(name[i],name[j])<0){
			k=i;
	 	}else{
	 		k=k; 
		 }}else {
		 bmax=b;
	 	k=i;
	 }
	 } 

 }}
 printf("%s %s\n",name[k],id[k]);
 printf("%s %s\n",name[j],id[j]);
 
 return 0;
}
