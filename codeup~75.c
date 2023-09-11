/*//codeup 1051번
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

/*//codeup 1052번
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

/*//codeup 1053번
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

/*//codeup 1054번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", n1 && n2); // 논리연산자

	return 0;
}
*/

/*//codeup 1055번
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

/*//codeup 1056번
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

/*//codeup 1057번
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

/*//codeup 1058번
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

/*//codeup 1059번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	scanf("%d", &a);
	printf("%d", ~a); // ~a = -a - 1 / -a = ~a + 1 ~ = NOT연산자

	return 0;
}
*/

/*//codeup 1060번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a & b); // & = AND연산자 둘다 같을때 1

	return 0;
}
*/

/*//codeup 1061번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a | b); // | = OR연산자 하나라도 같을때 1

	return 0;
}
*/

/*//codeup 1062번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a ^ b); // ^ = XOR연산자 서로 다를때 1

	return 0;
}
*/

/*//codeup 1063번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a > b ? a : b); // 참이면 a ,거짓이면 b

	return 0;
}
*/

/*//codeup 1064번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);
	//제일 작은 숫자 찾기
	return 0;
}
*/

/*// codeup 1064번 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a > b ? a : b) > c ? (a > b ? a : b) : c);
	//제일 큰 숫자 구하기
	return 0;
}
*/

/*//codeup 1064번 응용 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", (a > b ? a : b) > c ? (a > b ? a : b) : c);
	printf("%d\n", (a > b ? a : b) < c ? (a > b ? a : b) : c);
	printf("%d\n", (a < c ? a : b) < c ? (a < b ? a : b) : c);
	//큰 수 대로 차례대로 나오게 하기
	return 0;
}
*/

/*//codeup 1065번
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

/*//codeup 1066번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) {
		printf("even\n"); //짝
	}
	else
	{
		printf("odd\n"); //홀
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

/*//codeup 1067번
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

/*//codeup 1068번
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

/*//codeup 1069번
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

/*//codeup 1070번
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

/*//codeup 1071번
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

/*//codeup 1071번 응용 문제
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

/*//codeup 1072번
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

/*//codeup 1073번
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

/*//codeup 1074번
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

/*//codeup 1075번
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

//codeup 1075문제 풀이----------------------------------------------------