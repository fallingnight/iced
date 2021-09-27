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

/*整点花里胡哨的*/ 

int main(void)
{ int a = 123;
 float b=13.0f/11;
 
	rgb_init();
	rgb_set(255,106,106,0,0,0);
   printf("wooyeahyeah 镜子里的是谁\n看着他的双眼我变得更加难以入睡\n午夜 才出门的刺猬\n参差不齐的目光他还没做好准备\n\n");
    rgb_set(255,236,139,0,0,0);
   printf("\nwooyeahyeah 镜子里的是谁\n动物世界这么大又该迎合谁口味\n蝴蝶 踩着梦境起飞\n等待他的麻烦事醒来又多了一堆\n\n");
    rgb_set(84,255,159,0,0,0);
   printf("\n凌晨六点过了一分我又完成一首烂歌\n一口气全部都删掉 几百次足够成习惯了\n我早已不配当个小孩因为小孩才能有期待\n我把唱片全部留下其他的打包进垃圾袋\n\n");
    rgb_set(135,206,250,0,0,0);
   printf("\n朋友圈是一份清单 年少有为是一种心酸\n那些走得更好的朋友你们是否也如此这般\n他们想让你keep it real 还想让你演偶像剧\n他们到底喜欢hiphop还是喜欢闻狗放屁 yeahyeahyeah\n\n");
    rgb_set(171,130,255,0,0,0);
   printf("\n不必当真\n酒醉酒醒都不必当真\n毕竟伪装是唯一方针 再对着欲望洒香氛\n你好生命中的过客 最后剩下一个两个\n总有一天会错过的 还请先别急着讲课\n\n"); 
    rgb_set(255,131,250,0,0,0);
   printf("\n你今天为了谁 明天又忘了谁\n在这空荡的房间里你是否又想起谁\n你今天厌了谁 明天又爱上谁\n迷失在那过往的伤痕中人生不复回\n\n");
    rgb_set(0,245,255,0,0,0);
   printf("\nwooyeahyeah 镜子里的是谁\n看着他的双眼我变得更加难以入睡\n午夜 才出门的刺猬\n参差不齐的目光他还没做好准备\n\n");
    rgb_set(132,112,255,0,0,0);
   printf("\nwooyeahyeah 镜子里的是谁\n动物世界这么大又该迎合谁口味\n蝴蝶 踩着梦境起飞\n等待他的麻烦事醒来又多了一堆\n\n");
   /*泥鳅zinco-24*/ 
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
