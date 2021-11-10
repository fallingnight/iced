#include<stdio.h>


int main(){
	char s[]="HELLO";
	char s2;
	int i=0;
	printf("%s\n",s);
	while (s[i]!='\0'){
		s2=s[i];
		if (s2>='A' && s2<='Z'){
			s2=s2+32;
		}
		printf("%c",s2);
		i++;
	}
return 0;
}
