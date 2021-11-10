/*
判断字符串是否满足要求。如果字符串满足以下要求之一的字符串输出YES，否则输出NO：
1. 字符串等于“SCU”；
2. 形如“xSCUx”的字符串,其中x是仅由字母A组成的字符串；

输入
每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出
每个字符串的检测结果占一行，如果该字符串满足条件，则输出YES，否则输出NO。

样例

输入
6
SCU
AASCUAA
xSCUx
SU
SUC
Whatever
	
输出
YES
YES
NO
NO
NO
NO
*/
#include<stdio.h>
#include<string.h>
int iss (char s[],char t[]){ //检验s是否是t的子字符串 
	int z,x,c,v,k;
	z=0;
	c=strlen(t);
	v=strlen(s);
	k=0;
for (z=0;z<c;z++){
	if(t[z]==s[0]) 
		for(x=1;x<v;x++){        
			if(s[x]==t[z+x]){   //保序 
				k=1;
			}else{
				k=0;
			}
		}
	} 
	return k;
}
 
 
int main(){
	int n,b,na,ns,nc,nu,ano,pr,po,ls,lc,lu;  //ns,nc,nu表示s，c，u个数，pr表示第s前字符数，po表示u后字符数 
	char s1[]="SCU";
scanf("%d",&n);
	char s[n][100]; //定义字符串组 
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
    case 'A':na++;break;  //na没啥用因为不需要输出na，但是A字符串在题目中是合法的，所以放在这里把A单独分出来 
    case 'C':nc++;lc=j;break;
    case 'U':nu++;lu=j;break;
    default:ano=0;break; //检验是否含有S，C, U ,A以外的其他字符 
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
