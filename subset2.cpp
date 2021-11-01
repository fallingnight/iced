#include<stdio.h>
#include<string.h>
#include<windows.h>

int iss (char s[],char t[]){
	int z,x,c,v,k;
	z=0;
	c=strlen(s);
	v=strlen(t);
	k=0;
while(z<c&&x<v){
	if(s[z]==t[x]){
		z++;
	}
	x++;
	
}
if(z==c){k=1;
}else{k=0;
}
	return k;
}
 
 int main(){
 	int b;
 	char s[80],t[80];
 	printf("Enter the first string:");
 	gets(s);
 	printf("Enter the second string:");
 	gets(t);
 	b=iss(s,t);
 	if (b==1){
 		printf("The first string is the sencond one's subset. \n");
	 }else{
	 	printf("The first string isn't the sencond one's subset. \n");
	 }
	 
	 system("pause");
 	
 	
 	
 	
 	
 	

    return 0;
 }
