//˳������㷨
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int func(int arr[],int length,int num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num)
			return i;

	}

}
//������C������������� ��ô���룿��ô�˳����룿
//ȥ������˳����ҵİ��� �����㷨 ���Դ���
//�Ƚϴ���ʱ�临�Ӷȣ��ռ临�Ӷ�
int main() {
	int arr[1000];
	int i = 0; int numx = 0; int num = 0;
	//do{
	//	printf("����������Ԫ��:\n");
	//	scanf("%d",numx);
	//	arr[i] = numx;
	//	i++;
	//} while (numx == null);
	num = 5;

	while(scanf("%d", &numx) != EOF) {
		arr[i] = numx;
		i++;
	}


	
	
	printf("Ҫ���ҵ������ڵ�%dλ", func(arr, i, num));
}