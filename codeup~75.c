/*//codeup 1051��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", b >= a);

	return 0;
}
*/

/*//codeup 1052��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a != b);

	return 0;
}
*/

/*//codeup 1053��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, result;
	scanf("%d", &n);
	result =! n;
	printf("%d", result);

	return 0;
}
*/

/*//codeup 1054��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", n1 && n2); // ��������

	return 0;
}
*/

/*//codeup 1055��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d", n1 || n2);

	return 0;
}
*/

/*//codeup 1056��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d", (!n1 && n2) || (n1 && !n2));

	return 0;
}
*/

/*//codeup 1057��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (!a && !b) || (a && b));

	return 0;
}
*/

/*//codeup 1058��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (!a && !b));

	return 0;
}
*/

/*//codeup 1059��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	scanf("%d", &a);
	printf("%d", ~a); // ~a = -a - 1 / -a = ~a + 1 ~ = NOT������

	return 0;
}
*/

/*//codeup 1060��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a & b); // & = AND������ �Ѵ� ������ 1

	return 0;
}
*/

/*//codeup 1061��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a | b); // | = OR������ �ϳ��� ������ 1

	return 0;
}
*/

/*//codeup 1062��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a ^ b); // ^ = XOR������ ���� �ٸ��� 1

	return 0;
}
*/

/*//codeup 1063��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a > b ? a : b); // ���̸� a ,�����̸� b

	return 0;
}
*/

/*//codeup 1064��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);
	//���� ���� ���� ã��
	return 0;
}
*/

/*// codeup 1064�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a > b ? a : b) > c ? (a > b ? a : b) : c);
	//���� ū ���� ���ϱ�
	return 0;
}
*/

/*//codeup 1064�� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", (a > b ? a : b) > c ? (a > b ? a : b) : c);
	printf("%d\n", (a > b ? a : b) < c ? (a > b ? a : b) : c);
	printf("%d\n", (a < c ? a : b) < c ? (a < b ? a : b) : c);
	//ū �� ��� ���ʴ�� ������ �ϱ�
	return 0;
}
*/

/*//codeup 1065��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) {
		printf("%d\n", a);
	}
	if (b % 2 == 0) {
		printf("%d\n", b);
	}
	if (c % 2 == 0) {
		printf("%d\n", c);
	}
	return 0;
}
*/

/*//codeup 1066��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) {
		printf("even\n"); //¦
	}
	else
	{
		printf("odd\n"); //Ȧ
	}
	if (b % 2 == 0) {
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	if (c % 2 == 0) {
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	return 0;
}
*/

/*//codeup 1067��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a < 0) {
		printf("minus\n");
	}
	else
	{
		printf("plus\n");
	}
	if (a % 2 == 0) {
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	return 0;
}
*/

/*//codeup 1068��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (90 <= a && a <= 100) {
		printf("A");
	} 
	else if (70 <= a && a <= 89) {
		printf("B");
	}
	else if (40 <= a && a <= 69) {
		printf("C");
	}
	else {
		printf("D");
	}
	return 0;
}
*/

/*//codeup 1069��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char score;
	scanf("%c", &score);
	switch (score)
	{
	case'A':
		printf("best!!!");
		break;
	case'B':
		printf("good!!");
		break;
	case'C':
		printf("run!");
		break;
	case'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
	}

	return 0;
}
*/

/*//codeup 1070��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	default:
		printf("winter");
	}
	return 0;
}
*/

/*//codeup 1071��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
replay:
	scanf("%d", &n);
	if (n != 0) {
		printf("%d\n", n);
		goto replay;
	}

	return 0;
}
*/

/*//codeup 1071�� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a;
replay:
	scanf("%c", &a);
	if (a != 'c') {
		printf("%c\n", a);
		goto replay;
	}
	return 0;
}
*/

/*//codeup 1072��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2;
	scanf("%d", &num1);
replay:
	scanf("%d", &num2);
	if (num1-- != 0) {
		printf("%d\n", num2);
		goto replay;
	}

	return 0;
}
*/

/*//codeup 1073��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 1;
	while (n != 0) {
		scanf("%d", &n);
		if (n != 0) {
			printf("%d\n", n);
		}
	}
	return 0;
}
*/

/*//codeup 1074��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 1;
	scanf("%d", &n);
	while (n != 0) {
		printf("%d\n", n);
		n = n - 1;
	}
	return 0;
}
*/

/*//codeup 1075��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n != 0) {
		n = n - 1;
		printf("%d\n", n);
	}
	return 0;
}
*/

//codeup 1075���� Ǯ��----------------------------------------------------