#include <stdio.h> 
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

void rgb_init(){
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwInMode,dwOutMode;
	GetConsoleMode(hIn,&dwInMode);
	GetConsoleMode(hOut,&dwOutMode);
	dwInMode |=0x0200;
	dwOutMode |=0x0004;
	SetConsoleMode(hIn,dwInMode);
	SetConsoleMode(hOut,dwOutMode);
}

void rgb_set(int wr,int wg,int wb,int br,int bg, int bb){
	printf("\033[38;2;%d;%d;%dm\033[48;2;%d;%d;%dm",wr,wg,wb,br,bg,bb);
}

/*���㻨����ڵ�*/ 

int main(void)
{ int a = 123;
 float b=13.0f/11;
 
	rgb_init();
	rgb_set(255,106,106,0,0,0);
   printf("wooyeahyeah ���������˭\n��������˫���ұ�ø���������˯\n��ҹ �ų��ŵĴ��\n�β���Ŀ������û����׼��\n\n");
    rgb_set(255,236,139,0,0,0);
   printf("\nwooyeahyeah ���������˭\n����������ô���ָ�ӭ��˭��ζ\n���� �����ξ����\n�ȴ������鷳�������ֶ���һ��\n\n");
    rgb_set(84,255,159,0,0,0);
   printf("\n�賿�������һ���������һ���ø�\nһ����ȫ����ɾ�� ���ٴ��㹻��ϰ����\n�����Ѳ��䵱��С����ΪС���������ڴ�\n�Ұѳ�Ƭȫ�����������Ĵ����������\n\n");
    rgb_set(135,206,250,0,0,0);
   printf("\n����Ȧ��һ���嵥 ������Ϊ��һ������\n��Щ�ߵø��õ����������Ƿ�Ҳ������\n����������keep it real ����������ż���\n���ǵ���ϲ��hiphop����ϲ���Ź���ƨ yeahyeahyeah\n\n");
    rgb_set(171,130,255,0,0,0);
   printf("\n���ص���\n������Ѷ����ص���\n�Ͼ�αװ��Ψһ���� �ٶ������������\n��������еĹ��� ���ʣ��һ������\n����һ������� �����ȱ��Ž���\n\n"); 
    rgb_set(255,131,250,0,0,0);
   printf("\n�����Ϊ��˭ ����������˭\n����յ��ķ��������Ƿ�������˭\n���������˭ �����ְ���˭\n��ʧ���ǹ������˺�������������\n\n");
    rgb_set(0,245,255,0,0,0);
   printf("\nwooyeahyeah ���������˭\n��������˫���ұ�ø���������˯\n��ҹ �ų��ŵĴ��\n�β���Ŀ������û����׼��\n\n");
    rgb_set(132,112,255,0,0,0);
   printf("\nwooyeahyeah ���������˭\n����������ô���ָ�ӭ��˭��ζ\n���� �����ξ����\n�ȴ������鷳�������ֶ���һ��\n\n");
   /*����zinco-24*/ 
    rgb_set(122,255,122,0,0,0);
    printf("233*233=%d\n\n",233*233);
   system("pause");
    rgb_set(255,122,122,36,108,156);
    printf("%d\n",a);
    a=0*a;
    printf("%d\n",a);
    a=a-11;
    printf("%d\n",a);
    printf("13/11=%.3f\n",b);
   system("pause");
   return 0;
}
