/*
����n��ѧ�������������֤�š��ɼ������Ҳ����ƥ����Ҵ���ѧ����������ѧ�źͳɼ���ѧ�������п���ȱ����û�гɼ�����ʾΪn/a��

������Ҵ�����������������֤�ţ�����ģ�����ң���ֻҪ���а������Ҵ�(���ִ�Сд)��������������������Ҵ�����Գɼ������Ǿ�ȷ���ҡ�

ÿ�������������1��������������ʽΪ
  ��1�У�������n  �����Ҵ�
  ��2�У���1��ѧ�������� ѧ�� �ɼ�
  ��3�У���2��ѧ�������� ѧ�� �ɼ�
  ... ... ...
  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
��������Ϊ������10���ַ����ַ��������֤�Ǳ�׼18λ���ɼ�Ϊ0��100֮���һ��������

���������Ӧ���Ҵ���ѧ����Ϣ(���� ѧ�� �ɼ�  ����)(����ɼ�Ϊn/a����������Ϊn/a)����֮���ÿո������ÿ��ѧ��һ�С����������ǰ��ճɼ��������е�����������ж��ѧ���ĳɼ���ͬ������Щѧ����������ͬ���������ļ������������������������Ķ��ѧ�����������˳�������
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
