/*
����n��ѧ�������������֤�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ�������������֤�š�ע�⣺ѧ�������п���ȱ����û�гɼ�����ʾΪn/a.

ÿ�������������1��������������ʽΪ

  ��1�У�������n (1<=n<=100)

  ��2�У���1��ѧ�������� ѧ�� �ɼ�

  ��3�У���2��ѧ�������� ѧ�� �ɼ�

  ... ... ...

  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�

��������Ϊ������10���ַ����ַ��������֤�Ǳ�׼18λ���ɼ�Ϊ0��100֮���һ��������

������������һλѧ���гɼ���

��ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ�������֮����1���ո�����ɼ���ߵ�ѧ���ж������������ֵ�����С���Ǹ�������ɼ���͵��ж������������ֵ��������Ǹ���

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
