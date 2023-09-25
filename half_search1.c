//顺序查找算法
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int func(int arr[],int length,int num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num)
			return i;

	}

}
//还需解决C语言输入的问题 怎么输入？怎么退出输入？
//去找其他顺序查找的案例 更新算法 调试代码
//比较代码时间复杂度，空间复杂度
int main() {
	int arr[1000];
	int i = 0; int numx = 0; int num = 0;
	//do{
	//	printf("请输入数组元素:\n");
	//	scanf("%d",numx);
	//	arr[i] = numx;
	//	i++;
	//} while (numx == null);
	num = 5;

	while(scanf("%d", &numx) != EOF) {
		arr[i] = numx;
		i++;
	}


	
	
	printf("要查找的数据在第%d位", func(arr, i, num));
}