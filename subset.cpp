#include<stdio.h>
#include<string.h>
#include<windows.h>

int iss (char s[],char t[]){
	int z,x,c,v,k;
	z=0;
	c=strlen(t);
	v=strlen(s);
	k=0;
for (z=0;z<c;z++){
	if(t[z]==s[0]){
		for(x=1;x<v;x++){
			if(s[x]==t[z+x]){
				k=1;
			}else{
				k=0;
			}
		}
	}
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
