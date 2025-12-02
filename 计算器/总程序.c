#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "猜数字.h" 
#include "求平均.h" 
static int a = 0;//静态变量录入
int main() {
	int n;
	int s = 1;
	printf("喵！我来了主人\n");
	while (s) {
		if (a == 2) {
			printf("\n主人，你难道不会对我说012这些数字吗....");
			printf("\n也许你不想认真和我玩耍呢....");
			printf("\n好吧！也许你不开心，那我先退下了喵！");//计数，乱敲就滚
				break;
		}
		printf("快下命令喵！\n0 退出喵！\n1 猜数字喵！\n2 求平均喵！\n\n\n");
		scanf("%d", &n);//选择情况
		switch (n) {
		case 0:
			s=0;
			break;
		case 1:
			printf("喵！开始猜数字哦!");
			numbergame();
			break;
		case 2:
			printf("喵！开始求平均数了哦！");
			m();
			break;
		default:
			printf("喵！没有此功能哦！");
			a++;//在这里计数default的次数
		}
	}
	
	
	printf("感谢使用喵！再见喵！");
	return 0;
}