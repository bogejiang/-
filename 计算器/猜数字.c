
#include "猜数字.h"    // 包含自定义头文件

void numbergame() {
	srand(time(0));
	int a = rand();//获取随机数
	int ra = a % 100;//将其限制为0-99
	int user;
	int n = 0;
	do {
		printf("喵！输入你所想的数字：");
		scanf("%d", &user);
		n++;
		if (user > ra)printf("喵！大了\n");
		if (user < ra)printf("喵！小了\n");
	} while (ra != user);
	printf("meow!yes!its%d!", ra);//检测数字

	return 0;
}