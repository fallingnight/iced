#include<stdio.h>
#include<stdlib.h>

int main(){
	char s[20];
	char s2;
	int i=0;
	printf("please enter the word:");
	scanf("%s",&s);
	while (s[i]!='\0'){
		s2=s[i];
		if (s2>='A' && s2<='Z'){
			s2=s2+32;
		}else if(s2>='a' && s2<='z'){
			s2=s2-32;
		}
		printf("%c",s2);
		i++;
	}
	printf("\n");
	system("pause");
return 0;
}
