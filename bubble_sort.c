
#include <stdio.h>

void check(char a[],int length);
void bubble_sort(char a[], int length);
int main(void) {

	char a[] = { 9,8,7,6,5,4,3,2,1 };

	//printf("%d", sizeof(a));
	check(a, sizeof(a));
	bubble_sort(a, sizeof(a));
	printf("\n\nȮ���۾�\n\n");
	check(a, sizeof(a));

	return 0;
}

// �迭 Ȯ��
void check(char a[], int length) {
	for (int i = 0; i < length; i++) {
		printf("[%d] ",a[i]);
	}
	puts("\n");
}

// ���� ����
void bubble_sort(char a[], int length)
{
	char b;
	for (int i = 0; i < length-1; i++)
	{
		if (a[i] > a[i + 1])
		{
			b = a[i + 1];
			a[i + 1] = a[i];
			a[i] = b;
		}
	}
	if (length == 1)
	{
		return 0;
	}
	bubble_sort(a, length - 1);
}