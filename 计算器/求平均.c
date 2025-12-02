#define _CRT_SECURE_NO_WARNINGS
#include "求平均.h"
 
void m() {
	printf("(输入\"-1\"才能结束计算呀！)\n");
	while (1) {
		printf("输入你要求的数字唔(千万千万不要输入不是数字的坏字符！)：\n");
		if (scanf("%d", &num) != 1) {//检测输入字符
			if (colorfulegg == 2) {
				printf("都三次了呐！滚蛋呐！说了你不听是喵？\n");
				exit(0);
			}
			printf("输入数字啊喂！不要把我玩坏了呜呜呜....>~<||\n");
			colorfulegg++;
			num = 0;
			continue;//计数，三次后自动退出（exit抄的ds
		}
		if (num == -1)break;//检测退出信号
		all += num;
		i++;
		average = (double)all / i;
		printf("\n喵！当前次数为%d,平均数为%.1lf\n", i, average);//输出平均，计次
		if (i % 3 == 0)printf("提醒主人哦！-1能让我退出的！\n");
	}
	printf("\n喵！你的平均数为：%.2lf\n", average);//总平均
}