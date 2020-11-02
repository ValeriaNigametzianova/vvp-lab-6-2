#include<stdio.h>

int main()
{
	int A=2, B=13, C=7;
	int t; //вспомогательная переменная
	t = A; //запоминаем значение А в вспомогательную переменную 
	A = C;
	C = B;
	B = t;
	printf("A=%d, B=%d, C=%d", A, B, C);
	return 0;
}
