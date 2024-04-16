#define _CRT_SECURE_NO_DEPRECATE    
#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	printf("你的电脑还有60秒关机，请输入我是猪进行取消\n");
again:
	scanf("%s", arr);
	if ((strcmp(arr, "我是猪")) == 0) {
		system("shutdown -a");
		printf("成功取消关机!!!\n");
	}
	else {
		goto again;
	}
	return 0;
}