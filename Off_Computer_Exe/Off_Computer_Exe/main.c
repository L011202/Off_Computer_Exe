#define _CRT_SECURE_NO_DEPRECATE    
#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	printf("��ĵ��Ի���60��ػ������������������ȡ��\n");
again:
	scanf("%s", arr);
	if ((strcmp(arr, "������")) == 0) {
		system("shutdown -a");
		printf("�ɹ�ȡ���ػ�!!!\n");
	}
	else {
		goto again;
	}
	return 0;
}