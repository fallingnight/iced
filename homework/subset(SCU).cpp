/*
�ж��ַ����Ƿ�����Ҫ������ַ�����������Ҫ��֮һ���ַ������YES���������NO��
1. �ַ������ڡ�SCU����
2. ���硰xSCUx�����ַ���,����x�ǽ�����ĸA��ɵ��ַ�����

����
ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�

���
ÿ���ַ����ļ����ռһ�У�������ַ������������������YES���������NO��

����

����
6
SCU
AASCUAA
xSCUx
SU
SUC
Whatever
	
���
YES
YES
NO
NO
NO
NO
*/
#include<stdio.h>
#include<string.h>
int iss (char s[],char t[]){ //����s�Ƿ���t�����ַ��� 
	int z,x,c,v,k;
	z=0;
	c=strlen(t);
	v=strlen(s);
	k=0;
for (z=0;z<c;z++){
	if(t[z]==s[0]) 
		for(x=1;x<v;x++){        
			if(s[x]==t[z+x]){   //���� 
				k=1;
			}else{
				k=0;
			}
		}
	} 
	return k;
}
 
 
int main(){
	int n,b,na,ns,nc,nu,ano,pr,po,ls,lc,lu;  //ns,nc,nu��ʾs��c��u������pr��ʾ��sǰ�ַ�����po��ʾu���ַ��� 
	char s1[]="SCU";
scanf("%d",&n);
	char s[n][100]; //�����ַ����� 
for(int i=0;i<n;i++){
	scanf("%s",s[i]);
}
for(int i=0;i<n;i++){
	
	na=0;ns=0;nc=0;nu=0;pr=0;ls=0;ano=1;
	b=iss(s1,s[i]);
	
	for(int j=0;j<strlen(s[i]);j++)
  {
   switch(s[i][j])
   {
    case 'S':ns++;ls=j;break;
    case 'A':na++;break;  //naûɶ����Ϊ����Ҫ���na������A�ַ�������Ŀ���ǺϷ��ģ����Է��������A�����ֳ��� 
    case 'C':nc++;lc=j;break;
    case 'U':nu++;lu=j;break;
    default:ano=0;break; //�����Ƿ���S��C, U ,A����������ַ� 
   }
  }
 pr=ls;
 po=strlen(s[i])-lu-1;
	if(b==1 && ns==1 &&nc==1 &&nu==1 && pr==po && ano==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}

return 0;
} 
